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
        public Cerium Beta;

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

            Tantalum StarAlpha = new Tantalum();

            Molybdenum.Rho.Kernel.Inhibit(Molybdenum.Rho.X);

            LinkedListNode<KeyValuePair<Tensor, Octonion>> Nu = StarAlpha.Pi.Tsi.First;
            Tantalum BetaGamma = new Tantalum(Nu.Value.Value);

            Tungsten.Eta.Nu.Kernel.Aggregate(Molybdenum.Rho.X);

            Nu = Nu.Next;
            Rhenium BetaBeta = new Rhenium(Nu.Value.Value);

            Molybdenum.Rho.Kernel.Aggregate(Tungsten.Eta.Nu.X);

            Nu = Nu.Next;
            Osmium BetaEta = new Osmium(Nu.Value.Value);

            Tungsten.Eta.Nu.Kernel.Antagonize(Radon.Tau.X);
            Molybdenum.Rho.Kernel.Aggregate(Radon.Tau.X);

            Nu = Nu.Next;
            Beta = new Cerium(Nu.Value.Value);

            Neodymium Xi = new Neodymium(Beta.Nu, BetaEta.Phi, BetaBeta.Rho, BetaGamma.Sigma);
        }

        public Sulfur Replicate()
        {
            return Rho.Reproduce(Mu);
        }
    }
}