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
        public Xo(Xi Csa, int Max = 0)
        {
            Xn(Csa, Max);
        }

        public void Xn(Xi Ca, int Max = 0)
        {
            if (Max == 0) Max = Ca.Ka.Qi.Nu.Count + Count;
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sio = SelectByKey(Ca);
            LinkedListNode<KeyValuePair<Quark, Bundle>> Chi;

            while (Sio != null && Ca.Si.Count > 8 && Count < Max)
            {
                Chi = Ca.Si.First;
                while (Chi != null)
                    if (Chi.Value.Value.Eta != null && Chi.Value.Value.Eta.Mu.List != null && Chi.Value.Value.Eta.Mu.List.Count >= 5) break;
                    else Chi = Chi.Next;
                if (Chi == null) return;

                Xi Csi = new Xi();
                Csi.Si = Ca.Si;
                Csi.Po = Chi.Value.Value.Eta.Mu.List;
                Csi.On = Chi.Value.Value.Eta;
                Csi.On.Add(Sio.Value.Value.Nu, Ca.Seo.TailBundle.Gamma.Item2, Csi.Po);
                Csi.On.Add(Sio.Value.Value.Nu, Ca.Seo.TailBundle.Sigma.Item1, Csi.Po);
                Csi.On.Add(Sio.Value.Value.Nu, Ca.Seo.TailBundle.Nu.Item2, Csi.Po);
                Csi.On.Add(Sio.Value.Value.Nu, Ca.Seo.TailBundle.Phi.Item1, Csi.Po);
                Csi.Seo = new Polysigma();
                Csi.Seo.Add(Sio.Value.Value.Rho, Sio.Value.Value.Phi, Sio.Value.Value.Gamma, Sio.Value.Value.Sigma);
                Csi.Seo.Run(Csi.On, Ca.Seo.TailBundle.Phi.Item1.R);
                Csi.Seo.Run(Csi.On, Ca.Seo.TailBundle.Phi.Item2.N);
                Csi.Seo.Add(Ca.Seo.TailBundle.Nu.Item1);
                Csi.Seo.Run(Csi.On);
                Csi.Seo.Run(Csi.On, Ca.Seo.TailBundle.Rho.Item1.L);
                Csi.Seo.Run(Csi.On, Ca.Seo.TailBundle.Sigma.Item2.N);
                Csi.Seo.Add(Ca.Seo.TailBundle.Nu.Item2);
                Csi.Seo.Add(Csi.Seo);
                Csi.Seo.Add(Ca.Seo.TailBundle.Gamma.Item1);
                Ca.Ka.Qi.Nu.Remove(Sio);
                Ca.Si.Remove(Chi);
                Csi.Persist();
                if (Csi.Ka == null) return;
                AddLast(Csi);
                Sio = SelectByKey(Ca);
            }
        }

        public LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> SelectByKey(Xi Ca)
        {
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sio = Ca.Ka.Qi.Nu.First;
            LinkedListNode<KeyValuePair<Spin<Spinor>, Spin<Spinor>>> Sie = null;

            while (Sio != null)
            {
                if (Sie == null || Sio.Value.Key.Phi.Epsilon > Sie.Value.Key.Phi.Epsilon)
                    Sie = Sio;

                Sio = Sio.Next;
            }
            return Sie;
        }
    }
}
