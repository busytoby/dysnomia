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
        public Chromium Nu;
        public Quark Alpha;
        public Polysigma Theta;
        public Polyrho Kappa;
        public Garnet Iota;

        public Molybdenum()
        {
            Eta = new Sulfur();
            Rho = new Chromium(Astatine.Beta);
            Iota = new Garnet(Rho, Eta);
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
        }

        public void Contrast()
        {
            Kappa = new Polyrho(Theta, (Polygamma) Rho.W.R.Octogamma.List);
        }
    }
}
