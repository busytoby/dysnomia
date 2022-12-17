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

        public Molybdenum()
        {
            Rho = new Chromium(Astatine.Beta);
            Theta = new Polysigma(Astatine.Beta.Theta);
        }

        public void Contrast()
        {
            Kappa = new Polyrho(Theta);
        }
    }
}
