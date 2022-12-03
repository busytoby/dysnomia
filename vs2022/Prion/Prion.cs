using Prion;
using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static public Planet Neptune;
        static public Planet Miranda;
        static public Planet Venus;
        static public Moon Neith;
        static public Planet Uranus;

        static public Planet Titania;

        static public Moon Proteus;
        static public Moon Hippocamp;
        static public Moon Phoebe;
        static public Moon Despina;
        static public Moon Iapetus;

        static public Planet Saturn;
        static public Moon Desdemona;
        static public Moon Enceladus;
        static public Moon Titan;

        static public Planet Earth;
        static public Planet Mercury;
        static public Planet Pluto;

        static public Planet Mars;

        static public Planet Jupiter;

        public Prion()
        {
            Tin T = new Tin();

            if (Uranus == null)
            {
                Orbital P = new Orbital();
                if (Uranus == null) Uranus = new Planet(P.L.M);
                if (Neptune == null) Neptune = new Planet(P.R.M);
                Miranda = new Planet(Neptune.X.L.M);
                if (Venus == null) Venus = new Planet(P.Y.M);
                Neith = new Moon(Venus.X.Y.M.Rod, Venus.X.R.M.Cone);
            }
            if (Proteus == null)
                Titania = new Planet(Uranus.X.R.M);
                Proteus = new Moon(Neptune.X.R.M.Rod, Uranus.X.Y.M.Cone);
            if (Hippocamp == null)
            {
                Hippocamp = new Moon(Neptune.X.Y.M.Rod, Venus.X.Y.M.Cone);
                Phoebe = new Moon(Hippocamp.X.L.M.Rod, Hippocamp.X.L.M.Cone);
                Despina = new Moon(Neptune.X.R.M.Rod, Hippocamp.X.R.M.Cone);
                Iapetus = new Moon(Despina.X.L.M.Rod, Hippocamp.X.Y.M.Cone);
            }
            if (Saturn == null)
            {
                Titan = new Moon(Neptune.X.L.M.Rod, Hippocamp.X.L.M.Cone);
                Saturn = new Planet(Uranus.X.R.M.Rod, Neptune.X.L.M.Cone);
                Desdemona = new Moon(Saturn.X.L.M.Rod, Uranus.X.L.M.Cone);
                Enceladus = new Moon(Saturn.X.L.M.Rod, Neptune.X.R.M.Cone);
                Earth = new Planet(Saturn.X.Y.M.Rod, Enceladus.X.R.M.Cone);
                Mercury = new Planet(Neptune.X.L.M.Rod, Earth.X.L.M.Cone);
                Pluto = new Planet(Neptune.X.L.M.Rod, Mercury.X.R.M.Cone);
            }
            if (Mars == null)
            {
                Mars = new Planet(Pluto.X.L.M.Rod, Earth.X.R.M.Cone);
            }

            Tin J = new Tin(Mars.Q);
            if (Jupiter == null)
            {
                Jupiter = new Planet(J.K.O.L.M);
                if (J.K.Polygamma.Count != 5) throw new Exception("Jupiter Production With Not 5 Initial Moons !!?");
                if (Tin.Polygamma.Count != 7) throw new Exception("Universe Abort");
                // Presuming J.K.Polygamma Count Is Always 5, The First 5 Moons Of Jupiter Should Be Produced
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