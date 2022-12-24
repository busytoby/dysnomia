using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Tsuan
{
    public class Xo : LinkedList<Xi>
    {
        public Xo(Xi Csa)
        {
            Xn(Csa);
        }

        public void Xn(Xi Ca)
        {
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sio = Ca.Ka.Last.Value.Value.Qi.Nu.First;

            while (Sio != null)
            {
                Xi Csi = new Xi();
                Csi.Si = Ca.Si;
                Csi.Po = new Polygamma(Ca.Seo.First.Value.Value.Sigma.Item1.N);
                Csi.On = new Soliton(
                    Ca.Seo.First.Value.Value.Sigma.Item1.L,
                    Ca.Seo.First.Value.Key,
                    Ca.Seo.First.Value.Value.Sigma.Item1.R);
                Csi.On.Add(Sio.Value.Value.Nu, Ca.Seo.First.Value.Value.Gamma.Item2, Csi.Po);
                Csi.On.Add(Sio.Value.Value.Nu, Ca.Seo.First.Value.Value.Sigma.Item1, Csi.Po);
                Csi.On.Add(Sio.Value.Value.Nu, Ca.Seo.First.Value.Value.Nu.Item2, Csi.Po);
                Csi.On.Add(Sio.Value.Value.Nu, Ca.Seo.First.Value.Value.Phi.Item1, Csi.Po);
                Csi.Seo = new Polysigma();
                Csi.Seo.Add(Sio.Value.Value.Rho, Sio.Value.Value.Phi, Sio.Value.Value.Gamma, Sio.Value.Value.Sigma);
                Csi.Seo.Run(Csi.On, Ca.Seo.First.Value.Value.Phi.Item1.R);
                Csi.Seo.Run(Csi.On, Ca.Seo.First.Value.Value.Phi.Item2.N);
                Csi.Seo.Add(Ca.Seo.First.Value.Value.Nu.Item1);
                Csi.Seo.Run(Csi.On);
                Csi.Seo.Run(Csi.On, Ca.Seo.First.Value.Value.Rho.Item1.L);
                Csi.Seo.Run(Csi.On, Ca.Seo.First.Value.Value.Sigma.Item2.N);
                Csi.Seo.Add(Ca.Seo.First.Value.Value.Nu.Item2);
                Csi.Seo.Add(Csi.Po, Csi.Seo);
                Csi.Seo.Add(Ca.Seo.First.Value.Value.Gamma.Item1);
                Ca.Ka.Last.Value.Value.Qi.Nu.RemoveFirst();
                Csi.Persist();
                AddLast(Csi);
                Sio = Ca.Ka.Last.Value.Value.Qi.Nu.First;
            }
        }
    }
}
