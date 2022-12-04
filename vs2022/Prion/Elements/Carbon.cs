using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Carbon : Dictionary<BigInteger, Tuple<Dynamic, Dynamic>> { 

        public void Add(BigInteger Sigma, Affinity T)
        {
            base.Add(Sigma, new Tuple<Dynamic, Dynamic>(T.Rod, T.Cone));
        }
    }
}
