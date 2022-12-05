using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;
using System.Xml.Linq;

namespace Prion.Elements
{
    public class Lithium : Dictionary<BigInteger, Dysnomia.Quaternion>
    {
        public void Add(BigInteger Sigma, Dysnomia.Quaternion U)
        {
            if (base.ContainsKey(Sigma) && base[Sigma] == U) return;
            base.Add(Sigma, U);
            /*
            Star.Alpha.Add(U.Gamma.Xi, U.Gamma);
            Star.Alpha.Add(U.Nu.Xi, U.Nu);
            Star.Alpha.Add(U.Phi.Xi, U.Phi);
            Star.Alpha.Add(U.Rho.Xi, U.Rho);
            Star.Alpha.Add(U.Sigma.Xi, U.Sigma);

            Star.Eta.Add(U.Gamma.Cone, Sigma);
            Star.Eta.Add(U.Nu.Cone, Sigma);
            Star.Eta.Add(U.Phi.Cone, Sigma);
            Star.Eta.Add(U.Rho.Cone, Sigma);
            Star.Eta.Add(U.Sigma.Cone, Sigma);
            */
        }
    }
}
