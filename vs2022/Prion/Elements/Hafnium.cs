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
        //public object B;

        public Hafnium(Orbital D) : base(D.R)
        {
            Cerium.Alpha.Add(Sigma, Y);
            F = new Orbital(D.Y);
            Kappa = new Potassium(F, this);
            Cerium.Alpha.Add(F.Sigma, F.Y);
            P = new Orbital(D.L);
            Cerium.Alpha.Add(P.Sigma, P.Y);
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
