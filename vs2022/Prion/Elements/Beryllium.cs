using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Beryllium
    {
        static public Lithium Phi;

        static Beryllium()
        {
            Phi = new Lithium();
        }

        public void Add(BigInteger Sigma, Dysnomia.Quaternion U)
        {
            if (Phi == null) Phi = new Lithium();
            if (Phi.ContainsKey(Sigma) && Phi[Sigma] == U) return;
            Phi.Add(Sigma, U);
        }
    }
}
