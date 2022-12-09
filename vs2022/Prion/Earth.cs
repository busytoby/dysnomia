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
    }
}
