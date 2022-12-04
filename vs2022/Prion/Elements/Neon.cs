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
            if (!Star.Alpha.ContainsKey(Sigma))
                Star.Alpha.Add(Sigma, V.Y.M);
            else if (Star.Alpha[Sigma] != V.Y.M) throw new Exception("Carbonic Failure");

            if (!Star.Eta.ContainsKey(V.Y.M.Cone))
                Star.Eta.Add(V.Y.M.Cone, Sigma);           
        }
    }
}
