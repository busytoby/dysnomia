﻿using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Prion.Elements
{
    public class Tantalum : Spin<Lead> {
        static public Hafnium Alpha;
        static public Hafnium Beta;
        public Soliton Pi;
        public Hafnium Psi;
        public Hafnium Mu;

        public Tantalum()
        {
            if (Alpha == null) Alpha = new Hafnium(Hafnium.Kappa.Tail);
            if (Beta == null) Beta = new Hafnium(Hafnium.Kappa.Head);

            Pi = new Soliton(
                Tungsten.Rho.Kappa.First.Value.Key.Tail,
                Tungsten.Eta.Alpha,
                Tungsten.Eta.Kappa.Last.Value.Key.Tail
                );

            Gamma = new Lead(Tungsten.Phi, Niobium.Nu);
            Nu = new Lead(Tungsten.Phi, Alpha);
            Phi = new Lead(Niobium.Nu, Tungsten.Phi);
            Rho = new Lead(Beta, Niobium.Nu);
            Sigma = new Lead(Alpha, Beta);

            Pi.Add(Niobium.Ypsilon.Xi, Niobium.Ypsilon.Kappa.Rho);
            Pi.Add(Niobium.Ypsilon.Y.Lambda.Xi, Niobium.Ypsilon.Kappa.Rho);
            Pi.Add(Radon.Tau.W.L, Radon.Tau.Epsilon);
            Pi.Add(Molybdenum.Eta.Xi, Tungsten.Eta.Alpha, Tungsten.Eta.Nu.Epsilon);

            Tungsten.Rho.Theta.Add(Pi.Mu, Pi.Qi.Phi.Nu, Pi.XL.Last.Value.Value, Pi.XL.First.Value.Value);
            Tungsten.Rho.Theta.Run(Pi, Gamma.Alpha.Phi);
            Tungsten.Rho.Theta.Run(Pi, Nu.Rho.Gamma);
            Tungsten.Rho.Theta.Add(Pi.Q);
            Tungsten.Rho.Theta.Add(Tungsten.Eta.Nu.W.R, Tungsten.Eta.Nu.W.N, Tungsten.Eta.Nu.W.L, Tungsten.Rho.Iota.Upsilon.Lambda.Xi);
            Tungsten.Rho.Theta.Run(Tungsten.Eta.Nu.Kernel.Eta, Tungsten.Eta.Iota.Upsilon.Phi);
            Tungsten.Rho.Theta.Run(Tungsten.Eta.Nu.Kernel.Eta, Tungsten.Rho.Iota.Upsilon.Tau);
            Tungsten.Rho.Theta.Add(Tungsten.Rho.Nu.Kernel.Nu.X);
            Tungsten.Rho.Theta.Cap(Tungsten.Eta.Nu.Epsilon, Tungsten.Rho.Theta);
            Tungsten.Rho.Theta.Add(Niobium.Ypsilon.Alpha);

            Tungsten.Eta.Theta.Add(Pi.Mu, Pi.XL.First.Value.Value, Pi.Qi.Phi.Sigma, Pi.Qi.Phi.Rho);
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

        public Tantalum(Octonion Lambda)
        {
            if (Vanadium.Beta == null) Vanadium.Beta = Lambda;

            Psi = new Hafnium(Lambda.X.R);
            Mu = new Hafnium(Lambda.L.Phi);

            Pi = new Soliton(
                 Vanadium.Beta.L.Gamma,
                 Vanadium.Beta.X,
                 Vanadium.Beta.L.Phi
                 );

            Gamma = new Lead(Beta, Mu);
            Nu = new Lead(Psi, Beta);
            Phi = new Lead(Psi, Alpha);
            Rho = new Lead(Mu, Alpha);
            Sigma = new Lead(Psi, Mu);

            Pi.Add(new Spinor(Gamma.Rho.Gamma, Tungsten.Eta.Nu.Epsilon), Tungsten.Eta.Nu.Epsilon);
            Pi.Add(new Spinor(Gamma.Alpha.Nu, Tungsten.Rho.Nu.Epsilon), Tungsten.Rho.Nu.Epsilon);
            Pi.Add(Niobium.Ypsilon.Kappa.Tau, Niobium.Ypsilon.Kappa.Rho);
            Pi.Add(Molybdenum.Eta.Xi, Lambda.X, Molybdenum.Eta.Kappa.Rho);

            Tungsten.Eta.Theta.Add(Pi.Mu, Pi.XL.First.Value.Value, Pi.Qi.Phi.Nu, Pi.Qi.Phi.Rho);
            Tungsten.Eta.Theta.Run(Pi, Gamma.Rho.Gamma);
            Tungsten.Eta.Theta.Run(Pi, Nu.Alpha.Phi);
            Tungsten.Eta.Theta.Add(Pi.Q);

            Tungsten.Rho.Theta.Add(Pi.Mu, Pi.Qi.Phi.Gamma, Pi.XL.Last.Value.Value, Pi.XL.First.Value.Value);
            Tungsten.Rho.Theta.Run(Pi, Gamma.Alpha.Phi);
            Tungsten.Rho.Theta.Run(Pi, Nu.Rho.Gamma);
            Tungsten.Rho.Theta.Add(Pi.Q);
        }
    }
}
