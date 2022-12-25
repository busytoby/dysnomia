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
        static public Octonion Beta;
        static public Quaternion Rho;

        public Vanadium(Spinor Alpha)
        {
            Rho = Alpha.Octogamma.Value.Value;
        }

        static public Iron Push()
        {
            Scandium Eta = new Scandium(Rho);
            Calcium Phi = new Calcium(Eta.Mu);

            return new Iron(Eta, Phi);
        }
    }
}
