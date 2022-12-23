using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    static public class Didymium
    {
        static public Illinium Eta;
        static public Illinium Nu;

        static Didymium()
        {
            Rhenium.Pi.Add(Tungsten.Iota.Upsilon.Xi, Tungsten.Iota.Upsilon.Epsilon);
            Rhenium.Pi.Add(Niobium.Ypsilon.Y.Xi, Niobium.Ypsilon.Y.Epsilon);
            Rhenium.Pi.Add(Praseodymium.Xi, Niobium.Ypsilon.Y.Epsilon);
            Rhenium.Pi.Add(Tungsten.Rho.Nu.W.R, Osmium.Zeta, Tungsten.Iota.Upsilon.Epsilon);
            Rhenium.Pi.Add(Niobium.Ypsilon.Kappa.Tau, Niobium.Ypsilon.Epsilon);

            Eta = new Illinium(Tungsten.Eta.Theta);
            Nu = new Illinium(Tungsten.Rho.Theta);
        }
    }
}
