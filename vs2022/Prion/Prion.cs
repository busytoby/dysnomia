﻿using System.Buffers;
using System.Numerics;
using Prion;
using Prion.Elements;

namespace Dysnomia
{
    public class Prion
    {
        static public Star Sigma;
        static public Quark Gamma;
        public Sulfur Rho;
        public Chromium Mu;
        public String Word;
        public Prion()
        {
            if(Sigma == null)
                Sigma = new Star();

            Rho = new Sulfur();
            Mu = new Chromium(Rho);

            Astatine.Beta = Rho.Persist(Mu);
            Radon.Tau = new Chromium(Astatine.Beta);
            if (Niobium.Ypsilon == null) throw new Exception("Static Construction Failure");
            Gamma = Niobium.Ypsilon.Alpha;

            Tungsten.Eta.Nu.Kernel.Inhibit(Niobium.Ypsilon.Y);
            Molybdenum.Rho.Kernel.Inhibit(Rho);
            Tungsten.Eta.Nu.Kernel.Aggregate(Tungsten.Eta.Nu.X);
            Molybdenum.Rho.Kernel.Aggregate(Niobium.Ypsilon);
            Molybdenum.Rho.Kernel.Antagonize(Radon.Tau.X);
        }

        public Sulfur Replicate()
        {
            return Rho.Reproduce(Mu);
        }
    }
}