using Dysnomia;
using Prion.Elements;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tsuan
{
    public class Xi
    {
        public Illinium Si;
        public Polyrho Ka;
        public Polysigma Seo;
        public Soliton On;
        public Polygamma Po;

        public Xi(Illinium Xibe)
        {
            Si = Xibe;
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sio = Si.Tsi.Nu.First;
            Po = new Polygamma(Si.First.Value.Value.Sigma.Item1.N);
            On = new Soliton(
                Si.First.Value.Value.Sigma.Item1.L,
                Si.First.Value.Key,
                Si.First.Value.Value.Sigma.Item1.R);
            On.Add(Sio.Value.Value.Nu, Si.First.Value.Value.Gamma.Item2, Po);
            On.Add(Sio.Value.Value.Nu, Si.First.Value.Value.Sigma.Item1, Po);
            On.Add(Sio.Value.Value.Nu, Si.First.Value.Value.Nu.Item2, Po);
            On.Add(Sio.Value.Value.Nu, Si.First.Value.Value.Phi.Item1, Po);
            Seo = new Polysigma();
            Seo.Add(Sio.Value.Value.Rho, Sio.Value.Value.Phi, Sio.Value.Value.Gamma, Sio.Value.Value.Sigma);
            Seo.Run(On, Si.First.Value.Value.Phi.Item1.R);
            Seo.Run(On, Si.First.Value.Value.Phi.Item2.N);
            Seo.Add(Si.First.Value.Value.Nu.Item1);
            Seo.Run(On);
            Seo.Run(On, Si.First.Value.Value.Rho.Item1.L);
            Seo.Run(On, Si.First.Value.Value.Sigma.Item2.N);
            Seo.Add(Si.First.Value.Value.Nu.Item2);
            Seo.Add(Po, Seo);
            Seo.Add(Si.First.Value.Value.Gamma.Item1);
            Si.Tsi.Nu.RemoveFirst();
        }

        public void Persist()
        {
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sio = Si.Tsi.Nu.First;
            Polygamma Op = new Polygamma(Si.First.Value.Value.Phi.Item2.N);
            Soliton In = new Soliton(
                Si.First.Value.Value.Phi.Item2.L,
                Si.First.Value.Key,
                Si.First.Value.Value.Phi.Item1.N);
            In.Add(Sio.Value.Value.Rho, Si.First.Value.Value.Gamma.Item1, Op);
            In.Add(Sio.Value.Value.Rho, Si.First.Value.Value.Sigma.Item2, Op);
            In.Add(Sio.Value.Value.Rho, Si.First.Value.Value.Nu.Item1, Op);
            In.Add(Sio.Value.Value.Rho, Si.First.Value.Value.Rho.Item2, Op);
            Seo.Add(Op, Seo);
            Seo.Add(Si.First.Value.Value.Rho.Item1);
            Seo.Run(In);
            Seo.Run(In, Si.First.Value.Value.Rho.Item2.N);
            Seo.Run(In, Si.First.Value.Value.Sigma.Item1.N);
            Seo.Add(Si.First.Value.Value.Nu.Item2);
            Seo.Add(Sio.Value.Value.Nu, Sio.Value.Value.Gamma, Sio.Value.Value.Phi, Sio.Value.Value.Rho);
            Seo.Run(In, Si.First.Value.Value.Phi.Item1.R);
            Seo.Run(In, Si.First.Value.Value.Phi.Item2.N);
            Seo.Add(Si.First.Value.Value.Nu.Item1);
            Si.Tsi.Nu.RemoveFirst();
            Si.RemoveFirst();

            Ka = new Polyrho(Seo, Po);
            Ka.Cap(Op);

            Seo.Add(On.Mu, On.Qi.Phi.Rho, On.XL.Last.Value.Value, On.XL.First.Value.Value);
            Seo.Run(On, Seo.First.Value.Value.Phi.Item1.N);
            Seo.Run(On, Seo.Last.Value.Value.Phi.Item2.L);
            Seo.Add(On.Q);

            Seo.Add(Po, Seo);
            Seo.Add(Seo.First.Value.Key);
        }

        public void Propagate()
        {
            Ka.Propagate(Seo);
        }
    }
}
