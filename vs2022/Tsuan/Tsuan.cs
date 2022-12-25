using Prion.Elements;
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
            if (Csa.Ka.Last.Value.Value.Qi.Nu.Count < 1) throw new Exception("Failed To Seed");
            XoXo = new Xo(Csa, 10);

            Sie = new Xi(Xa.Zeta.Eta);
            Sie.Persist();
            Sie.Propagate();
            Xe = new Xo(Sie, 5);

            Tso();
        }
    
        public void Tso()
        {
            LinkedListNode<Xi> Xan = Xe.First;
            while (Xan != null)
            {
                Xi Sie = Xan.Value;
                LinkedListNode<Xi> San = XoXo.First;
                while (San != null)
                {
                    Xi Sa = San.Value;
                    if (Sie.Po.First.Value.Key < Sa.Po.First.Value.Key)
                    {
                        Sa.Seo.Run(Sie.On);
                        Sa.Seo.Run(Sie.On, Sa.Po.First.Value.Value);
                        Sa.Seo.Run(Sie.On, Sa.Po.Last.Value.Value);
                        Sa.Seo.Add(Sie.Seo.First.Value.Key);
                    }
                    San = San.Next;
                }
                Xan = Xan.Next;
            }
        }
    }
}