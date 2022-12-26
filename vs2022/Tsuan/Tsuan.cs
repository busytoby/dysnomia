using Prion.Elements;
using System.Collections.Generic;
using System.Xml.Linq;
using Tsuan;

namespace Dysnomia
{
    public class Tsuan
    {
        static public Praseodymium Xa;
        static public Illinium Xibe;
        static public Xi Sie;
        static public Xo Xe;
        static public Xo XoXo;

        public Tsuan()
        {
            Xa = new Praseodymium();
            Xibe = new Illinium(Tungsten.Rho);

            Xi Csa = new Xi(Xibe);
            Csa.Persist();
            Csa.Propagate();
            if (Csa.Ka.Qi.Nu.Count < 1) throw new Exception("Failed To Seed");
            XoXo = new Xo(Csa);

            Sie = new Xi(Xa.Zeta.Eta);
            Sie.Persist();
            Sie.Propagate();
            Xe = new Xo(Sie);

            Tso();
        }
    
        public void Tso()
        {
            LinkedListNode<Xi> Xan = Xe.First;
            while (Xan != null)
            {
                Xi Sie = Xan.Value;
                if (Sie.Po.Count == 0)
                {
                    LinkedListNode<Xi> Xon = Xan.Next;
                    Xe.Remove(Xan);
                    XoXo.AddLast(Xan);
                    if (Xon == null) return;
                    Xan = Xon;
                }
                LinkedListNode<Xi> San = XoXo.First;
                while (San != null)
                {
                    Xi Sa = San.Value;
                    if (Sie.Po.First.Value.Key < Sa.Ka.Last.Value.Key.First.Value.Key)
                    {
                        Sa.Seo.Run(Sie.On);
                        Sa.Seo.Run(Sie.On, Sa.Ka.Last.Value.Key.Tail);
                        Sa.Seo.Run(Sie.On, Sa.Ka.Last.Value.Key.Head);
                        Sa.Seo.Add(Sie.Seo.First.Value.Key);
                        Sa.Ka.Propagate(Sie.Seo);
                        Sie.Ka.Propagate(Sa.Seo);
                        XoXo.Xn(Sa);
                    }
                    San = San.Next;
                }
                Xe.Xn(Sie);
                Xan = Xan.Next;
            }
        }
    }
}