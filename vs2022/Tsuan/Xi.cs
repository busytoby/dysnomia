using Dysnomia;
using Prion.Elements;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tsuan
{
    public class Xi
    {
        public Xi(Illinium Xibe)
        {
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sio = Xibe.Tsi.Nu.First;
            Polygamma Po = new Polygamma(Xibe.First.Value.Value.Sigma.Item1.N);
            Soliton On = new Soliton(
                Xibe.First.Value.Value.Sigma.Item1.L, 
                Xibe.First.Value.Key, 
                Xibe.First.Value.Value.Sigma.Item1.R);
            On.Add(Sio.Value.Value.Nu, Xibe.First.Value.Value.Rho.Item2, Po);
            Polysigma Seo = new Polysigma();
            Seo.Add(Sio.Value.Value.Rho, Sio.Value.Value.Phi, Sio.Value.Value.Gamma, Sio.Value.Value.Sigma);
            Seo.Run(On, Xibe.First.Value.Value.Phi.Item1.R);
            Seo.Run(On, Xibe.First.Value.Value.Phi.Item2.N);
            Seo.Add(Xibe.First.Value.Value.Nu.Item1);
            Seo.Run(On);
            Seo.Run(On, Xibe.First.Value.Value.Rho.Item1.L);
            Seo.Run(On, Xibe.First.Value.Value.Sigma.Item2.N);
            Seo.Add(Xibe.First.Value.Value.Nu.Item2);
            Seo.Add(Po, Seo);
            Seo.Add(Xibe.First.Value.Value.Gamma.Item1);
            Xibe.Tsi.Nu.RemoveFirst();
        }
    }
}
