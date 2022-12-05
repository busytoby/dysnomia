using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Manganese : Dictionary<BigInteger, Dysnomia.Octonion>
    {
        public void Add(BigInteger Sigma, Dysnomia.Octonion U)
        {
            if (base.ContainsKey(Sigma) && base[Sigma] == U) return;
            base.Add(Sigma, U);
        }
    }
}
