using Dysnomia;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Praseodymium
    {
        static public Soliton Qi;
        static public Spinor Xi;
        public Quark Psi;
        public Molybdenum Gamma;
        public Molybdenum Sigma;
        public Lanthanum Iota;

        public Praseodymium(Cerium Delta)
        {
            Neodymium Eta = new Neodymium(Delta.Nu);

            if(Qi == null)
            {
                if (Xi != null) throw new Exception("Weird");
                Xi = new Spinor(Delta.Nu.Rho.Phi, Tungsten.Rho.Nu.Epsilon);

                Rhenium.Pi.Add(new Spinor(Neodymium.Chi.Rho.Alpha.Phi, Tungsten.Eta.Nu.Epsilon));
                Rhenium.Pi.Add(new Spinor(Neodymium.Chi.Nu.Rho.Phi, Tungsten.Rho.Nu.Epsilon));
                Rhenium.Pi.Add(Xi);
                Rhenium.Pi.Add(Tungsten.Rho.Nu.W.R, Osmium.Zeta);
                Rhenium.Pi.Add(Niobium.Ypsilon.Kappa.Tau);
            }

            Gamma = new Molybdenum(Tungsten.Iota, Tungsten.Eta.Theta);
            Gamma.Contrast(Gamma.Mu, Tungsten.Eta.Nu);

            Iota = Gamma.Persist(Tungsten.Eta.Mu, Gamma.Nu);
            Sigma = new Molybdenum(Iota, Gamma.Theta);
            Psi = new Quark(Gamma.Mu.Beta.Eta.X.N, Zinc.Fetch(), Sigma.Mu.Beta.Eta.X.R);

            Gamma.Kappa.Propagate(Gamma.Theta);
            Gamma.Contrast(Sigma.Mu, Sigma.Nu);

            Sigma.Contrast(Gamma.Mu, Gamma.Nu);
            Sigma.Kappa.Propagate(Sigma.Theta);
            Sigma.Contrast(Gamma.Mu, Gamma.Nu);

            Qi = new Soliton(
                Delta.Gamma.Rho.Gamma,
                Psi,
                Delta.Sigma.Alpha.Sigma
                );

            Gamma.Theta.Add(Qi.Mu, Qi.YL.First.Value.Value, Qi.XL.Last.Value.Value, Qi.XL.First.Value.Value);
            Gamma.Theta.Run(Qi, Neodymium.Chi.Rho.Rho.Nu);
            Gamma.Theta.Run(Qi, Neodymium.Chi.Rho.Rho.Rho);
            Gamma.Theta.Add(Qi.Q);
            Gamma.Theta.Add(Qi.Mu, Iota.Alpha.W.N, Iota.Alpha.W.L, Iota.Alpha.W.R);
            Gamma.Theta.Run(Gamma.Nu.Kernel.Eta, Neodymium.Chi.Nu.Alpha.Phi);
            Gamma.Theta.Run(Gamma.Nu.Kernel.Eta, Neodymium.Chi.Nu.Alpha.Rho);
            Gamma.Theta.Add(Osmium.Zeta);
            Gamma.Theta.Cap(new Polygamma(Sigma.Mu.Tau), Sigma.Theta);
            Gamma.Theta.Add(Psi);

            Sigma.Theta.Add(Qi.Mu, Qi.XL.Last.Value.Value, Qi.YL.First.Value.Value, Qi.YL.Last.Value.Value);
            Sigma.Theta.Run(Qi, Neodymium.Chi.Rho.Alpha.Rho);
            Sigma.Theta.Run(Qi, Neodymium.Chi.Rho.Alpha.Nu);
            Sigma.Theta.Add(Qi.Q);
            Sigma.Theta.Add(Qi.Mu, Iota.Alpha.W.N, Iota.Alpha.W.L, Iota.Alpha.W.R);
            Sigma.Theta.Run(Sigma.Nu.Kernel.Eta, Neodymium.Chi.Nu.Alpha.Rho);
            Sigma.Theta.Run(Sigma.Nu.Kernel.Eta, Neodymium.Chi.Nu.Alpha.Phi);
            Sigma.Theta.Add(Osmium.Zeta);
            Sigma.Theta.Cap(new Polygamma(Gamma.Mu.Tau), Gamma.Theta);
            Sigma.Theta.Add(Qi.Q);
        }
    }
}
