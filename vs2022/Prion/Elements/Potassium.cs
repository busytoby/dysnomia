using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Prion.Elements
{
    public class Potassium : Polygamma
    {
        public Lithium Eta;

        public Potassium(Orbital S, Orbital N) : base(S, N) {
            if (Eta == null) Eta = new Lithium();
            Eta.Add(First.Value.Key, First.Value.Value);
        }

        public new void Add(Orbital R)
        {
            base.Add(R);
        }
    }
}
