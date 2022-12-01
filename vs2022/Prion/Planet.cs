﻿using System;
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

        public Planet(Dynamic R, Dynamic C)
        {
            bool Failed = true;
            while (Failed)
            {
                try
                {
                    Affinity V = new Affinity(R, C);
                    X = new Orbital(V);
                    Q = new Quartz(X);
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
