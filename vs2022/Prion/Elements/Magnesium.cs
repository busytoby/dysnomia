using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    static public class Magnesium
    {
        static public Spinor Nu;
        static public Tensor Xi;

        static Magnesium()
        {
            if (Tin.Sigma != null && Tin.Mu.Count != 0) throw new Exception("Magnesium Must Only Be Set Up Once With Tin");
            Nu = new Spinor(Tin.Sigma, Parallax.Kappa);
            Phosphorous.Sigmas.RecordSpinor(Nu, "Deimos");
        }
    }
}
