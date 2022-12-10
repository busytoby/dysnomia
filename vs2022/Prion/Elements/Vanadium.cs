using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Vanadium
    {
        Quaternion Rho;
        Scandium Eta;
        Octonion Beta;
        public Vanadium(Spinor Alpha)
        {
            Rho = Alpha.Head();
        }

        public Quark Push()
        {
            Eta = new Scandium(Rho);

            Calcium Phi = new Calcium(Eta.Mu);
            Quark M = new Quark(Eta.Rho.T.Last.Previous.Value.Value, Zinc.Fetch(), Eta.Rho.T.Last.Value.Value); // First Water
            Beta = new Octonion(M, Phi);

            return M;
        }
    }
}
