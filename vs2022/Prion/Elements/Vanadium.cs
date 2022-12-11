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
        static public Quaternion Rho;
        static public Octonion Beta;

        public Vanadium(Spinor Alpha)
        {
            Rho = Alpha.Head();
        }

        static public Iron Push()
        {
            Scandium Eta = new Scandium(Rho);
            Calcium Phi = new Calcium(Eta.Mu);

            return new Iron(Eta, Phi);
        }
    }
}
