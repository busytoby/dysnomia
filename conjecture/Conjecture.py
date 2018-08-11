#!/usr/bin/env python
# encoding: utf-8

import binascii
from conjecture.gui import ConjectureGUI 
from random import randrange

PRIME = 257

class Conjecture(object):
    def __init__(self, windowGrid, name):
        self.isListener = False
        self.base = 0
        self.secret = 0
        self.signal = 0
        self.channel = 0
        self.pole = 0
        self.identity = 0
        self.foundation = 0
        self.txTxElement = 0
        self.dynamo = 0
        self.manifold = 0
        self.ring = 0
        self.barn = 0

        self.GUI = ConjectureGUI(windowGrid, name)

    def rand(self):
        return randrange(PRIME)

    def seed(self):
        while(self.base < 3 or self.secret < 3 or self.signal < 3):
            self.base = randrange(PRIME)
            self.secret = randrange(PRIME)
            self.signal = randrange(PRIME)

    def updateGUIFields(self):
        self.GUI.BaseEntry.entry_set("{0}".format(self.base))
        self.GUI.SecretEntry.entry_set("{0}".format(self.secret))
        self.GUI.SignalEntry.entry_set("{0}".format(self.signal))
        self.GUI.ChannelEntry.entry_set("{0}".format(self.channel))
        self.GUI.PoleEntry.entry_set("{0}".format(self.pole))
        self.GUI.IdentityEntry.entry_set("{0}".format(self.identity))
        self.GUI.FoundationEntry.entry_set("{0}".format(self.foundation))
        self.GUI.TxTxElementEntry.entry_set("{0}".format(self.txTxElement))
        self.GUI.DynamoEntry.entry_set("{0}".format(self.dynamo))
        self.GUI.ManifoldEntry.entry_set("{0}".format(self.manifold))
        self.GUI.RingEntry.entry_set("{0}".format(self.ring))
        self.GUI.BarnEntry.entry_set("{0}".format(self.barn))

    def tune(self):
        self.channel = pow(self.base, self.signal, PRIME)

    # Provably Best Hash Function Executed On Any Computer To Date!??
    def hashString(self, string):
        stringUnicode = string.encode('utf-8')
        hex = binascii.hexlify(stringUnicode)
        intHex = int(hex, 16)
        return pow(intHex, self.txTxElement, pow(self.ring, self.barn))

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
        self.identity = randrange(PRIME)
        self.foundation = pow(self.base, self.identity, PRIME)
        self.isListener = True
        self.GUI.frame.text_set(self.GUI.frame.text + " (Listener)")

    def establishTxTxElement(self, peerFoundation, peerChannel):
        if not self.isListener:
            self.identity = randrange(PRIME)
            self.foundation = pow(self.base, self.identity, PRIME)

        convergence = pow(peerFoundation, self.identity, PRIME)
        moment = pow(peerChannel, self.identity, PRIME)
        authentication = pow(peerFoundation, self.signal, PRIME)
        peerMoment = pow(peerChannel, self.signal, PRIME)

        accord = moment + authentication
        element = convergence + accord
        discardMoment = element + peerMoment

        self.txTxElement = element

    def syncDynamo(self, element):
        self.dynamo = pow(self.base, self.signal, element)

    def getManifold(self, peerDynamo, element):
        self.manifold = pow(peerDynamo, self.signal, element)

    def openManifold(self, carrier, element):
        self.ring = pow(carrier, self.manifold, element)
        self.barn = pow(self.ring, self.manifold, element)

    def validateManifold(self):
        validateList = [ self.base, self.secret, self.signal, self.channel, self.pole,
                         self.identity, self.foundation, self.txTxElement, self.dynamo,
                         self.manifold, self.ring, self.barn ]
        return all(i >= 17 for i in validateList)


