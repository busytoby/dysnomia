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
        public Chromium Rho;
        public Sulfur Eta;
        public Sulfur Mu;
        public Chromium Nu;
        public Quark Alpha;
        public Polysigma Theta;
        public Polyrho Kappa;
        public Lanthanum Iota;

        public Molybdenum()
        {
            Eta = new Sulfur();
            Rho = new Chromium(Astatine.Beta);
            Iota = new Lanthanum(Rho, Eta);
            Alpha = new Quark(Iota.Eta[1], Iota.Eta[2], Iota.Eta[0]);
            Theta = new Polysigma();
            Theta.Add(Rho.Epsilon, Astatine.Beta.Theta);
            Theta.Add(Alpha);
            Theta.Add(Rho.Epsilon, Astatine.Beta.Theta);
            Theta.Add(Eta.Alpha);

            Nu = new Chromium(Niobium.Ypsilon);
            Niobium.Ypsilon.Persist(Nu);

            Theta.Add(Rho.Epsilon, Theta);
            Theta.Add(Niobium.Ypsilon.Alpha);
            Theta.Add(Nu.W.N, Niobium.Ypsilon.Lambda.Xi, Niobium.Ypsilon.Xi, Niobium.Ypsilon.Beta.Xi);
            Theta.Run(Rho.Kernel.Eta, Niobium.Ypsilon.Phi);
            Theta.Run(Rho.Kernel.Eta, Niobium.Ypsilon.Tau);
            Theta.Add(Niobium.Ypsilon.Alpha);
            Theta.Cap(Rho.Epsilon, Theta);
            Theta.Add(Niobium.Ypsilon.Alpha);
        }

        public void Contrast()
        {
            if (Kappa == null)
            {
                Kappa = new Polyrho(Theta, Rho.W.R.List);
                Kappa.Cap(Radon.Tau.W.N.List);
                Theta.Add(Nu.W.R, Niobium.Ypsilon.Xi, Niobium.Ypsilon.Lambda.Xi, Niobium.Ypsilon.Beta.Xi);
                Theta.Run(Rho.Kernel.Eta, Niobium.Ypsilon.Tau);
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

        public Lanthanum Persist()
        {
            if (Eta.Mu != null) throw new Exception("Already Persistent");

            Lanthanum Beta = new Lanthanum(Eta);
            Theta.Add(Beta.Alpha.W.N, Beta.Mu.N, Beta.Mu.R, Beta.Mu.L);
            Theta.Run(Beta.Alpha.Kernel.Eta, Beta.Upsilon.Tau);
            Theta.Add(new Quark(Beta.Eta[1], Beta.Eta[2], Beta.Eta[0]));
            Rho.Kernel.Inhibit(Beta.Upsilon);
            Rho.Kernel.Aggregate(Beta.Upsilon);
            return Beta;
        }
    }
}
