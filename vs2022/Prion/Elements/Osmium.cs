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
        static public Polygamma Xi;

        public Osmium(Octonion Lambda)
        {
            if (Xi == null) Xi = new Polygamma(Titanium.Chi.HeadTensor.Phi);
            Delta = new Spinor(Titanium.Chi.HeadTensor.Gamma, Xi);
            if (Eta == null) Eta = new Vanadium(Delta);

            Psi = new Hafnium(Titanium.Chi.TailTensor.Nu);
            Mu = new Hafnium(Titanium.Chi.HeadTensor.Sigma);

            Zeta = new Quark(Titanium.Chi.TailTensor.Phi, Zinc.Fetch(), Titanium.Chi.HeadTensor.Rho);
            Titanium.Chi.Head.Xi(Zeta);

            Gamma = new Lead(Rhenium.Psi, Mu);
            Nu = new Lead(Psi, Rhenium.Psi);
            Phi = new Lead(Psi, Rhenium.Mu);
            Rho = new Lead(Mu, Rhenium.Mu);
            Sigma = new Lead(Psi, Mu);

            Rhenium.Pi.Add(new Spinor(Gamma.Alpha.Gamma, Tungsten.Rho.Nu.Epsilon), Xi);
            Rhenium.Pi.Add(new Spinor(Nu.Rho.Rho, Tungsten.Eta.Nu.Epsilon), Xi);
            Rhenium.Pi.Add(Niobium.Ypsilon.Kappa.Tau, Xi);
            Rhenium.Pi.Add(Tungsten.Rho.Nu.W.N, Zeta, Xi);

            Tungsten.Eta.Theta.Add(Rhenium.Pi.Mu, Rhenium.Pi.Qi.Phi.Gamma, Rhenium.Pi.XL.Last.Value.Value, Rhenium.Pi.XL.First.Value.Value);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Nu.Rho.Rho);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Gamma.Rho.Nu);
            Tungsten.Eta.Theta.Add(Lambda.Psi);
            Tungsten.Eta.Theta.Add(Delta, Rhenium.Pi.XL.First.Value.Value, Rhenium.Pi.Qi.Phi.Nu, Rhenium.Pi.Qi.Phi.Rho);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Phi.Alpha.Nu);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Sigma.Rho.Gamma);
            Tungsten.Eta.Theta.Add(Lambda.Psi);

            Tungsten.Rho.Theta.Add(Rhenium.Pi.Mu, Rhenium.Pi.Qi.Phi.Rho, Rhenium.Pi.XL.Last.Value.Value, Rhenium.Pi.XL.First.Value.Value);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Phi.Rho.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Sigma.Alpha.Sigma);
            Tungsten.Rho.Theta.Add(Lambda.Psi);
            Tungsten.Rho.Theta.Add(Delta, Rhenium.Pi.XL.First.Value.Value, Rhenium.Pi.Qi.Phi.Gamma, Rhenium.Pi.Qi.Phi.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Gamma.Rho.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Sigma.Alpha.Gamma);
            Tungsten.Rho.Theta.Add(Lambda.Psi);
        }
    }
}
