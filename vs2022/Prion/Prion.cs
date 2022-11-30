using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static public Dynamic Sun;
        static public Orbital Neptune;
        static public Orbital Proteus;
        static public Orbital Uranus;
        static public Orbital Hippocamp;

        public Prion()
        {
        }

        public Prion(Prion CopyPrion)
        {
        }

        public void Denature(ref Orbital P)
        {
            if (Sun == null)
            {
                if (Uranus == null) Uranus = new Orbital(P.L.M);
                if (Neptune == null) Neptune = new Orbital(P.R.M);
                if (Proteus == null) Proteus = new Orbital(P.Y.M);
                P = null;
                Sun = Proteus.R.M.Cone;
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