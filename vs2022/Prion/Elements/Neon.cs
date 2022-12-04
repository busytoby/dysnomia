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
            if (!Star.C.ContainsKey(Sigma))
                Star.C.Add(Sigma, V.Y.M);
            else if (Star.C[Sigma] != V.Y.M) throw new Exception("Carbonic Failure");

            if (!Star.B.ContainsKey(V.Y.M.Cone))
                Star.B.Add(V.Y.M.Cone, Sigma);
            else if (Star.B[V.Y.M.Cone] != Sigma) throw new Exception("Boronic Failure");
            
        }
    }
}
