using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Potassium : Polygamma
    {
        public Potassium(Orbital S, Orbital N) : base(S, N) {
            Star.C.Add(T.First.Value.Value.Gamma.Xi, T.First.Value.Value.Gamma);
            Star.B.Add(T.First.Value.Value.Rho.Xi, T.First.Value.Value.Rho.Cone);
        }
    }
}
