using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Illinium : Polysigma
    {
        public Polynu Tsi;

        public Illinium(Molybdenum Eta) : base(Eta.Theta)
        {
            Tsi = new Polynu();
            Tsi.Sigma(Eta.Kappa.Last.Value.Value.Qi.Nu);
            Eta.Kappa.Last.Value.Value.Qi.Nu.Clear();

            Add(Eta.Nu.W.R, Eta.Iota.Alpha.X.Xi, Eta.Iota.Alpha.X.Lambda.Xi, Eta.Iota.Alpha.X.Beta.Xi);
            Run(Eta.Nu.Kernel.Eta, Eta.Iota.Alpha.X.Tau);
            Run(Eta.Nu.Kernel.Eta, Eta.Iota.Alpha.X.Phi);
            Add(Eta.Iota.Alpha.X.Alpha);
            Cap(Eta.Nu.Epsilon, this);
            Add(Eta.Alpha);
        }
    }
}
