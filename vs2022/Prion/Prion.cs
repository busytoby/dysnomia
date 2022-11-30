using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static public Orbital Neptune;
        static public Orbital Venus;
        static public Orbital Neith;
        static public Orbital Uranus;

        static public Orbital Proteus;
        static public Orbital Hippocamp;
        static public Orbital Despina;

        static public Orbital Saturn;
        static public Orbital Enceladus;
        static public Orbital Titan;

        static public Orbital Earth;

        public Prion()
        {
            if (Neptune == null)
            {
                Orbital P = new Orbital();
                if (Uranus == null) Uranus = new Orbital(P.L.M);
                if (Neptune == null) Neptune = new Orbital(P.R.M);
                if (Venus == null) Venus = new Orbital(P.Y.M);
                Affinity V = new Affinity(Venus.Y.M.Rod, Venus.R.M.Cone);
                Neith = new Orbital(V);
                if (Proteus == null)
                {
                    Affinity U = new Affinity(Neptune.R.M.Rod, Uranus.Y.M.Cone);
                    Proteus = new Orbital(U);
                }
                if (Hippocamp == null)
                {
                    Affinity Z = new Affinity(Neptune.Y.M.Rod, Venus.Y.M.Cone);
                    Hippocamp = new Orbital(Z);
                    Affinity U = new Affinity(Neptune.R.M.Rod, Hippocamp.R.M.Cone);
                    Despina = new Orbital(U);
                }
            }
            if (Saturn == null)
            {
                Affinity L = new Affinity(Neptune.L.M.Rod, Hippocamp.L.M.Cone);
                Titan = new Orbital(L);
                Affinity E = new Affinity(Uranus.R.M.Rod, Neptune.L.M.Cone);
                Saturn = new Orbital(E);
                Affinity R = new Affinity(Saturn.L.M.Rod, Neptune.R.M.Cone);
                Enceladus = new Orbital(R);
                Affinity M = new Affinity(Saturn.Y.M.Rod, Enceladus.R.M.Cone);
                Earth = new Orbital(M);
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