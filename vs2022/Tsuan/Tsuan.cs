using Prion.Elements;
using Tsuan;

namespace Dysnomia
{
    public class Tsuan
    {
        static public Praseodymium Sie;
        static public Illinium Xibe;

        public Tsuan()
        {
            Sie = new Praseodymium();
            Xibe = new Illinium(Tungsten.Rho);
            Xi Csa = new Xi(Xibe);
            Csa.Persist();
            Csa.Propagate();
            if (Csa.Ka.Last.Value.Value.Qi.Nu.Count < 1) throw new Exception("Failed To Seed");
        }
    }
}