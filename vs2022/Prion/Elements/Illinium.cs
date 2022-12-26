﻿using Dysnomia;
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
            Tsi = Eta.Kappa.Qi;

            Sulfur Xi;
            if (Eta.Mu == null) Xi = Eta.Iota.Alpha.X;
            else Xi = Eta.Mu;
            Add(Eta.Nu.W.R, Xi.Xi, Xi.Lambda.Xi, Xi.Beta.Xi);
            Run(Eta.Nu.Kernel.Eta, Xi.Tau);
            Run(Eta.Nu.Kernel.Eta, Xi.Phi);
            Add(Xi.Alpha);
            Cap(this);
            Add(Eta.Alpha);
        }
    }
}