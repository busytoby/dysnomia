using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Praseodymium
    {
        static public Soliton Qi;
        static public Spinor Xi;
        static public Polysigma Chi;

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

            Qi = new Soliton(
                Delta.Gamma.Rho.Gamma,
                new Quark(Vanadium.Rho, Cerium.GetQuaternionByName("Van Allen Belt"), Cerium.GetQuaternionByName("Pluto")),
                Delta.Sigma.Alpha.Sigma
                );

            Chi = new Polysigma();
            Chi.Add(Qi.Mu, Qi.YL.First.Value.Value, Qi.XL.Last.Value.Value, Qi.XL.First.Value.Value);
            Chi.Run(Qi, Neodymium.Chi.Rho.Alpha.Sigma);
            Chi.Run(Qi, Neodymium.Chi.Rho.Alpha.Gamma);
            Chi.Add(Qi.Q);
            Chi.Add(Tungsten.Eta.Nu.W.R, Tungsten.Eta.Nu.W.N, Tungsten.Eta.Nu.W.L, Tungsten.Rho.Iota.Upsilon.Lambda.Xi);
            Chi.Run(Tungsten.Eta.Nu.Kernel.Eta, Tungsten.Eta.Iota.Upsilon.Phi);
            Chi.Run(Tungsten.Eta.Nu.Kernel.Eta, Tungsten.Rho.Iota.Upsilon.Tau);
            Chi.Add(Tungsten.Rho.Nu.Kernel.Nu.X);
            Chi.Cap(Tungsten.Eta.Nu.Epsilon, Tungsten.Rho.Theta);
            Chi.Add(Osmium.Zeta);

            Chi.Add(Qi.Mu, Qi.XL.First.Value.Value, Qi.YL.Last.Value.Value, Qi.YL.First.Value.Value);
            Chi.Run(Qi, Neodymium.Chi.Rho.Rho.Gamma);
            Chi.Run(Qi, Neodymium.Chi.Rho.Rho.Sigma);
            Chi.Add(Qi.Q);
            Chi.Add(Tungsten.Rho.Nu.W.L, Tungsten.Rho.Nu.W.N, Tungsten.Rho.Nu.W.R, Tungsten.Eta.Iota.Upsilon.Lambda.Xi);
            Chi.Run(Tungsten.Rho.Nu.Kernel.Eta, Tungsten.Rho.Iota.Upsilon.Phi);
            Chi.Run(Tungsten.Rho.Nu.Kernel.Eta, Tungsten.Eta.Iota.Upsilon.Tau);
            Chi.Add(Tungsten.Rho.Nu.Kernel.Nu.X);
            Chi.Cap(Tungsten.Rho.Nu.Epsilon, Tungsten.Eta.Theta);
            Chi.Add(Osmium.Zeta);
        }
    }
}
