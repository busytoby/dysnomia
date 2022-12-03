using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion
{
    public class Moon
    {
        public Orbital X;
        public Mutex Lock = new Mutex();

        public Moon(Dynamic R, Dynamic C)
        {
            bool Failed = true;
            while (Failed)
            {
                try
                {
                    Affinity V = new Affinity(R, C);
                    X = new Orbital(V);
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
