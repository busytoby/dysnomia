using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Hafnium : Orbital
    {
        static public Tin Saturn;

        static public Potassium Kappa;
        public Orbital S, F, P;
        public object B;

        public Hafnium(Orbital D) : base(D.R.M)
        {
            Star.Alpha.Add(Sigma, Y.M);
            F = new Orbital(D.Y.M);
            Kappa = new Potassium(F, this);
            Star.Alpha.Add(F.Sigma, F.Y.M);
            P = new Orbital(D.L.M);
            Star.Alpha.Add(P.Sigma, P.Y.M);
        }

        public Hafnium(Hafnium E) : base(E.F.L.M)
        {
            Star.Alpha.Add(Sigma, Y.M);
            F = new Hafnium(E.F);
            Kappa = new Potassium(F, this);
            Star.Alpha.Add(F.Sigma, F.Y.M);
            P = new Orbital();
            Star.Alpha.Add(P.Sigma, P.Y.M);
        }

        public Hafnium(Affinity D) : base(D) { }

        public Hafnium(Dysnomia.Quaternion D)
        {
            S = new Orbital(D.Rho);
            F = new Orbital(D.Phi);
            P = new Orbital(D.Gamma);
        }
    }
}
