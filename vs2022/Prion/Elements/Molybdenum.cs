using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Molybdenum
    {
        static public Chromium Rho;
        static public Sulfur Eta;
        public Sulfur Mu;
        public Chromium Nu;
        public Quark Alpha;
        public Polysigma Theta;
        public Polyrho Kappa;
        public Lanthanum Iota;

        public Molybdenum()
        {
            if (Eta != null || Rho != null) throw new Exception("Molybdenum Already Initialized Clear");
            Eta = new Sulfur();
            Rho = new Chromium(Astatine.Beta);
            Iota = new Lanthanum(Rho, Eta);
            Theta = new Polysigma();
            Nu = new Chromium(Niobium.Ypsilon);
            Niobium.Ypsilon.Persist(Nu);

            Alpha = new Quark(Iota.Eta[1], Iota.Eta[2], Iota.Eta[0]);
            Delta(Astatine.Beta.Theta, Niobium.Ypsilon);
        }

        public Molybdenum(Lanthanum Beta, Polysigma MuTheta)
        {
            if (Eta == null || Rho == null) throw new Exception("Molybdenum Incomplete");
            Mu = new Sulfur();
            Iota = Beta;
            Theta = new Polysigma();
            Nu = new Chromium(Mu);
            Mu.Persist(Nu);

            Alpha = new Quark(Iota.Alpha.Kernel.Alpha.Mu[2], Iota.Alpha.Kernel.Alpha.Mu[4], Iota.Alpha.Kernel.Alpha.Mu[0]);
            Delta(MuTheta, Mu);
        }

        public void Delta(Polysigma NuTheta, Sulfur Ypsilon)
        {
            Theta.Add(Rho.Epsilon, Astatine.Beta.Theta);
            Theta.Add(Alpha);
            Theta.Add(Rho.Epsilon, NuTheta);
            Theta.Add(Eta.Alpha);

            Theta.Add(Rho.Epsilon, Theta);
            Theta.Add(Ypsilon.Alpha);
            Theta.Add(Nu.W.N, Ypsilon.Lambda.Xi, Ypsilon.Xi, Ypsilon.Beta.Xi);
            Theta.Run(Rho.Kernel.Eta, Ypsilon.Phi);
            Theta.Run(Rho.Kernel.Eta, Ypsilon.Tau);
            Theta.Add(Ypsilon.Alpha);
            Theta.Cap(Rho.Epsilon, Theta);
            Theta.Add(Ypsilon.Alpha);
        }

        public void Contrast(Sulfur Ypsilon, Chromium Tau)
        {
            if (Kappa == null)
            {
                Kappa = new Polyrho(Theta, Rho.W.R.List);
                Kappa.Cap(Tau.W.N.List);
                Theta.Add(Nu.W.R, Ypsilon.Xi, Ypsilon.Lambda.Xi, Ypsilon.Beta.Xi);
                Theta.Run(Rho.Kernel.Eta, Ypsilon.Tau);
            }
            else
            {
                Theta.Add(Nu.W.L, Eta.Xi, Eta.Lambda.Xi, Eta.Beta.Xi);
                Theta.Run(Rho.Kernel.Eta, Eta.Tau);
            }
            Theta.Run(Rho.Kernel.Eta, Eta.Phi);
            Theta.Add(Eta.Alpha);
            Theta.Cap(Rho.Epsilon, Theta);
            Theta.Add(Eta.Alpha);
        }

        public Lanthanum Persist(Sulfur Ypsilon, Chromium Tau)
        {
            if (Eta.Mu != null) throw new Exception("Already Persistent");

            Lanthanum Beta;
            if (Eta.Y.Alpha == null)
                Beta = new Lanthanum(Eta);
            else if (Eta.Y.Y == null)
                Beta = new Lanthanum(Mu);
            else
                Beta = new Lanthanum(Tau, Ypsilon);
            Theta.Add(Beta.Alpha.W.N, Beta.Mu.N, Beta.Mu.R, Beta.Mu.L);
            Theta.Run(Beta.Alpha.Kernel.Eta, Beta.Upsilon.Tau);
            Theta.Add(new Quark(Beta.Eta[1], Beta.Eta[2], Beta.Eta[0]));
            Rho.Kernel.Inhibit(Beta.Upsilon);
            Rho.Kernel.Aggregate(Beta.Upsilon);
            Contrast(Ypsilon, Tau);
            return Beta;
        }
    }
}
