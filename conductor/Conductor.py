import base64
import binascii
from random import randrange

PRIME = 257
ENTROPY_CUTOFF = 111  # Not Simple Stars But Complex Organisms
FERMAT_CUTOFF = 4294967297  # Used For Printable Fields For Now

class Conductor(object):
    def __init__(self, element, ring, barn):
        self.PRIME = PRIME
        self.ENTROPY_CUTOFF = ENTROPY_CUTOFF
        self.FERMAT_CUTOFF = FERMAT_CUTOFF

        self.element = element      # 8. Like A Radius Without A Thickness
        self.ring = ring            # 11. Like A Binocular Focus Through A Medium
        self.barn = barn            # 12. The Nuclear Barn

    # Charge Results In A 5th Column, What A Barn Is Defined As Containing While It Exists
    # The Audit Says That The Ampere Is A Unit Of Charge With Specific Containment.
    # A Charge With A Containment Is A Labor But Not A Work
    def charge(self, voltpere):
        return pow(self.barn, voltpere, self.FERMAT_CUTOFF)

    # Induce (A Labor) Results In A Henry, A 5th Column With Dimensional Containment
    # Hard Definition Of ProofOfWork
    def induce(self, ampere):
        return pow(ampere, self.barn, self.FERMAT_CUTOFF)

    # Ringing The Henry Through The Barn Refracts A Maxwell
    def refract(self, henry):
        return pow(self.ring, henry, self.FERMAT_CUTOFF)

    # Refracting The Maxwell Results In A Fermat
    def prime(self, maxwell):
        return self.refract(maxwell)

    def hashString(self, string):
        stringUnicode = string.encode('utf-8')
        stringHex = binascii.hexlify(stringUnicode)
        stringInt = int(stringHex, 16)
        hashNumber = pow(self.element, stringInt, pow(self.ring, self.barn))
        return hashNumber



