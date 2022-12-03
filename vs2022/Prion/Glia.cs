using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion
{
    internal class Glia
    {
        Joule J;

        public Glia(Planet M)
        {
            J = new Joule(M.Q.U.Y.M.Rod, M.X.L.M.Rod.Polygamma);
        }

        public Glia(Zinc Q)
        {
            J = new Joule(Q.U.Y.M.Rod, Q.R.L.M.Rod.Polygamma);
        }
    }
}
