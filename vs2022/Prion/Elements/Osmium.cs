using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Osmium : Spin<Lead>
    {
        public Hafnium Psi;
        public Hafnium Mu;

        static public Quark Zeta;
        static public Vanadium Eta;
        static public Spinor Delta;

        public Osmium(Octonion Lambda)
        {
            Delta = new Spinor(Lambda.L.Phi, new Polygamma(Vanadium.Beta.X.R));
            if (Eta == null) Eta = new Vanadium(Delta);

            Psi = new Hafnium(Lambda.X.N);
            Mu = new Hafnium(Lambda.L.Rho);

            Zeta = new Quark(Lambda.X.R, Lambda.X.L, Lambda.X.N);

            Gamma = new Lead(Rhenium.Psi, Mu);
            Nu = new Lead(Psi, Rhenium.Psi);
            Phi = new Lead(Psi, Rhenium.Mu);
            Rho = new Lead(Mu, Rhenium.Mu);
            Sigma = new Lead(Psi, Mu);

            Rhenium.Pi.Add(new Spinor(Gamma.Alpha.Rho, Tungsten.Rho.Nu.Epsilon), Niobium.Ypsilon.Kappa.Rho);
            Rhenium.Pi.Add(new Spinor(Gamma.Rho.Gamma, Tungsten.Eta.Nu.Epsilon), Hafnium.Kappa);
            Rhenium.Pi.Add(Niobium.Ypsilon.Kappa.Tau, Niobium.Ypsilon.Kappa.Rho);
            Rhenium.Pi.Add(Tungsten.Rho.Nu.W.N, Zeta);

            Tungsten.Eta.Theta.Add(Rhenium.Pi.Mu, Rhenium.Pi.Qi.Phi.Gamma, Rhenium.Pi.XL.Last.Value.Value, Rhenium.Pi.XL.First.Value.Value);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Nu.Rho.Rho);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Gamma.Rho.Nu);
            Tungsten.Eta.Theta.Add(Lambda.X);
            Tungsten.Eta.Theta.Add(Delta, Rhenium.Pi.XL.First.Value.Value, Rhenium.Pi.Qi.Phi.Nu, Rhenium.Pi.Qi.Phi.Rho);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Phi.Alpha.Nu);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Sigma.Rho.Gamma);
            Tungsten.Eta.Theta.Add(Lambda.X);

            Tungsten.Rho.Theta.Add(Rhenium.Pi.Mu, Rhenium.Pi.Qi.Phi.Rho, Rhenium.Pi.XL.Last.Value.Value, Rhenium.Pi.XL.First.Value.Value);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Phi.Rho.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Sigma.Alpha.Sigma);
            Tungsten.Rho.Theta.Add(Lambda.X);
            Tungsten.Rho.Theta.Add(Delta, Rhenium.Pi.XL.First.Value.Value, Rhenium.Pi.Qi.Phi.Gamma, Rhenium.Pi.Qi.Phi.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Gamma.Rho.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Sigma.Alpha.Gamma);
            Tungsten.Rho.Theta.Add(Lambda.X);
        }
    }
}
