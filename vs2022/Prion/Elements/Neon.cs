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
                Cerium.Alpha.Add(Sigma, V.Y);
            else if (Cerium.Alpha[Sigma] != V.Y) throw new Exception("Carbonic Failure");

            if (!Cerium.Tau.ContainsKey(V.Y.Cone))
                Cerium.Tau.Add(V.Y.Cone, Sigma);           
        }
    }
}
