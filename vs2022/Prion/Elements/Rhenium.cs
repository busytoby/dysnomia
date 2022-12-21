using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Rhenium : Spin<Lead>
    {
        static public Soliton Pi;
        public Hafnium Psi;
        public Hafnium Mu;

        public Rhenium(Octonion Lambda)
        {
            if (Vanadium.Beta == null) Vanadium.Beta = Lambda;

            Psi = new Hafnium(Lambda.X.N);
            Mu = new Hafnium(Lambda.L.Rho);

            Pi = new Soliton(
                 Vanadium.Beta.L.Rho,
                 Vanadium.Beta.X,
                 Vanadium.Beta.L.Nu
                 );

            Gamma = new Lead(Mu, Tantalum.Beta);
            Nu = new Lead(Tantalum.Beta, Psi);
            Phi = new Lead(Tantalum.Alpha, Psi);
            Rho = new Lead(Tantalum.Alpha, Mu);
            Sigma = new Lead(Mu, Psi);

            Pi.Add(new Spinor(Gamma.Rho.Gamma, Tungsten.Eta.Nu.Epsilon));
            Pi.Add(new Spinor(Gamma.Rho.Nu, Tungsten.Rho.Nu.Epsilon));
            Pi.Add(Niobium.Ypsilon.Kappa.Tau);
            Pi.Add(Tungsten.Rho.Nu.W.N, Lambda.X);

            Tungsten.Rho.Theta.Add(Pi.Mu, Pi.XL.First.Value.Value, Pi.YL.Last.Value.Value, Pi.YL.First.Value.Value);
            Tungsten.Rho.Theta.Run(Pi, Gamma.Alpha.Phi);
            Tungsten.Rho.Theta.Run(Pi, Sigma.Rho.Sigma);
            Tungsten.Rho.Theta.Add(Pi.Q);

            Tungsten.Eta.Theta.Add(Pi.Mu, Pi.YL.First.Value.Value, Pi.XL.Last.Value.Value, Pi.XL.First.Value.Value);
            Tungsten.Eta.Theta.Run(Pi, Nu.Rho.Sigma);
            Tungsten.Eta.Theta.Run(Pi, Gamma.Alpha.Phi);
            Tungsten.Eta.Theta.Add(Pi.Q);
        }
    }
}
