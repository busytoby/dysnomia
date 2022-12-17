using System.Buffers;
using System.Numerics;
using Prion;
using Prion.Elements;

namespace Dysnomia
{
    public class Prion
    {
        static public Star Sigma;
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

            Word = "Zuo";
        }

        public Sulfur Replicate()
        {
            return Rho.Reproduce(Mu);
        }
    }
}