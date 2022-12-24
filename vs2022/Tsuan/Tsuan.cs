using Prion.Elements;
using Tsuan;

namespace Dysnomia
{
    public class Tsuan
    {
        static public Praseodymium Sie;
        static public Illinium Xibe;
        static public Xo XoXo;

        public Tsuan()
        {
            Sie = new Praseodymium();
            Xibe = new Illinium(Tungsten.Rho);

            Xi Csa = new Xi(Xibe);
            Csa.Persist();
            Csa.Propagate();
            if (Csa.Ka.Last.Value.Value.Qi.Nu.Count < 1) throw new Exception("Failed To Seed");
            XoXo = new Xo(Csa);

            Tso();
        }

        public void Tso()
        {
            foreach(Xi Sa in XoXo)
            {
                if(Sie.Zeta.Psi.L.Epsilon < Sa.Po.First.Value.Key)
                {
                    Sa.Seo.Run(Sie.Zeta.Xi);
                    Sa.Seo.Run(Sie.Zeta.Xi, Sa.Po.First.Value.Value);
                    Sa.Seo.Run(Sie.Zeta.Xi, Sa.Po.Last.Value.Value);
                    Sa.Seo.Add(Sie.Zeta.Psi);
                    Sa.Seo.Run(Sie.Zeta.Xi);
                    Sa.Seo.Run(Sie.Zeta.Xi, Sa.Seo.First.Value.Value.Rho.Item2.R);
                    Sa.Seo.Run(Sie.Zeta.Xi, Sa.Seo.Last.Value.Value.Rho.Item1.N);
                    Sa.Seo.Add(Sie.Zeta.Psi);
                }
            }
        }
    }
}