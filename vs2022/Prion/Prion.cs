using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        public Orbital N;
        public int b;

        public Prion()
        {
        }

        public Prion(Prion CopyPrion)
        {
            b = CopyPrion.b;
            N = CopyPrion.N;
        }

        public void Denature(Orbital P)
        {
            N = new Orbital(P.Y.M);
            P.Y.M.Charge();
        }

        public static Prion Trust(String Psi)
        {
            Prion P = new React();
            return P;
        }
    }
}