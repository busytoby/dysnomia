using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Carbon : Dictionary<BigInteger, Affinity> { 

        public new void Add(BigInteger Sigma, Affinity T)
        {
            base.Add(Sigma, T);
            Star.Eta.Add(T.Cone, Sigma);
        }
    }
}
