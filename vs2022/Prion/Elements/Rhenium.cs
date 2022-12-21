using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Rhenium : Tantalum
    {
        public Rhenium()
        {
            throw new Exception("No Such Thing");
        }

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

            Gamma = new Lead(Beta, Mu);
            Nu = new Lead(Psi, Beta);
            Phi = new Lead(Psi, Alpha);
            Rho = new Lead(Mu, Alpha);
            Sigma = new Lead(Psi, Mu);

            Pi.Add(new Spinor(Gamma.Rho.Gamma, Tungsten.Eta.Nu.Epsilon));
            Pi.Add(new Spinor(Gamma.Alpha.Nu, Tungsten.Rho.Nu.Epsilon));
            Pi.Add(Niobium.Ypsilon.Kappa.Tau);
            Pi.Add(Molybdenum.Eta.Xi, Lambda.X);

            Tungsten.Rho.Theta.Add(Pi.Mu, Pi.XL.First.Value.Value, Pi.YL.Last.Value.Value, Pi.YL.First.Value.Value);
            Tungsten.Rho.Theta.Run(Pi, Gamma.Alpha.Phi);
            Tungsten.Rho.Theta.Run(Pi, Sigma.Rho.Sigma);
            Tungsten.Rho.Theta.Add(Pi.Q);

            Tungsten.Eta.Theta.Add(Pi.Mu, Pi.YL.First.Value.Value, Pi.XL.Last.Value.Value, Pi.YL.First.Value.Value);
            Tungsten.Eta.Theta.Run(Pi, Nu.Rho.Sigma);
            Tungsten.Eta.Theta.Run(Pi, Gamma.Alpha.Phi);
            Tungsten.Eta.Theta.Add(Pi.Q);
        }
    }
}
