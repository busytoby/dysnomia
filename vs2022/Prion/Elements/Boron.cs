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
            List<BigInteger> Sigmas = new List<BigInteger>();
            Sigmas.Add(B);

            if (!base.ContainsKey(D))
                base.Add(D, Sigmas);
            else if (!base[D].Contains(B)) base[D].Add(B);
        }
    }
}
