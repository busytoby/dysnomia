using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Lead
    {
        public Tensor Alpha;
        public Tensor Rho;
        public BigInteger Epsilon;

        public Lead(Hafnium Phi, Hafnium Nu)
        {
            Nu.S = Phi.P;

            Alpha = new Tensor();
            Alpha.Gamma = new Dysnomia.Quaternion();
            Alpha.Gamma.Gamma = Phi.S.L.M;
            Alpha.Gamma.Nu = Nu.S.Y.M;
            Alpha.Gamma.Phi = Nu.P.Y.M;
            Alpha.Gamma.Rho = Nu.F.Y.M;
            Alpha.Gamma.Sigma = Phi.P.L.M;

            Alpha.Gamma.Epsilon = Phi.F.Sigma;

            Alpha.Nu = new Dysnomia.Quaternion();
            Alpha.Nu.Gamma = Phi.F.Y.M;
            Alpha.Nu.Nu = Nu.P.R.M;
            Alpha.Nu.Phi = Phi.S.Y.M;
            Alpha.Nu.Rho = Nu.S.L.M;
            Alpha.Nu.Sigma = Phi.P.R.M;

            Alpha.Nu.Epsilon = Nu.P.Sigma;

            Alpha.Phi = new Dysnomia.Quaternion();
            Alpha.Phi.Gamma = Nu.P.L.M;
            Alpha.Phi.Nu = Nu.F.L.M;
            Alpha.Phi.Phi = Phi.F.R.M;
            Alpha.Phi.Rho = Nu.F.R.M;
            Alpha.Phi.Sigma = Nu.S.R.M;

            Alpha.Phi.Epsilon = Nu.S.Sigma;

            Alpha.Rho = new Dysnomia.Quaternion();
            Alpha.Rho.Gamma = Phi.S.R.M;
            Alpha.Rho.Nu = Phi.P.Y.M;
            Alpha.Rho.Phi = new Affinity();
            Alpha.Rho.Rho = Phi.F.L.M;
            Alpha.Rho.Sigma = new Affinity();

            Alpha.Rho.Epsilon = Phi.P.Sigma;

            Alpha.Sigma = new Dysnomia.Quaternion();
            Alpha.Sigma.Gamma = new Affinity();
            Alpha.Sigma.Nu = new Affinity();
            Alpha.Sigma.Phi = new Affinity();
            Alpha.Sigma.Rho = new Affinity();
            Alpha.Sigma.Sigma = new Affinity();

            Alpha.Sigma.Epsilon = Nu.F.Sigma;

            Rho = new Tensor();
            Rho.Gamma = new Dysnomia.Quaternion();
            Rho.Gamma.Gamma = Nu.S.L.M;
            Rho.Gamma.Nu = Phi.S.Y.M;
            Rho.Gamma.Phi = Phi.P.Y.M;
            Rho.Gamma.Rho = Phi.F.Y.M;
            Rho.Gamma.Sigma = Nu.P.L.M;

            Rho.Gamma.Epsilon = Phi.S.Sigma;

            Rho.Nu = new Dysnomia.Quaternion();
            Rho.Nu.Gamma = Nu.F.Y.M;
            Rho.Nu.Nu = Phi.P.R.M;
            Rho.Nu.Phi = Nu.S.Y.M;
            Rho.Nu.Rho = Phi.S.L.M;
            Rho.Nu.Sigma = Nu.P.R.M;

            Rho.Nu.Epsilon = Phi.P.Sigma;

            Rho.Phi = new Dysnomia.Quaternion();
            Rho.Phi.Gamma = Phi.P.L.M;
            Rho.Phi.Nu = Phi.F.L.M;
            Rho.Phi.Phi = Nu.F.R.M;
            Rho.Phi.Rho = Phi.F.R.M;
            Rho.Phi.Sigma = Phi.S.R.M;

            Rho.Phi.Epsilon = Nu.S.Sigma;

            Rho.Rho = new Dysnomia.Quaternion();
            Rho.Rho.Gamma = Nu.S.R.M;
            Rho.Rho.Nu = Nu.P.Y.M;
            Rho.Rho.Phi = new Affinity();
            Rho.Rho.Rho = Nu.F.L.M;
            Rho.Rho.Sigma = new Affinity();

            Rho.Rho.Epsilon = Nu.P.Sigma;

            Rho.Sigma = new Dysnomia.Quaternion();
            Rho.Sigma.Gamma = new Affinity();
            Rho.Sigma.Nu = new Affinity();
            Rho.Sigma.Phi = new Affinity();
            Rho.Sigma.Rho = new Affinity();
            Rho.Sigma.Sigma = new Affinity();

            Rho.Sigma.Epsilon = Phi.F.Sigma;

            Epsilon = Phi.S.Sigma;
        }
    }
}
