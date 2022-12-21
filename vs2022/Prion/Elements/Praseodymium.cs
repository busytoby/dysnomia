﻿using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Praseodymium
    {
        public Soliton Qi;
        public Praseodymium(Cerium Delta)
        {
            Qi = new Soliton(
                Delta.Gamma.Alpha.Gamma,
                new Quark(Cerium.GetQuaternionByName("Pluto"), Vanadium.Rho, Cerium.GetQuaternionByName("Van Allen Belt")),
                Delta.Sigma.Rho.Sigma
                );
        }
    }
}
