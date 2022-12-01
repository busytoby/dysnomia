using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Planet
    {
        public Orbital X;
        public Quartz Q;
        public Mutex Lock = new Mutex();

        public Planet(Affinity D)
        {
            X = new Orbital(D);
            Q = new Quartz(X);
        }
    }
}
