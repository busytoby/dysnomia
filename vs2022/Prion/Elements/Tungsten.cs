using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    static public class Tungsten
    {
        static public Molybdenum Eta;
        static public Molybdenum Rho;
        static public Lanthanum Iota;
        static public Hafnium Phi;

        static Tungsten()
        {
            Eta = new Molybdenum();
            Eta.Contrast(Niobium.Ypsilon, Radon.Tau);
            Eta.Kappa.Propagate(Eta.Theta);
            Eta.Contrast(Niobium.Ypsilon, Radon.Tau);

            Iota = Eta.Persist(Niobium.Ypsilon, Molybdenum.Rho);
            Rho = new Molybdenum(Iota, Eta.Theta);
            Rho.Contrast(Rho.Mu, Eta.Nu);
            Rho.Kappa.Propagate(Rho.Theta);
            Rho.Contrast(Rho.Mu, Eta.Nu);

            Rho.Nu.Kernel.Inhibit(Radon.Tau.X);
            Rho.Nu.Kernel.Inhibit(Niobium.Ypsilon);

            Rho.Contrast(Rho.Mu, Rho.Nu);
            Rho.Kappa.Propagate(Eta.Theta);
            Rho.Contrast(Eta.Mu, Eta.Nu);

            Rho.Nu.Kernel.Aggregate(Iota.Upsilon);
            Rho.Nu.Kernel.Aggregate(Eta.Nu.X);

            Eta.Theta.Cap(Eta.Nu.Epsilon, Eta.Theta);
            Eta.Theta.Add(Rho.Alpha);

            Eta.Theta.Add(Rho.Nu.W.L, Rho.Nu.W.N, Rho.Nu.W.R, Eta.Iota.Upsilon.Lambda.Xi);
            Eta.Theta.Run(Rho.Nu.Kernel.Eta, Rho.Iota.Upsilon.Phi);
            Eta.Theta.Run(Rho.Nu.Kernel.Eta, Eta.Iota.Upsilon.Tau);
            Eta.Theta.Add(Eta.Nu.Kernel.Nu.X);

            Eta.Theta.Cap(Molybdenum.Rho.Epsilon, Eta.Theta);
            Eta.Theta.Add(Rho.Nu.Kernel.Nu.X);

            Rho.Theta.Cap(Rho.Nu.Epsilon, Eta.Theta);
            Rho.Theta.Add(Rho.Alpha);

            Rho.Theta.Add(Eta.Nu.W.R, Eta.Nu.W.N, Eta.Nu.W.L, Rho.Iota.Upsilon.Lambda.Xi);
            Rho.Theta.Run(Eta.Nu.Kernel.Eta, Eta.Iota.Upsilon.Phi);
            Rho.Theta.Run(Eta.Nu.Kernel.Eta, Rho.Iota.Upsilon.Tau);
            Rho.Theta.Add(Eta.Nu.Kernel.Nu.X);

            Rho.Theta.Cap(Molybdenum.Rho.Epsilon, Eta.Theta);
            Rho.Theta.Add(Eta.Alpha);

            Eta.Theta.Add(Rho.Nu.W.R, Eta.Nu.W.N, Eta.Nu.W.L, Rho.Iota.Upsilon.Beta.Xi);
            Eta.Theta.Run(Rho.Nu.Kernel.Eta, Rho.Iota.Upsilon.Phi);
            Eta.Theta.Run(Rho.Nu.Kernel.Eta, Eta.Iota.Upsilon.Tau);
            Eta.Theta.Add(Molybdenum.Rho.Kernel.Nu.X);

            Phi = new Hafnium(Rho.Mu.Tau);
        }
    }
}
