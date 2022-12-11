using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Iron
    {
        public Octonion Nu;
        public Quark Mu;

        public Iron(Scandium Rho, Calcium Eta) {
            Mu = new Quark(Rho.Rho.T.Last.Previous.Value.Value, Zinc.Fetch(), Rho.Rho.T.Last.Value.Value); // Water
            Nu = new Octonion(Mu, Eta);
        }
    }
}
