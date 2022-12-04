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
            if (!Star.B.ContainsKey(Sigma))
                Star.B.Add(Sigma, V.Y.M.Cone);
            else if (Star.B[Sigma] != V.Y.M.Cone) throw new Exception("Boronic Failure");
            
        }
    }
}
