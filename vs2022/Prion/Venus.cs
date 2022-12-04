using Prion.Elements;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Venus : Orbital
    {
        public Boron E;

        public Venus(Dynamic Y, Affinity U) : base(Y, U)
        {
            if(E == null) E = new Boron();
            foreach(KeyValuePair<Dynamic, List<BigInteger>> B in Star.B) {
                foreach (BigInteger K in B.Value)
                {
                    Phosphorous P = Oxygen.Learn(K);
                    E.Add(P.Nu.Y.M.Rod, P.Nu.Nu);
                    E.Add(P.Nu.L.M.Rod, P.Nu.Rho);
                    E.Add(P.Nu.R.M.Rod, P.Nu.Eta);
                    E.Add(P.Nu.N, P.Nu.Sigma);
                }
            }
        }

    }
}
