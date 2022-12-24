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
        public Illinium Eta;
        public Illinium Nu;
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
            Nu = new Illinium(Tungsten.Rho);

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
