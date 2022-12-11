﻿using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Vanadium
    {
        Quaternion Rho;
        Scandium Eta;
        Octonion Beta;

        public Vanadium(Spinor Alpha)
        {
            Rho = Alpha.Head();
        }

        public Iron Push()
        {
            Eta = new Scandium(Rho);
            Calcium Phi = new Calcium(Eta.Mu);

            return new Iron(Eta, Phi);
        }
    }
}
