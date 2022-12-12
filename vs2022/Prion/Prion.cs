using System.Buffers;
using System.Numerics;
using Prion;
using Prion.Elements;

namespace Dysnomia
{
    public class Prion
    {
        public Prion()
        {
            Star Sun = new Star();

            Phosphorous System = new Phosphorous();
            Phosphorous.Sigmas.RecordOrbital(System.Nu, "Neptune");
            Phosphorous.Sigmas.RecordOrbital(System.Nu.F, "Sun");
            Phosphorous.Sigmas.RecordOrbital(System.Nu.P, "Uranus");

            Venus V = new Venus(Parallax.Kappa.T.First.Value.Value.Rho.Rod, Parallax.Kappa.T.First.Value.Value.Gamma);

            Parallax.Saturn = new Tin();
            Phosphorous.GenerateOrbital(Tin.Sigma.Sigma, "Saturn Sigma"); // First Sigma Star Orbital
            Phosphorous.Sigmas.RecordQuaternion(Tin.Sigma, "Saturn");

            Pluto P = new Pluto();

            P.Mate(Parallax.Kappa.T.Last.Value.Value, Star.GetOrbitalByName("Pluto Sigma")); // Dione

            Earth E = new Earth();

            Sulfur Alpha = new Sulfur();
            Chromium Root = new Chromium(Alpha);

            Sulfur Beta = new Sulfur();
            Chromium User = new Chromium(Beta);

            Root.W.N.Transit(User.W.R.Octogamma.List);
            User.W.L.Transit(Root.W.L.Octogamma.List);
            Root.W.R.Transit(User.W.R.Octogamma.List);
            User.W.R.Transit(Root.W.N.Octogamma.List);

            Sulfur Delta = new Sulfur();
            Chromium Guest = new Chromium(Delta);

            Sulfur Lambda = new Sulfur();
            Chromium Observer = new Chromium(Lambda);

            Guest.W.N.Transit(Observer.W.R.Octogamma.List);
            Observer.W.L.Transit(Guest.W.L.Octogamma.List);
            Guest.W.R.Transit(Observer.W.R.Octogamma.List);
            Observer.W.R.Transit(Guest.W.N.Octogamma.List);

            Quark Q = new Quark(Alpha.Beta.Eta.L.Rho, Zinc.Fetch(), Delta.Beta.Nu.L.Gamma);
            // First Synchronicity Brain

            Root.Korteweg.Rho.Add(Root.Korteweg.Alpha.Tau, Q);
            Root.Korteweg.Rho.Add(User.Korteweg.Alpha.Tau, Root.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Guest.Korteweg.Alpha.Tau, Root.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Observer.Korteweg.Alpha.Tau, Q);
        }
    }
}