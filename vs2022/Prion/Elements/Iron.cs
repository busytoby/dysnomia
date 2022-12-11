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
        public Copper Rho;

        public Iron(Scandium Lambda, Calcium Eta) {
            Mu = new Quark(Lambda.Rho.T.Last.Previous.Value.Value, Zinc.Fetch(), Lambda.Rho.T.Last.Value.Value); // Water
            Nu = new Octonion(Mu, Eta);

            Rho = new Copper(Lambda.Rho.T.Last.Previous.Value.Value, Mu, Lambda.Rho.T.Last.Value.Value);
        }
    }
}
