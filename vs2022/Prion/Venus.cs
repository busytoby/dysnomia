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
        static public new Boron Rho;

        public Venus(Dynamic Y, Affinity U) : base(Y, U)
        {
            if(Rho == null) Rho = new Boron();
            foreach(KeyValuePair<object, List<BigInteger>> B in Star.Eta) {
                foreach (BigInteger K in B.Value)
                {
                    /*
                    Phosphorous P = Oxygen.Learn(K);
                    Rho.Add(P.Nu.R.M.Rod, P.Nu.Eta);
                    Rho.Add(P.Nu.N, P.Nu.Sigma);
                    Rho.Add(P.Nu.L.M.Rod, P.Nu.Rho);
                    Rho.Add(P.Nu.Y.M.Rod, P.Nu.Nu);
                    */
                }
            }

            Phosphorous.Sigmas.RecordOrbital(this, "Venus");
        }

    }
}
