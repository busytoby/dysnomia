using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;
using System.Xml.Linq;

namespace Prion.Elements
{
    public class Lithium : Dictionary<BigInteger, Dysnomia.Quaternion>
    {
        public void Add(BigInteger Sigma, Dysnomia.Quaternion U)
        {
            if (base.ContainsKey(Sigma) && base[Sigma] == U) return;
            base.Add(Sigma, U);
            Star.Eta.Add(U, Sigma);
        }
    }
}
