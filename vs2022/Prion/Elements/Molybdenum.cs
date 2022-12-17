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

        public Molybdenum(Sulfur Mu)
        {
            Rho = new Chromium(Mu);
        }
    }
}
