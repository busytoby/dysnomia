using System.Numerics;
using Prion.Elements;

namespace Dysnomia
{
    public class Prion
    {
        /*
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
        */
        static public Planet Saturn;
        /*
        static public Moon Desdemona;
        static public Moon Enceladus;
        static public Moon Titan;

        static public Planet Earth;
        static public Planet Mercury;
        static public Planet Pluto;

        static public Planet Mars;

        static public Planet Jupiter;
        */

        public Prion()
        {
            Star Sun = new Star();

            Phosphorous System = new Phosphorous();
            System.RecordOrbital(System.Nu, "Neptune");
            System.RecordOrbital(System.Nu.F, "Sun");
            System.RecordOrbital(System.Nu.P, "Uranus");

            Venus V = new Venus(System.Nu.K.T.First.Value.Value.Rho.Rod, System.Nu.K.T.First.Value.Value.Gamma);
            System.RecordOrbital(V, "Venus");

            Parallax.Saturn = new Tin();
            System.Generate(Tin.M.Sigma, "Saturn");

            Pluto P = new Pluto();

            Orbital S = System.Generate(P.Sigma, "Pluto");

            Quaternion Nu = P.Mate(System.Nu.K.T.Last.Value.Value, S);
            
            // Stub for Octonion

            /* stub process
            if (Mars == null)
            {
                Mars = new Planet(Pluto.X.L.M.Rod, Earth.X.R.M.Cone);
            }

            Tin J = new Tin(Mars.Q);
            if (Jupiter == null)
            {
                Jupiter = new Planet(J.K.L.M);
                if (J.K.M.Count != 5) throw new Exception("Jupiter Production With Not 5 Initial Moons !!?");
                if (Tin.M.Count != 7) throw new Exception("Universe Abort");
                // Presuming J.K.Polygamma Count Is Always 5, The First 5 Moons Of Jupiter Should Be Produced
            }
            Tin L = new Tin(Earth.Q);

            Polygamma S = new Polygamma(Mars.X, Earth.X);
            S.Add(Saturn.X);
            Orbital X = new Orbital();
            S.Add(X);
            */
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