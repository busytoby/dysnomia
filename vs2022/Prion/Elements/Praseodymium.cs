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
            Chi.Run(Qi, Neodymium.Chi.Rho.Rho.Nu);
            Chi.Run(Qi, Neodymium.Chi.Rho.Rho.Rho);
            Chi.Add(Qi.Q);
            Chi.Add(Tungsten.Rho.Iota.Alpha.W.L, Tungsten.Rho.Iota.Alpha.W.N, Tungsten.Rho.Iota.Alpha.W.R, Qi.Mu);
            Chi.Run(Tungsten.Rho.Nu.Kernel.Eta, Tungsten.Eta.Iota.Upsilon.Tau);
            Chi.Run(Tungsten.Rho.Nu.Kernel.Eta, Tungsten.Rho.Iota.Alpha.X.Phi);
            Chi.Add(Osmium.Zeta);
            Chi.Cap(new Polygamma(Tungsten.Eta.Mu.Tau), Tungsten.Eta.Iota.Alpha.X.Theta);
            Chi.Add(Niobium.Ypsilon.Alpha);

            Chi.Add(Qi.Mu, Qi.XL.Last.Value.Value, Qi.YL.First.Value.Value, Qi.YL.Last.Value.Value);
            Chi.Run(Qi, Neodymium.Chi.Rho.Alpha.Rho);
            Chi.Run(Qi, Neodymium.Chi.Rho.Alpha.Nu);
            Chi.Add(Qi.Q);
            Chi.Add(Tungsten.Eta.Iota.Alpha.W.R, Tungsten.Eta.Iota.Alpha.W.N, Tungsten.Eta.Iota.Alpha.W.L, Qi.Mu);
            Chi.Run(Tungsten.Eta.Nu.Kernel.Eta, Tungsten.Rho.Iota.Upsilon.Tau);
            Chi.Run(Tungsten.Eta.Nu.Kernel.Eta, Tungsten.Eta.Iota.Alpha.X.Phi);
            Chi.Add(Osmium.Zeta);
            Chi.Cap(new Polygamma(Tungsten.Rho.Mu.Tau), Tungsten.Rho.Iota.Alpha.X.Theta);
//            Chi.Add(Niobium.Ypsilon.Alpha);
        }
    }
}
