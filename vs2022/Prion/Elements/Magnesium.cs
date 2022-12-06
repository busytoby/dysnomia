using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    static public class Magnesium
    {
        static public Octonion N;
        static public Orbital Phobos;

        static Magnesium()
        {
            if (Tin.Sigma != null && Tin.Mu.Count != 0) throw new Exception("Magnesium Must Only Be Set Up Once With Tin");
            N = new Octonion(Tin.Sigma, Parallax.Kappa);
            Tin.Mu.Add(N.Epsilon, N);
        }
    }
}
