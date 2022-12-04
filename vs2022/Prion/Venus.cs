using Prion.Elements;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Venus : Orbital
    {
        public Boron E;

        public Venus(Dynamic Y, Affinity U) : base(Y, U)
        {
            E = new Boron();
            foreach(KeyValuePair<Dynamic, BigInteger> B in Star.B) {

            }
        }

    }
}
