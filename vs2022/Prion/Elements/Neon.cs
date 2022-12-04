using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Neon : Dictionary<BigInteger, Orbital>
    {
        public void Add(BigInteger Sigma, Orbital V)
        {
            base.Add(Sigma, V);
            Star.B.Add(Sigma, V.Y.M.Cone);
        }
    }
}
