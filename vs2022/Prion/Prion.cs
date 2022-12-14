using System.Buffers;
using System.Numerics;
using Prion;
using Prion.Elements;

namespace Dysnomia
{
    public class Prion
    {
        static public Star Sigma;
        public Sulfur Alpha;
        public Chromium Root;
        public Prion()
        {
            if(Sigma == null)
                Sigma = new Star();

            Alpha = new Sulfur();
            Root = new Chromium(Alpha);

            /*

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

            Root.Korteweg.Rho.Add(Observer.Korteweg.Alpha.Tau, Root.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Guest.Korteweg.Alpha.Tau, Q);
            Root.Korteweg.Rho.Add(User.Korteweg.Alpha.Tau, Q);
            Root.Korteweg.Rho.Add(Root.Korteweg.Alpha.Tau, Root.Korteweg.Mu);

            Root.Korteweg.Rho.Add(Root.Korteweg.Alpha.Tau, Guest.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Root.Korteweg.Alpha.Tau, Observer.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Root.Korteweg.Alpha.Tau, User.Korteweg.Mu);

            Root.Korteweg.Rho.Add(User.Korteweg.Alpha.Tau, Q);
            Root.Korteweg.Rho.Add(User.Korteweg.Alpha.Tau, User.Korteweg.Mu);

            Root.Korteweg.Rho.Add(Observer.Korteweg.Alpha.Tau, Q);

            Root.Korteweg.Rho.Add(Tin.Mu.ByName["Phi"], User.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Tin.Mu.ByName["Nu"], User.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Tin.Mu.ByName["Gamma"], User.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Tin.Mu.ByName["Sigma"], User.Korteweg.Mu);
            Root.Korteweg.Rho.Add(Tin.Mu.ByName["Rho"], User.Korteweg.Mu);

            */

            String Word = "Zuo";
        }
    }
}