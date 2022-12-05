using Dysnomia;
using Prion.Elements;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion
{
    static public class Magnesium
    {
        static public Manganese Rho;
        static public Dysnomia.Octonion N;

        static Magnesium() {
            if (Tin.Sigma != null && Rho != null) throw new Exception("Magnesium Must Only Be Set Up Once With Tin");
            Rho = new Manganese();
            N = new Dysnomia.Octonion(Tin.Sigma, Parallax.Kappa);
        }
        
        static public void Add(BigInteger Sigma, Dysnomia.Octonion U)
        {
            // nope
            if (Rho.ContainsKey(Sigma) && Rho[Sigma] == U) return;
            Rho.Add(Sigma, U);
        }
    }
}
