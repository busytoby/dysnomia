import base64
import binascii
from decimal import Decimal
from random import randrange

PRIME = 257
ENTROPY_CUTOFF = 111  # Not Simple Stars But Complex Organisms
FERMAT_CUTOFF = 4294967297  # Used For Printable Fields For Now

class Conductor(object):
    def __init__(self, element, ring, barn):
        self.PRIME = PRIME
        self.ENTROPY_CUTOFF = ENTROPY_CUTOFF
        self.FERMAT_CUTOFF = FERMAT_CUTOFF

        self.element = element                                # 8. Like A Disc With A Mass
        self.ring = pow(ring, element, self.FERMAT_CUTOFF)    # 11. Like A Binocular Focus Through A Medium
        self.barn = pow(barn, element, self.FERMAT_CUTOFF)    # 12. The Nuclear Barn

    # Charge Results In A 5th Column, What A Barn Is Defined As Containing While It Exists
    # The Audit Says That The Ampere Is A Unit Of Charge With Specific Containment.
    # A Charge With A Containment Is A Labor But Not A Work
    def charge(self, voltpere):
        return pow(self.barn, voltpere, self.ring)

    # Induce (A Labor) Results In A Henry, A 5th Column With Dimensional Containment
    # Hard Definition Of ProofOfWork
    def induce(self, ampere):
        return pow(ampere, self.barn, self.ring)

    # Ringing The Henry Through The Barn Refracts A Maxwell
    def refract(self, henry):
        return pow(self.ring, henry, self.barn)

    # Refracting The Maxwell Results In A Fermat
    def prime(self, maxwell):
        return self.refract(maxwell)

    def hashString(self, string):
        stringUnicode = string.encode('utf-8')
        stringHex = binascii.hexlify(stringUnicode)
        stringInt = int(stringHex, 16)
        hashNumber = pow(stringInt, self.element, self.ring)
#        hashCode = base64.b64encode(bytes(str(Decimal(hashNumber) ** (Decimal(1) / Decimal(self.identity))), encoding = 'ascii')) 
#        return hashCode
        return hashNumber



