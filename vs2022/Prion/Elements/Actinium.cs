using System.Buffers;
using System.Numerics;
using Dysnomia;
using Prion;

namespace Prion.Elements
{
    public class Actinium
    {
        static public Cerium Sigma;
        static public Quark Gamma;
        public Sulfur Rho;
        public Chromium Mu;

        public Actinium()
        {
            if (Sigma == null)
                Sigma = new Cerium();

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