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
        static public Chromium Nu;
        static public Sulfur Beta;

        static Tungsten()
        {
            Eta = new Molybdenum();
            Eta.Contrast();
            Eta.Kappa.Propagate(Eta.Theta);
            Eta.Contrast();

            Beta = new Sulfur();
            Nu = new Chromium(Beta);
            Beta.Persist(Nu);


        }
    }
}
