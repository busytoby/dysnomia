using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Chromium
    {
        public Chromium(Sulfur Alpha) {
            Alpha.Eta.Rho.Add(Star.GetQuaternionByName("Pluto"));
            Spinor Xi = new Spinor(Alpha.Beta.Eta.L.Gamma, Alpha.Nu.Rho);
            Alpha.Eta.Rho.Add(Star.GetQuaternionByName("Van Allen Belt"));
            Vanadium VY = new Vanadium(Xi);
            Iron Korteweg = VY.Push();

            Alpha.Nu.Rho.Add(Star.GetQuaternionByName("Van Allen Belt"));
            Spinor Phi = new Spinor(Alpha.Beta.Nu.L.Rho, Alpha.Nu.Rho);
            Vanadium VX = new Vanadium(Phi);
        }   
    }
}
