using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Tantalum : Spin<Lead> {
        static public Hafnium Alpha;
        static public Hafnium Beta;
        static public Soliton Pi;
        public Tantalum()
        {
            if (Alpha == null) Alpha = new Hafnium(Hafnium.Kappa.First.Value.Value);
            if (Beta == null) Beta = new Hafnium(Hafnium.Kappa.Last.Value.Value);

            Pi = new Soliton(
                Tungsten.Rho.Kappa.First.Value.Key.First.Value.Value,
                Tungsten.Eta.Alpha,
                Tungsten.Eta.Kappa.Last.Value.Key.First.Value.Value
                );

            Gamma = new Lead(Tungsten.Phi, Niobium.Nu);
            Nu = new Lead(Tungsten.Phi, Alpha);
            Phi = new Lead(Niobium.Nu, Tungsten.Phi);
            Rho = new Lead(Beta, Niobium.Nu);
            Sigma = new Lead(Alpha, Beta);

            Pi.Add(Niobium.Ypsilon.Xi);
            Pi.Add(Niobium.Ypsilon.Y.Lambda.Xi);
            Pi.Add(Radon.Tau.W.L);
            Pi.Add(Molybdenum.Eta.Xi, Tungsten.Eta.Alpha);

            Tungsten.Rho.Theta.Add(Pi.Mu, Pi.YL.First.Value.Value, Pi.XL.Last.Value.Value, Pi.XL.First.Value.Value);
            Tungsten.Rho.Theta.Run(Pi, Gamma.Alpha.Phi);
            Tungsten.Rho.Theta.Run(Pi, Nu.Rho.Gamma);
            Tungsten.Rho.Theta.Add(Pi.Q);
            Tungsten.Rho.Theta.Add(Tungsten.Eta.Nu.W.R, Tungsten.Eta.Nu.W.N, Tungsten.Eta.Nu.W.L, Tungsten.Rho.Iota.Upsilon.Lambda.Xi);
            Tungsten.Rho.Theta.Run(Tungsten.Eta.Nu.Kernel.Eta, Tungsten.Eta.Iota.Upsilon.Phi);
            Tungsten.Rho.Theta.Run(Tungsten.Eta.Nu.Kernel.Eta, Tungsten.Rho.Iota.Upsilon.Tau);
            Tungsten.Rho.Theta.Add(Tungsten.Rho.Nu.Kernel.Nu.X);
            Tungsten.Rho.Theta.Cap(Tungsten.Eta.Nu.Epsilon, Tungsten.Rho.Theta);
            Tungsten.Rho.Theta.Add(Niobium.Ypsilon.Alpha);

            Tungsten.Eta.Theta.Add(Pi.Mu, Pi.XL.First.Value.Value, Pi.YL.Last.Value.Value, Pi.YL.First.Value.Value);
            Tungsten.Eta.Theta.Run(Pi, Gamma.Rho.Gamma);
            Tungsten.Eta.Theta.Run(Pi, Nu.Alpha.Phi);
            Tungsten.Eta.Theta.Add(Pi.Q);
            Tungsten.Eta.Theta.Add(Tungsten.Rho.Nu.W.L, Tungsten.Rho.Nu.W.N, Tungsten.Rho.Nu.W.R, Tungsten.Eta.Iota.Upsilon.Lambda.Xi);
            Tungsten.Eta.Theta.Run(Tungsten.Rho.Nu.Kernel.Eta, Tungsten.Rho.Iota.Upsilon.Phi);
            Tungsten.Eta.Theta.Run(Tungsten.Rho.Nu.Kernel.Eta, Tungsten.Eta.Iota.Upsilon.Tau);
            Tungsten.Eta.Theta.Add(Tungsten.Rho.Nu.Kernel.Nu.X);
            Tungsten.Eta.Theta.Cap(Tungsten.Rho.Nu.Epsilon, Tungsten.Eta.Theta);
            Tungsten.Eta.Theta.Add(Niobium.Ypsilon.Alpha);
        }
    }
}
