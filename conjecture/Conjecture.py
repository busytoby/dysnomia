#!/usr/bin/env python
# encoding: utf-8

import binascii
from conjecture.gui import ConjectureGUI 
from random import randrange

PRIME = 257
ENTROPY_CUTOFF = 111  # Not Simple Stars But Complex Organisms

class Conjecture(object):
    def __init__(self, windowGrid, name):
        self.PRIME = PRIME
        self.ENTROPY_CUTOFF = ENTROPY_CUTOFF
        self.GUI = None

        self.isListener = False
        self.base = 0
        self.secret = 0
        self.signal = 0
        self.channel = 0
        self.pole = 0
        self.identity = 0
        self.foundation = 0
        self.element = 0
        self.dynamo = 0
        self.manifold = 0
        self.ring = 0
        self.barn = 0

        if(windowGrid is not None):
            self.GUI = ConjectureGUI(windowGrid, name)

    def rand(self):
        entropy = 0
        while(entropy < ENTROPY_CUTOFF):
            entropy = randrange(PRIME)
        return entropy

    def seed(self):
        self.base = self.rand()
        self.secret = self.rand()
        self.signal = self.rand()

    def tune(self):
        self.channel = pow(self.base, self.signal, PRIME)

    def getChallenge(self, starterBase):
        return pow(starterBase, self.secret, PRIME)

    def setBase(self, challenge):
        self.base = pow(challenge, self.secret, PRIME)
        self.tune()

    def generate(self):
        self.pole = pow(self.base, self.secret, PRIME)

    def getCarrier(self, peerPole):
        return pow(peerPole, self.secret, PRIME)

    def establishListener(self):
        self.identity = self.rand()
        self.foundation = pow(self.base, self.identity, PRIME)
        self.isListener = True
        if(self.GUI is not None):
            self.GUI.frame.text_set(self.GUI.frame.text + " (Listener)")

    def establishElement(self, peerFoundation, peerChannel):
        if not self.isListener:
            self.identity = self.rand()
            self.foundation = pow(self.base, self.identity, PRIME)

        convergence = pow(peerFoundation, self.identity, PRIME)
        moment = pow(peerChannel, self.identity, PRIME)
        authentication = pow(peerFoundation, self.signal, PRIME)
        peerMoment = pow(peerChannel, self.signal, PRIME)

        accord = moment + authentication
        element = convergence + accord
        discardMoment = element + peerMoment

        self.element = element

    def syncDynamo(self):
        self.dynamo = pow(self.base, self.signal, self.element)

    def getManifold(self, peerDynamo):
        self.manifold = pow(peerDynamo, self.signal, self.element)

    def openManifold(self, carrier):
        self.ring = pow(carrier, self.manifold, self.element)
        self.barn = pow(self.ring, self.manifold, self.element)

    def validateManifold(self):
        validateList = [ self.base, self.secret, self.signal, self.channel, self.pole,
                         self.identity, self.foundation, self.element, self.dynamo,
                         self.manifold, self.ring, self.barn ]
        return all(i >= ENTROPY_CUTOFF for i in validateList)

    def updateGUIFields(self):
        if(self.GUI is not None):
            self.GUI.BaseEntry.entry_set("{0}".format(self.base))
            self.GUI.SecretEntry.entry_set("{0}".format(self.secret))
            self.GUI.SignalEntry.entry_set("{0}".format(self.signal))
            self.GUI.ChannelEntry.entry_set("{0}".format(self.channel))
            self.GUI.PoleEntry.entry_set("{0}".format(self.pole))
            self.GUI.IdentityEntry.entry_set("{0}".format(self.identity))
            self.GUI.FoundationEntry.entry_set("{0}".format(self.foundation))
            self.GUI.ElementEntry.entry_set("{0}".format(self.element))
            self.GUI.DynamoEntry.entry_set("{0}".format(self.dynamo))
            self.GUI.ManifoldEntry.entry_set("{0}".format(self.manifold))
            self.GUI.RingEntry.entry_set("{0}".format(self.ring))
            self.GUI.BarnEntry.entry_set("{0}".format(self.barn))

    # Provably Best Hash Function Executed On Any Computer To Date!??
    def hashString(self, string):
        stringUnicode = string.encode('utf-8')
        hex = binascii.hexlify(stringUnicode)
        intHex = int(hex, 16)
        return pow(intHex, self.element, pow(self.ring, self.barn))



