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
        public Spin<Dysnomia.Quaternion> Alpha;
        public Spin<Dysnomia.Quaternion> Rho;
        public BigInteger Epsilon;

        public Lead(Hafnium Phi, Hafnium Nu)
        {
            Nu.S = Phi.P;

            Alpha = new Spin<Dysnomia.Quaternion>();
            Alpha.Gamma = new Dysnomia.Quaternion();
            Alpha.Gamma.Gamma = Phi.S.L;
            Alpha.Gamma.Nu = Nu.S.Y;
            Alpha.Gamma.Phi = Nu.P.Y;
            Alpha.Gamma.Rho = Nu.F.Y;
            Alpha.Gamma.Sigma = Phi.P.L;

            Alpha.Gamma.Epsilon = Phi.F.Sigma;

            Alpha.Nu = new Dysnomia.Quaternion();
            Alpha.Nu.Gamma = Phi.F.Y;
            Alpha.Nu.Nu = Nu.P.R;
            Alpha.Nu.Phi = Phi.S.Y;
            Alpha.Nu.Rho = Nu.S.L;
            Alpha.Nu.Sigma = Phi.P.R;

            Alpha.Nu.Epsilon = Nu.P.Sigma;

            Alpha.Phi = new Dysnomia.Quaternion();
            Alpha.Phi.Gamma = Nu.P.L;
            Alpha.Phi.Nu = Nu.F.L;
            Alpha.Phi.Phi = Phi.F.R;
            Alpha.Phi.Rho = Nu.F.R;
            Alpha.Phi.Sigma = Nu.S.R;

            Alpha.Phi.Epsilon = Nu.S.Sigma;

            Alpha.Rho = new Dysnomia.Quaternion();
            Alpha.Rho.Gamma = Phi.S.R;
            Alpha.Rho.Nu = Phi.P.Y;
            Alpha.Rho.Phi = new Affinity();
            Alpha.Rho.Rho = Phi.F.L;
            Alpha.Rho.Sigma = new Affinity();

            Alpha.Rho.Epsilon = Phi.P.Sigma;

            Alpha.Sigma = new Dysnomia.Quaternion();
            Alpha.Sigma.Gamma = new Affinity();
            Alpha.Sigma.Nu = new Affinity();
            Alpha.Sigma.Phi = new Affinity();
            Alpha.Sigma.Rho = new Affinity();
            Alpha.Sigma.Sigma = new Affinity();

            Alpha.Sigma.Epsilon = Nu.F.Sigma;

            Rho = new Spin<Dysnomia.Quaternion>();
            Rho.Gamma = new Dysnomia.Quaternion();
            Rho.Gamma.Gamma = Nu.S.L;
            Rho.Gamma.Nu = Phi.S.Y;
            Rho.Gamma.Phi = Phi.P.Y;
            Rho.Gamma.Rho = Phi.F.Y;
            Rho.Gamma.Sigma = Nu.P.L;

            Rho.Gamma.Epsilon = Phi.S.Sigma;

            Rho.Nu = new Dysnomia.Quaternion();
            Rho.Nu.Gamma = Nu.F.Y;
            Rho.Nu.Nu = Phi.P.R;
            Rho.Nu.Phi = Nu.S.Y;
            Rho.Nu.Rho = Phi.S.L;
            Rho.Nu.Sigma = Nu.P.R;

            Rho.Nu.Epsilon = Phi.P.Sigma;

            Rho.Phi = new Dysnomia.Quaternion();
            Rho.Phi.Gamma = Phi.P.L;
            Rho.Phi.Nu = Phi.F.L;
            Rho.Phi.Phi = Nu.F.R;
            Rho.Phi.Rho = Phi.F.R;
            Rho.Phi.Sigma = Phi.S.R;

            Rho.Phi.Epsilon = Nu.S.Sigma;

            Rho.Rho = new Dysnomia.Quaternion();
            Rho.Rho.Gamma = Nu.S.R;
            Rho.Rho.Nu = Nu.P.Y;
            Rho.Rho.Phi = new Affinity();
            Rho.Rho.Rho = Nu.F.L;
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
