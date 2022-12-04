using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Carbon
    {
        public LinkedList<KeyValuePair<BigInteger, BigInteger>> C;

        public Carbon()
        {
            C = new LinkedList<KeyValuePair<BigInteger, BigInteger>>();
        }
    }
}
