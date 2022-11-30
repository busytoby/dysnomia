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
            if (Neptune == null)
            {
                Orbital P = new Orbital();
                if (Uranus == null) Uranus = new Orbital(P.L.M);
                if (Neptune == null) Neptune = new Orbital(P.R.M);
                if (Venus == null) Venus = new Orbital(P.Y.M);
                if (Proteus == null)
                {
                    Affinity U = new Affinity(Neptune.R.M.Rod, Uranus.Y.M.Cone);
                    Proteus = new Orbital(U);
                }
                if (Hippocamp == null)
                {
                    Affinity Z = new Affinity(Neptune.Y.M.Rod, Venus.Y.M.Cone);
                    Hippocamp = new Orbital(Z);
                }
            }
        }

        public Prion(Prion CopyPrion)
        {
        }

        public static Prion Trust(String Psi)
        {
            Prion P = new Prion();
            //Prion P = new React();
            return P;
        }
    }
}