﻿using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Manganese : Dictionary<BigInteger, Dysnomia.Octonion>
    {
        public Dictionary<String, Dysnomia.Octonion> ByName;

        public Manganese() : base()
        {
            ByName = new Dictionary<String, Octonion>();
        }

        public void Add(BigInteger Sigma, Dysnomia.Octonion U)
        {
            if (base.ContainsKey(Sigma) && base[Sigma] == U) return;
            base.Add(Sigma, U);
            if (this.Count < 5) ByName.Add(NextEntry(), U);
        }

        private String NextEntry()
        {
            if (this.Count == 0) return "Gamma";
            if (this.Count == 1) return "Nu";
            if (this.Count == 2) return "Phi";
            if (this.Count == 3) return "Rho";
            if (this.Count == 4) return "Sigma";
            return null;
        }
    }
}
