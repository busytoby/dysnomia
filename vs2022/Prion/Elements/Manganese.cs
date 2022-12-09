using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Manganese : Dictionary<BigInteger, Dysnomia.Spinor>
    {
        public Dictionary<String, Dysnomia.Spinor> ByName;

        public Manganese() : base()
        {
            ByName = new Dictionary<String, Spinor>();
        }

        public void Add(BigInteger Sigma, Dysnomia.Spinor U)
        {
            if (this.Count == 5) throw new Exception("Manganese Can Only Contain 5 Magnesia");
            if (base.ContainsKey(Sigma) && base[Sigma] == U) return;
            base.Add(Sigma, U);
            ByName.Add(NextEntry(), U);
        }

        private String NextEntry()
        {
            if (this.Count == 1) return "Gamma";
            if (this.Count == 2) return "Nu";
            if (this.Count == 3) return "Phi";
            if (this.Count == 4) return "Rho";
            if (this.Count == 5) return "Sigma";
            return null;
        }
    }
}
