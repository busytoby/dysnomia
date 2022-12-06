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

        static public void Baux(Dysnomia.Quaternion L)
        {
            LinkedListNode<KeyValuePair<BigInteger, Dynamic>> P;
            for (LinkedListNode<KeyValuePair<BigInteger, Dynamic>> R = L.Sigma.Rod.R.First; R != null; R = R.Next)
            {
                BigInteger DivKey = R.Value.Key / Dysnomia.Math.CatalanPrime;
                P = L.Sigma.Rod.R.AddBefore(R, new KeyValuePair<BigInteger, Dynamic>(DivKey, R.Value.Value));
                L.Sigma.Rod.R.Remove(R);
                if (BigInteger.Abs(DivKey) < Dysnomia.Math.DeathPrime)
                {
                    Aluminum Archaea = new Aluminum(L, Zinc.Fetch());
                    Earth.Add(Archaea.Epsilon, Archaea);
                    R = P.Next;
                    L.Sigma.Rod.R.Remove(P);
                    P = R;
                }
                else if (BigInteger.Abs(DivKey) < Dysnomia.Math.CatalanPrime)
                {
                    Polygamma K = new Polygamma(L); // First Monera Conception
                    Octonion Moneron = new Octonion(L, K); // First Monera
                    return;
                }
                R = P;
            }
        }
    }
}
