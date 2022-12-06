using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    static public class Silicon
    {
        static public Earth Earth;

        static public void Push(Dysnomia.Quaternion L)
        {
            LinkedListNode<KeyValuePair<BigInteger, Dynamic>> P;
            for (LinkedListNode<KeyValuePair<BigInteger, Dynamic>> R = L.Sigma.Rod.R.Last; R != null; R = R.Previous)
            {
                BigInteger DivKey = R.Value.Key / Dysnomia.Math.DeathPrime;
                P = L.Sigma.Rod.R.AddBefore(R, new KeyValuePair<BigInteger, Dynamic>(DivKey, R.Value.Value));
                L.Sigma.Rod.R.Remove(R);
                if (BigInteger.Abs(DivKey) < Dysnomia.Math.CatalanPrime)
                {
                    Polygamma K = new Polygamma(L); // First Monera Conception
                    Octonion Moneron = new Octonion(L, K); // First Monera
                    Earth.Add(Moneron.Epsilon, Moneron);
                }
                else if (BigInteger.Abs(DivKey) < Dysnomia.Math.DeathPrime) 
                {
                    Aluminum Archaea = new Aluminum(L, Zinc.Fetch());
                    Earth.Add(Archaea.Epsilon, Archaea);
                    P = (R.Next == null) ? L.Sigma.Rod.R.Last : R.Next;
                    L.Sigma.Rod.R.Remove(R);
                }
                R = P;
            }
        }
    }
}
