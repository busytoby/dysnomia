using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static public Planet Neptune;
        static public Planet Venus;
        static public Orbital Neith;
        static public Planet Uranus;

        static public Orbital Proteus;
        static public Orbital Hippocamp;
        static public Orbital Phoebe;
        static public Orbital Despina;
        static public Orbital Iapetus;

        static public Planet Saturn;
        static public Orbital Desdemona;
        static public Orbital Enceladus;
        static public Orbital Titan;

        static public Planet Earth;

        public Prion()
        {
            if (Uranus == null)
            {
                Orbital P = new Orbital();
                if (Uranus == null) Uranus = new Planet(P.L.M);
                if (Neptune == null) Neptune = new Planet(P.R.M);
                if (Venus == null) Venus = new Planet(P.Y.M);
                Affinity V = new Affinity(Venus.X.Y.M.Rod, Venus.X.R.M.Cone);
                Neith = new Orbital(V);
                if (Proteus == null)
                {
                    Affinity U = new Affinity(Neptune.X.R.M.Rod, Uranus.X.Y.M.Cone);
                    Proteus = new Orbital(U);
                }
                if (Hippocamp == null)
                {
                    Affinity Z = new Affinity(Neptune.X.Y.M.Rod, Venus.X.Y.M.Cone);
                    Hippocamp = new Orbital(Z);
                    Affinity R = new Affinity(Hippocamp.L.M.Rod, Z.Cone);
                    Phoebe = new Orbital(R);
                    Affinity U = new Affinity(Neptune.X.R.M.Rod, Hippocamp.R.M.Cone);
                    Despina = new Orbital(U);
                    Affinity W = new Affinity(U.Rod, Hippocamp.Y.M.Cone);
                    Iapetus = new Orbital(W);
                }
            }
            if (Saturn == null)
            {
                Affinity L = new Affinity(Neptune.X.L.M.Rod, Hippocamp.L.M.Cone);
                Titan = new Orbital(L);
                Affinity E = new Affinity(Uranus.X.R.M.Rod, Neptune.X.L.M.Cone);
                Saturn = new Planet(E);
                Affinity Y = new Affinity(Saturn.X.L.M.Rod, Uranus.X.L.M.Cone);
                Desdemona = new Orbital(Y);
                Affinity R = new Affinity(Saturn.X.L.M.Rod, Neptune.X.R.M.Cone);
                Enceladus = new Orbital(R);
                Affinity M = new Affinity(Saturn.X.Y.M.Rod, Enceladus.R.M.Cone);
                Earth = new Planet(M);
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