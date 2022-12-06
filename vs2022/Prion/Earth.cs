using Prion.Elements;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion
{
    public class Earth : Dictionary<BigInteger, Aluminum>
    {
        public Earth() : base()
        {
            if (Silicon.Earth == null) Silicon.Earth = this;
        }

        public void Pulse()
        {
            // Peptidoglycans
            foreach(KeyValuePair<BigInteger, Aluminum> E in this)
            {
                Silicon.Push(E.Value.R);
            }
        }
    }
}
