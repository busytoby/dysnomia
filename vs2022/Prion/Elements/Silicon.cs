using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    static public class Silicon
    {
        static public void Decay(Dysnomia.Quaternion L)
        {
            LinkedListNode<KeyValuePair<BigInteger, Dynamic>> P;
            for (LinkedListNode<KeyValuePair<BigInteger, Dynamic>> R = L.Sigma.Rod.R.Last; R != null; R = R.Previous)
            {
                BigInteger DivKey = R.Value.Key / Dysnomia.Math.DeathPrime;
                P = L.Sigma.Rod.R.AddBefore(R, new KeyValuePair<BigInteger, Dynamic>(DivKey, R.Value.Value));
                L.Sigma.Rod.R.Remove(R);
                R = P;
            }
        }
    }
}
