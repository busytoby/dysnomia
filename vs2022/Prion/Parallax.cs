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
        static public Tin Saturn;

        static public Potassium Kappa;
        public Orbital S, F, P;

        public Parallax(Orbital D) : base(D.R.M)
        {
            Star.Alpha.Add(Sigma, Y.M);
            F = new Orbital(D.Y.M);
            Kappa = new Potassium(F, this);
            Star.Alpha.Add(F.Sigma, F.Y.M);
            P = new Orbital(D.L.M);
            Star.Alpha.Add(P.Sigma, P.Y.M);
        }

        public Parallax(Parallax E) : base(E.F.L.M)
        {
            Star.Alpha.Add(Sigma, Y.M);
            F = new Parallax(E.F);
            Kappa = new Potassium(F, this);
            Star.Alpha.Add(F.Sigma, F.Y.M);
            P = new Orbital();
            Star.Alpha.Add(P.Sigma, P.Y.M);
        }

        public Parallax(Affinity D) : base(D) { }
    }
}
