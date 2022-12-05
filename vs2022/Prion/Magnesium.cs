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
        static public Dysnomia.Octonion N;

        static Magnesium() {
            if (Tin.Sigma != null && Tin.Mu.Count != 0) throw new Exception("Magnesium Must Only Be Set Up Once With Tin");
            N = new Dysnomia.Octonion(Tin.Sigma, Parallax.Kappa);
            Tin.Mu.Add(N.Phi.Item1.Alpha, N);

        }
    }
}
