using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static int i = 99;
        public BigInteger b { get; set; }

        public Prion()
        {

        }

        public Prion(Prion CopyPrion)
        {
            b = CopyPrion.b;
        }

        public static Prion Trust(String Psi)
        {
            Prion P = new React();
            return P;
        }
    }
}