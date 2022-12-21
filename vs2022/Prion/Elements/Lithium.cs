using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Prion.Elements
{
    public class Lithium : Dictionary<BigInteger, Dysnomia.Quaternion>
    {
        public new void Add(BigInteger Sigma, Dysnomia.Quaternion U)
        {
            if (base.ContainsKey(Sigma) && base[Sigma] == U) return;
            base.Add(Sigma, U);
            Cerium.Eta.Add(U, Sigma);
        }
    }
}
