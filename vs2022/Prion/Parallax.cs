using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Prion.Elements;

namespace Dysnomia
{
    public class Parallax : Orbital
    {
        public Orbital S, F, P;

        public Parallax(Orbital D) : base(D.R.M)
        {
            Star.C.Add(Sigma, Y.M);
            F = new Orbital(D.Y.M);
            Star.C.Add(F.Sigma, F.Y.M);
            P = new Orbital(D.L.M);
            Star.C.Add(P.Sigma, P.Y.M);
        }

        public Parallax(Parallax E) : base(E.F.L.M)
        {
            Star.C.Add(Sigma, Y.M);
            F = new Parallax(E.F);
            Star.C.Add(F.Sigma, F.Y.M);
            P = new Orbital();
            Star.C.Add(P.Sigma, P.Y.M);
        }
    }
}
