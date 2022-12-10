using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Titanium
    {
        public Octonion Eta;
        public Octonion Nu;

        public Spinor Xi;

        public Titanium(Chlorine<Dysnomia.Quaternion> Tau, Scandium Beta) {
            Calcium Rho = new Calcium(Beta.Mu);
            Calcium Phi = new Calcium(Tau);

            Eta = new Octonion(Aluminum.Phi.X, Rho);
            Nu = new Octonion(Aluminum.Phi.X, Phi);

            Xi = new Spinor(Nu.L.Gamma, Beta.Rho);
        }
    }
}
