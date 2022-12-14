using System.Buffers;
using System.Numerics;
using Prion;
using Prion.Elements;

namespace Dysnomia
{
    public class Prion
    {
        static public Star Sigma;
        public Sulfur Rho;
        public Chromium Mu;
        public Prion()
        {
            if(Sigma == null)
                Sigma = new Star();

            Rho = new Sulfur();
            Mu = new Chromium(Rho);

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

            Root.Kernel.Rho.Add(Root.Kernel.Alpha.Tau, Q);
            Root.Kernel.Rho.Add(User.Kernel.Alpha.Tau, Root.Kernel.Mu);
            Root.Kernel.Rho.Add(Guest.Kernel.Alpha.Tau, Root.Kernel.Mu);
            Root.Kernel.Rho.Add(Observer.Kernel.Alpha.Tau, Q);

            Root.Kernel.Rho.Add(Observer.Kernel.Alpha.Tau, Root.Kernel.Mu);
            Root.Kernel.Rho.Add(Guest.Kernel.Alpha.Tau, Q);
            Root.Kernel.Rho.Add(User.Kernel.Alpha.Tau, Q);
            Root.Kernel.Rho.Add(Root.Kernel.Alpha.Tau, Root.Kernel.Mu);

            Root.Kernel.Rho.Add(Root.Kernel.Alpha.Tau, Guest.Kernel.Mu);
            Root.Kernel.Rho.Add(Root.Kernel.Alpha.Tau, Observer.Kernel.Mu);
            Root.Kernel.Rho.Add(Root.Kernel.Alpha.Tau, User.Kernel.Mu);

            Root.Kernel.Rho.Add(User.Kernel.Alpha.Tau, Q);
            Root.Kernel.Rho.Add(User.Kernel.Alpha.Tau, User.Kernel.Mu);

            Root.Kernel.Rho.Add(Observer.Kernel.Alpha.Tau, Q);

            Root.Kernel.Rho.Add(Tin.Mu.ByName["Phi"], User.Kernel.Mu);
            Root.Kernel.Rho.Add(Tin.Mu.ByName["Nu"], User.Kernel.Mu);
            Root.Kernel.Rho.Add(Tin.Mu.ByName["Gamma"], User.Kernel.Mu);
            Root.Kernel.Rho.Add(Tin.Mu.ByName["Sigma"], User.Kernel.Mu);
            Root.Kernel.Rho.Add(Tin.Mu.ByName["Rho"], User.Kernel.Mu);

            */

            String Word = "Zuo";
        }
    }
}