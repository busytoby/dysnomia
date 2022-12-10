using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Scandium
    {
        public Polygamma Rho;
        public Spinor Tau;

        public Scandium()
        {
            Rho = new Polygamma(Tin.Sigma); // Tethys
            Tau = new Spinor(Zinc.Fetch(), Rho); // Himalia
            Rho.Add(Tin.Sigma);
        }
    }
}
