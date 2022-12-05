using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Prion.Elements;

namespace Dysnomia
{
    public class Planet
    {
        public Orbital X;
        //public Zinc Q;
        public Mutex Lock = new Mutex();

        public Planet(Affinity D)
        {
            X = new Orbital(D);
//            Q = new Zinc(X);
//            Tin.M.Add(X.L.M.Mu, X.L.M.Cone);
        }

        public Planet(Dynamic R, Dynamic C)
        {
            bool Failed = true;
            while (Failed)
            {
                try
                {
                    Affinity V = new Affinity(R, C);
                    X = new Orbital(V);
//                    Q = new Zinc(X);
                    Failed = false;
                }
                catch (AffinityException E)
                {
                    if (E.Code == 2) continue;
                    if (E.Code == 3) continue;
                    else throw;
                }
            }
        }
    }
}
