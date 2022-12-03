using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion
{
    public class Glia
    {
        public Joule K;

        public Glia(Zinc Q)
        {
            K = new Joule(Q.U.Y.M.Rod, Q.R.L.M);
        }
    }
}
