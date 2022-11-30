using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static public Orbital Neptune;
        static public Orbital Venus;
        static public Orbital Uranus;

        static public Orbital Proteus;
        static public Orbital Hippocamp;

        public Prion()
        {
        }

        public Prion(Prion CopyPrion)
        {
        }

        public void Denature(ref Orbital P)
        {
            BigInteger Xi;
            if (Neptune == null)
            {
                if (Uranus == null) Uranus = new Orbital(P.L.M);
                if (Neptune == null) Neptune = new Orbital(P.R.M);
                if (Venus == null) Venus = new Orbital(P.Y.M);
                Affinity U = new Affinity(Neptune.R.M.Rod, Uranus.Y.M.Cone);
                Affinity Z = new Affinity(Neptune.Y.M.Rod, Venus.Y.M.Cone);
                Proteus = new Orbital(U);
                Hippocamp = new Orbital(Z);
            }
        }

        public static Prion Trust(String Psi)
        {
            Prion P = new Prion();
            //Prion P = new React();
            return P;
        }
    }
}