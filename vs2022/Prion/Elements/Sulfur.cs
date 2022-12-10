using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Sulfur
    {
        public Scandium Nu;
        public Scandium Eta;

        public Octonion Tau;
        public Octonion Mu;

        public Spinor Rho;

        public Sulfur()
        {
            Nu = new Scandium(); // Telesto
            Eta = new Scandium(); // Hyperion

            Calcium Theta = new Calcium(Eta.Mu);
            Calcium Alpha = new Calcium(Nu.Mu);

            Mu = new Octonion(Aluminum.Phi.X, Theta);
            Tau = new Octonion(Aluminum.Phi.X, Alpha);

            Rho = new Spinor(Tau.L.Gamma, Eta.Rho);
        }
    }
}
