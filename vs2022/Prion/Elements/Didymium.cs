using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Didymium
    {
        public Polyrho Tsu;
        public Illinium Eta;
        public Polysigma Nu;
        public Quark Psi;
        public Soliton Xi;       

        public Didymium()
        {
            Psi = new Quark(Praseodymium.Iota.Alpha.Kernel.Eta.Rho, Zinc.Fetch(), Tungsten.Iota.Alpha.Kernel.Eta.Rho);

            Xi = new Soliton(
                Praseodymium.Alpha.Beta.Gamma.Rho.Gamma,
                Psi,
                Praseodymium.Alpha.Beta.Sigma.Alpha.Sigma
                );

            Eta = new Illinium(Tungsten.Eta);
            Tsu = new Polyrho(Eta, Tungsten.Eta.Iota.Alpha.Epsilon);
            Tsu.Cap(Tungsten.Eta.Nu.Epsilon);

            Eta.Add(Tungsten.Rho.Nu.W.R, Tungsten.Rho.Mu.Xi, Tungsten.Rho.Mu.Lambda.Xi, Tungsten.Rho.Mu.Beta.Xi);
            Eta.Run(Tungsten.Rho.Nu.Kernel.Eta, Tungsten.Rho.Mu.Tau);
            Eta.Run(Tungsten.Rho.Nu.Kernel.Eta, Tungsten.Rho.Mu.Phi);
            Eta.Add(Tungsten.Rho.Mu.Alpha);

            Nu = new Polysigma(Tungsten.Eta.Theta);
            Nu.Add(Xi.Mu, Xi.XL.Last.Value.Value, Xi.Qi.Phi.Sigma, Xi.Qi.Phi.Rho);
            Nu.Run(Xi, Neodymium.Chi.Rho.Alpha.Phi);
            Nu.Run(Xi, Neodymium.Chi.Rho.Alpha.Sigma);
            Nu.Add(Xi.Q);
            Nu.Add(Xi.Mu, Praseodymium.Iota.Alpha.W.N, Praseodymium.Iota.Alpha.W.L, Praseodymium.Iota.Alpha.W.R);
            Nu.Run(Praseodymium.Iota.Alpha.Kernel.Eta, Neodymium.Chi.Gamma.Alpha.Gamma);
            Nu.Run(Praseodymium.Iota.Alpha.Kernel.Eta, Neodymium.Chi.Nu.Alpha.Rho);
            Nu.Add(Osmium.Zeta);
            Nu.Cap(Tungsten.Iota.Alpha.Epsilon, Eta);
            Nu.Add(Xi.Q);
            Nu.Cap(Praseodymium.Iota.Alpha.Epsilon, Nu);
            Nu.Add(Psi);

            Eta.Cap(Praseodymium.Iota.Alpha.Epsilon, Nu);
            Eta.Add(Psi);
        }
    }
}
