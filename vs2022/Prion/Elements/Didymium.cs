using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    static public class Didymium
    {
        static public Illinium Eta;
        static public Illinium Nu;
        static public Quark Psi;
        static public Soliton Xi;

        static Didymium()
        {
            Rhenium.Pi.Add(Tungsten.Iota.Upsilon.Xi, Tungsten.Iota.Upsilon.Epsilon);
            Rhenium.Pi.Add(Niobium.Ypsilon.Y.Xi, Niobium.Ypsilon.Y.Epsilon);
            Rhenium.Pi.Add(Praseodymium.Xi, Niobium.Ypsilon.Y.Epsilon);
            Rhenium.Pi.Add(Tungsten.Rho.Nu.W.R, Osmium.Zeta, Tungsten.Iota.Upsilon.Epsilon);
            Rhenium.Pi.Add(Niobium.Ypsilon.Kappa.Tau, Niobium.Ypsilon.Epsilon);

            Psi = new Quark(Praseodymium.Iota.Alpha.Kernel.Eta.Rho, Zinc.Fetch(), Tungsten.Iota.Alpha.Kernel.Eta.Rho);

            Xi = new Soliton(
                Praseodymium.Alpha.Beta.Gamma.Rho.Gamma,
                Psi,
                Praseodymium.Alpha.Beta.Sigma.Alpha.Sigma
                );

            Eta = new Illinium(Tungsten.Eta.Theta);
            Nu = new Illinium(Tungsten.Rho.Theta);

            Eta.Cap(Praseodymium.Iota.Alpha.Epsilon, Nu);
            Eta.Add(Psi);

            Nu.Add(Xi.Mu, Xi.XL.Last.Value.Value, Xi.Qi.Phi.Sigma, Xi.Qi.Phi.Rho);
            Nu.Run(Xi, Neodymium.Chi.Rho.Alpha.Phi);
            Nu.Run(Xi, Neodymium.Chi.Rho.Alpha.Sigma);
            Nu.Add(Xi.Q);
            Nu.Add(Xi.Mu, Praseodymium.Iota.Alpha.W.N, Praseodymium.Iota.Alpha.W.L, Praseodymium.Iota.Alpha.W.R);
            Nu.Run(Tungsten.Iota.Alpha.Kernel.Eta, Neodymium.Chi.Gamma.Alpha.Gamma);
            Nu.Run(Praseodymium.Iota.Alpha.Kernel.Eta, Neodymium.Chi.Nu.Alpha.Rho);
            Nu.Add(Osmium.Zeta);
            Nu.Cap(Tungsten.Iota.Alpha.Epsilon, Eta);
            Nu.Add(Xi.Q);
            Nu.Cap(Praseodymium.Iota.Alpha.Epsilon, Nu);
            Nu.Add(Psi);
        }
    }
}
