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
    public class Earth : Dictionary<BigInteger, object>
    {
        public Earth() : base()
        {
            if (Silicon.Earth == null) Silicon.Earth = this;
        }

        public void Transcend()
        {
            // Peptidoglycans
            List<BigInteger> Keys = new List<BigInteger>(this.Keys);
            foreach (BigInteger K in Keys)
            {
                if (this[K].GetType().Name == "Aluminum")
                    Silicon.Push(((Aluminum)this[K]).R);
            }
        }
    }
}
