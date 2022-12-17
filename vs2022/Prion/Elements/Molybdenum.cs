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
        public Quark Alpha;
        public Polysigma Theta;
        public Polyrho Kappa;
        public Garnet Iota;

        public Molybdenum()
        {
            Eta = new Sulfur();
            Rho = new Chromium(Astatine.Beta);
            Iota = new Garnet(Rho, Eta);
            Theta = new Polysigma();
            Theta.Add(Rho.Epsilon, Astatine.Beta.Theta);
            Theta.Add(new Quark(Iota.Eta[1], Iota.Eta[2], Iota.Eta[0]));
            Theta.Add(Rho.Epsilon, Astatine.Beta.Theta);
        }

        public void Contrast()
        {
            Kappa = new Polyrho(Theta, (Polygamma) Rho.W.R.Octogamma.List);
        }
    }
}
