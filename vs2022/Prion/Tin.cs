using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion
{
    public class Tin
    {
        static public LinkedList<KeyValuePair<BigInteger, Dynamic>> Polygamma;

        public Joule K;

        public Tin(Zinc Q)
        {
            K = new Joule(Q.U.Y.M.Rod, Q.R.L.M);
        }
    }
}
