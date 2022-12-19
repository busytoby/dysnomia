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

            Rho.Nu.Kernel.Aggregate(Iota.Upsilon);
        }
    }
}
