import unittest
from conjecture import Conjecture

class TestConjecture(unittest.TestCase):
    def setUp(self):
        self.conjecture = Conjecture(None, None)
        self.assertIsInstance(self.conjecture, Conjecture)

    def testRand(self):
        self.assertTrue(self.conjecture.rand() > self.conjecture.ENTROPY_CUTOFF)

    def testSeed(self):
        self.conjecture.seed()
        self.assertTrue(self.conjecture.base > self.conjecture.ENTROPY_CUTOFF, "Rerun If This Fails! main.py Covers This!")
        self.assertTrue(self.conjecture.secret > self.conjecture.ENTROPY_CUTOFF, "Rerun If This Fails! main.py Covers This!")
        self.assertTrue(self.conjecture.signal > self.conjecture.ENTROPY_CUTOFF, "Rerun If This Fails! main.py Covers This!")

    def testTune(self):
        self.testSeed()
        self.conjecture.tune()
        self.assertEqual(self.conjecture.channel, pow(self.conjecture.base, self.conjecture.signal, self.conjecture.PRIME))

    def testGetChallenge(self):
        self.testTune()
        self.starterBase = 0
        while(self.starterBase < self.conjecture.ENTROPY_CUTOFF):
            self.starterBase = self.conjecture.rand()

        self.challenge = self.conjecture.getChallenge(self.starterBase)
        self.assertEqual(self.challenge, pow(self.starterBase, self.conjecture.secret, self.conjecture.PRIME))
        

    def testSetBase(self):
        while(self.conjecture.base < self.conjecture.ENTROPY_CUTOFF):
            self.testGetChallenge()
            self.conjecture.setBase(self.challenge)
        self.assertEqual(self.conjecture.base, pow(self.challenge, self.conjecture.secret, self.conjecture.PRIME))
        self.testTune()

    def testGenerate(self):
        self.testSetBase()
        self.conjecture.generate()
        self.assertEqual(self.conjecture.pole, pow(self.conjecture.base, self.conjecture.secret, self.conjecture.PRIME)) 

    def testGetCarrier(self):
        self.testGenerate()
        self.associate = Conjecture(None, None)
        self.associate.seed()
        self.associate.tune()
        self.associateChallenge = self.associate.getChallenge(self.starterBase)
        self.conjecture.setBase(self.associateChallenge)
        self.assertEqual(self.conjecture.base, pow(self.associateChallenge, self.conjecture.secret, self.conjecture.PRIME))
        self.associate.setBase(self.challenge)
        self.assertEqual(self.associate.base, pow(self.challenge, self.associate.secret, self.associate.PRIME))
        self.conjecture.generate()
        self.associate.generate()
        self.carrier = self.conjecture.getCarrier(self.associate.pole)
        self.associateCarrier = self.associate.getCarrier(self.conjecture.pole)
        self.assertEqual(self.carrier, pow(self.associate.pole, self.conjecture.secret, self.conjecture.PRIME))
        self.assertEqual(self.associateCarrier, pow(self.conjecture.pole, self.associate.secret, self.associate.PRIME))

    def testEstablishListener(self):
        self.testGetCarrier()
        self.associate.establishListener()
        self.assertTrue(self.associate.identity > self.associate.ENTROPY_CUTOFF, "Rerun If This Fails! main.py Covers This!")
        self.assertEqual(self.associate.foundation, pow(self.associate.base, self.associate.identity, self.associate.PRIME))
        self.assertTrue(self.associate.isListener)

    def testEstablishElement(self):
        self.testEstablishListener()
        self.conjecture.establishElement(self.associate.foundation, self.associate.channel)
        self.assertFalse(self.conjecture.isListener)
        self.assertTrue(self.conjecture.identity > self.conjecture.ENTROPY_CUTOFF, "Rerun If This Fails! main.py Covers This!")
        self.assertEqual(self.conjecture.foundation, pow(self.conjecture.base, self.conjecture.identity, self.conjecture.PRIME))
        self.assertEqual(self.conjecture.element, pow(self.associate.channel, self.conjecture.identity, self.conjecture.PRIME) + pow(self.associate.foundation, self.conjecture.signal, self.conjecture.PRIME) + pow(self.associate.foundation, self.conjecture.identity, self.conjecture.PRIME))

    def testSyncDynamo(self):
        self.testEstablishElement()
        self.associate.establishElement(self.conjecture.foundation, self.conjecture.channel)
        self.conjecture.syncDynamo()
        self.assertEqual(self.conjecture.dynamo, pow(self.conjecture.base, self.conjecture.signal, self.conjecture.element))

    def testGetManifold(self):
        self.testSyncDynamo()
        self.associate.syncDynamo()
        self.conjecture.getManifold(self.associate.dynamo)
        self.assertEqual(self.conjecture.manifold, pow(self.associate.dynamo, self.conjecture.signal, self.conjecture.element))

    def testOpenManifold(self):
        self.testGetManifold()
        self.associate.getManifold(self.conjecture.dynamo)
        self.conjecture.openManifold(self.carrier)
        self.assertEqual(self.conjecture.ring, pow(self.carrier, self.conjecture.manifold, self.conjecture.element))
        self.assertEqual(self.conjecture.barn, pow(self.conjecture.ring, self.conjecture.manifold, self.conjecture.element))

    # all it really tests for
    def testValidateManifold(self):
        validateFixture = Conjecture(None, None)
        validateFixture.base = validateFixture.rand()
        validateFixture.secret = validateFixture.rand()
        validateFixture.signal = validateFixture.rand()
        validateFixture.channel = validateFixture.rand()
        validateFixture.pole = validateFixture.rand()
        validateFixture.identity = validateFixture.rand()
        validateFixture.foundation = validateFixture.rand()
        validateFixture.element = validateFixture.rand()
        validateFixture.dynamo = validateFixture.rand()
        validateFixture.manifold = validateFixture.rand()
        validateFixture.ring = validateFixture.rand()
        validateFixture.barn = validateFixture.rand()
        self.assertTrue(validateFixture.validateManifold())
        validateFixture.base = 0
        self.assertFalse(validateFixture.validateManifold())

    def testHashStringAndVoltpereFunctions(self):
        self.testOpenManifold()
        voltpere = self.conjecture.hashString("testcases")
        chargeRing = pow(self.conjecture.ring, self.conjecture.ring, self.conjecture.FERMAT_CUTOFF)
        ampere = self.conjecture.charge(voltpere)
        self.assertEqual(ampere, pow(self.conjecture.barn, voltpere, chargeRing))
        henry = self.conjecture.induce(ampere)
        self.assertEqual(henry, pow(ampere, self.conjecture.manifold, chargeRing))
        proofOfStake = self.conjecture.intend(ampere) 
        ampereChannel = pow(self.conjecture.channel, self.conjecture.channel, self.conjecture.FERMAT_CUTOFF)
        self.assertEqual(proofOfStake, pow(ampere, self.conjecture.element, ampereChannel))
        fermat = self.conjecture.prime(proofOfStake)
        self.assertEqual(fermat, pow(proofOfStake, self.conjecture.element, ampereChannel)) 
