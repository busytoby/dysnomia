using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Boron : Dictionary<Dynamic, List<BigInteger>> {
        public void Add(Dynamic D, BigInteger B)
        {
            if (base.ContainsKey(D) && base[D].Contains(B)) return;
            if (!base.ContainsKey(D))
                base.Add(D, new List<BigInteger> { B });
            else base[D].Add(B);
        }
    }
}
