using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;
using Dysnomia;

namespace Prion.Elements
{
    public class Potassium : Polygamma
    {
        public Potassium(Orbital S, Orbital N) : base(S, N) {
            Phosphorous.Phi.Add(T.First.Value.Key, T.First.Value.Value);
        }
    }
}
