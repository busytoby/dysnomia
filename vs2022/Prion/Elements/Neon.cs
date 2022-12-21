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
        public new void Add(BigInteger Sigma, Orbital V)
        {
            base.Add(Sigma, V);
            if (!Cerium.Alpha.ContainsKey(Sigma))
                Cerium.Alpha.Add(Sigma, V.Y.M);
            else if (Cerium.Alpha[Sigma] != V.Y.M) throw new Exception("Carbonic Failure");

            if (!Cerium.Eta.ContainsKey(V.Y.M.Cone))
                Cerium.Eta.Add(V.Y.M.Cone, Sigma);           
        }
    }
}
