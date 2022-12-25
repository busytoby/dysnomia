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
        bool Xia = false;

        public Xi() { }
        public Xi(Illinium Xibe)
        {
            Xia = true;
            Si = Xibe;
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sio = Si.Tsi.Nu.First;
            LinkedListNode<KeyValuePair<Quark, Bundle>> Chi = Si.First;

            while (Chi != null)
                if (Chi.Value.Value.Eta != null && Chi.Value.Value.Eta.Mu.List != null && Chi.Value.Value.Eta.Mu.List.Count > 5) break;
                else Chi = Chi.Next;
            if (Chi == null) return;

            Po = Chi.Value.Value.Eta.Mu.List;
            On = Chi.Value.Value.Eta;
            On.Add(Sio.Value.Value.Nu, Si.TailBundle.Gamma.Item2, Po);
            On.Add(Sio.Value.Value.Nu, Si.TailBundle.Sigma.Item1, Po);
            On.Add(Sio.Value.Value.Nu, Si.TailBundle.Nu.Item2, Po);
            On.Add(Sio.Value.Value.Nu, Si.TailBundle.Phi.Item1, Po);
            Seo = new Polysigma();
            Seo.Add(Sio.Value.Value.Rho, Sio.Value.Value.Phi, Sio.Value.Value.Gamma, Sio.Value.Value.Sigma);
            Seo.Run(On, Si.TailBundle.Phi.Item1.R);
            Seo.Run(On, Si.TailBundle.Phi.Item2.N);
            Seo.Add(Si.TailBundle.Nu.Item1);
            Seo.Run(On);
            Seo.Run(On, Si.TailBundle.Rho.Item1.L);
            Seo.Run(On, Si.TailBundle.Sigma.Item2.N);
            Seo.Add(Si.TailBundle.Nu.Item2);
            Seo.Add(Po, Seo);
            Seo.Add(Si.TailBundle.Gamma.Item1);
            Si.Tsi.Nu.RemoveFirst();
            Si.Remove(Chi);
        }

        public void Persist()
        {
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sio = Si.Tsi.Nu.First;
            LinkedListNode<KeyValuePair<Quark, Bundle>> Chi = Si.First;

            while(Chi != null)
                if (Chi.Value.Value.Eta != null && Chi.Value.Value.Eta.Mu.List != null && Chi.Value.Value.Eta.Mu.List.Count > 5) break;
                else Chi = Chi.Next;
            if (Chi == null) return;

            Polygamma Op = Chi.Value.Value.Eta.Mu.List;
            Soliton In = Chi.Value.Value.Eta;
            In.Add(Sio.Value.Value.Rho, Si.TailBundle.Gamma.Item1, Op);
            In.Add(Sio.Value.Value.Rho, Si.TailBundle.Sigma.Item2, Op);
            In.Add(Sio.Value.Value.Rho, Si.TailBundle.Nu.Item1, Op);
            In.Add(Sio.Value.Value.Rho, Si.TailBundle.Rho.Item2, Op);
            Seo.Add(Op, Seo);
            Seo.Add(Si.TailBundle.Rho.Item1);
            Seo.Run(In);
            Seo.Run(In, Si.TailBundle.Rho.Item2.N);
            Seo.Run(In, Si.TailBundle.Sigma.Item1.N);
            Seo.Add(Si.TailBundle.Nu.Item2);
            Seo.Add(Sio.Value.Value.Nu, Sio.Value.Value.Gamma, Sio.Value.Value.Phi, Sio.Value.Value.Rho);
            Seo.Run(In, Si.TailBundle.Phi.Item1.R);
            Seo.Run(In, Si.TailBundle.Phi.Item2.N);
            Seo.Add(Si.TailBundle.Nu.Item1);
            Si.Tsi.Nu.RemoveFirst();

            Ka = new Polyrho(Seo, Po);
            Ka.Qi = Si.Tsi;
            Ka.Cap(Op);

            if (Xia)
            {
                Seo.Add(On.Mu, On.Qi.Phi.Rho, On.XL.Last.Value.Value, On.XL.First.Value.Value);
                Seo.Run(On, Seo.TailBundle.Phi.Item1.N);
                Seo.Run(On, Seo.HeadBundle.Phi.Item2.L);
                Seo.Add(On.Q);

                Seo.Add(Po, Seo);
                Seo.Add(Seo.TailQuark);
            }
            Si.Remove(Chi);
        }

        public void Propagate()
        {
            Ka.Propagate(Seo);
        }
    }
}
