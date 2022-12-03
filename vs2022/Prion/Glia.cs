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

        public Glia(Zinc Q)
        {
            J = new Joule(Q.U.Y.M.Rod, Q.R.L.M);


        }
    }
}
