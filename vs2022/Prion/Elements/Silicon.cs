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

        static public void Baux(Aluminum A)
        {
            LinkedListNode<KeyValuePair<BigInteger, Dynamic>> P;
            for (LinkedListNode<KeyValuePair<BigInteger, Dynamic>> R = A.R.Sigma.Rod.R.First; R != null; R = R.Next)
            {
                BigInteger DivKey = R.Value.Key / Dysnomia.Math.CatalanPrime;
                P = A.R.Sigma.Rod.R.AddBefore(R, new KeyValuePair<BigInteger, Dynamic>(DivKey, R.Value.Value));
                A.R.Sigma.Rod.R.Remove(R);
                if (BigInteger.Abs(DivKey) < Dysnomia.Math.DeathPrime)
                {
                    Aluminum Bauxite = new Aluminum(A.R, Zinc.Fetch());
                    Earth.Add(Bauxite.Epsilon, Bauxite);
                    R = P.Next;
                    A.R.Sigma.Rod.R.Remove(P);
                    P = R;
                }
                else if (BigInteger.Abs(DivKey) < Dysnomia.Math.CatalanPrime)
                {
                    if (A.Magnesia.Count == 5) continue; 
                    Polygamma K = new Polygamma(A.R); 
                    Octonion Mg = new Octonion(A.R, K); 
                    A.Magnesia.Add(Mg.Epsilon, Mg);
                    return;
                }
                R = P;
            }
        }
    }
}
