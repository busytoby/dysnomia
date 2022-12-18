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
        static public Lanthanum Iota;

        static Tungsten()
        {
            Eta = new Molybdenum();
            Eta.Contrast();
            Eta.Kappa.Propagate(Eta.Theta);
            Eta.Contrast();

            Iota = Eta.Persist();
        }
    }
}
