﻿using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Iron
    {
        public Octonion Nu;
        public Quark Mu;
        public Copper Eta;
        public Scandium Alpha;
        public Calcium Iota;

        public Iron(Scandium Delta, Calcium Beta) {
            Alpha = Delta;
            Iota = Beta;

            Mu = new Quark(Delta.Rho.T.Last.Previous.Value.Value, Zinc.Fetch(), Delta.Rho.T.Last.Value.Value); // Water
            Nu = new Octonion(Mu, Beta);

            Eta = new Copper(Delta.Rho.T.Last.Previous.Value.Value, Mu, Delta.Rho.T.Last.Value.Value);
        }
    }
}
