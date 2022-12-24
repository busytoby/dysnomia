using Prion.Elements;

namespace Dysnomia
{
    public class Tsuan
    {
        public Praseodymium Sie;
        public Illinium Xibe;
        
        public Tsuan()
        {
            Sie = new Praseodymium();
            Xibe = new Illinium(Tungsten.Rho);
            Xi(Xibe.Tsi);
        }

        public void Xi(Polynu Tso)
        {
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> S = Tso.Nu.First;
            Polygamma Po = new Polygamma(Xibe.First.Value.Value.Sigma.Item1.N);
            Soliton On = new Soliton(Xibe.First.Value.Value.Sigma.Item1.L, Xibe.First.Value.Key, Xibe.First.Value.Value.Sigma.Item1.R);
            On.Add(S.Value.Value.Nu, Xibe.First.Value.Value.Rho.Item2, Po);
            Polysigma Seo = new Polysigma();
            Seo.Add(S.Value.Value.Rho, S.Value.Value.Phi, S.Value.Value.Gamma, S.Value.Value.Sigma);
            Seo.Run(On, Xibe.First.Value.Value.Phi.Item1.R);
            Seo.Run(On, Xibe.First.Value.Value.Phi.Item2.N);
            Seo.Add(Xibe.First.Value.Value.Nu.Item1);
            Seo.Run(On);
            Seo.Run(On, Xibe.First.Value.Value.Rho.Item1.L);
            Seo.Run(On, Xibe.First.Value.Value.Sigma.Item2.N);
            Seo.Add(Xibe.First.Value.Value.Nu.Item2);
            Seo.Add(Po, Seo);
            Seo.Add(Xibe.First.Value.Value.Gamma.Item1);
            S = S.Next;
            Tso.Nu.RemoveFirst();
        }
    }
}