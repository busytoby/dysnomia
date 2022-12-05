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
            Phosphorous.Sigmas.RecordOrbital(System.Nu, "Neptune");
            Phosphorous.Sigmas.RecordOrbital(System.Nu.F, "Sun");
            Phosphorous.Sigmas.RecordOrbital(System.Nu.P, "Uranus");

            Venus V = new Venus(Parallax.Kappa.T.First.Value.Value.Rho.Rod, Parallax.Kappa.T.First.Value.Value.Gamma);
            Phosphorous.Sigmas.RecordOrbital(V, "Venus");

            Parallax.Saturn = new Tin();
            Phosphorous.GenerateOrbital(Tin.Sigma.Sigma, "Saturn Sigma"); // First Sigma Star Orbital
            Phosphorous.Sigmas.RecordQuaternion(Tin.Sigma, "Saturn");

            Pluto P = new Pluto();

            Orbital S = Phosphorous.GenerateOrbital(P.Sigma, "Pluto Sigma");

            P.Mate(Parallax.Kappa.T.Last.Value.Value, S, Parallax.Kappa);
            
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