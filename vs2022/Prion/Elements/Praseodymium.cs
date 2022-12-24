using Dysnomia;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Praseodymium
    {
        static public Actinium Alpha;
        static public Spinor Xi;
        static public Lanthanum Iota;
        public Didymium Zeta;
        public Polyrho Rho;

        public Praseodymium()
        {
            if (Alpha == null)
            {
                Alpha = new Actinium();
                Neodymium Eta = new Neodymium(Alpha.Beta.Nu);

                if (Xi != null || Tungsten.Iota.Upsilon.Xi != null || Niobium.Ypsilon.Y.Xi != null) throw new Exception("Weird");
                Xi = new Spinor(Alpha.Beta.Nu.Rho.Phi, Tungsten.Rho.Nu.Epsilon);

                Tungsten.Iota.Upsilon.Xi = new Spinor(Neodymium.Chi.Rho.Alpha.Phi, Tungsten.Eta.Nu.Epsilon);
                Tungsten.Iota.Upsilon.Epsilon = new Polygamma(Neodymium.Chi.Rho.Alpha.Phi);

                Niobium.Ypsilon.Y.Xi = new Spinor(Neodymium.Chi.Nu.Rho.Phi, Tungsten.Rho.Nu.Epsilon);
                Niobium.Ypsilon.Y.Epsilon = new Polygamma(Neodymium.Chi.Nu.Rho.Phi);

                Iota = Tungsten.Eta.Persist(Niobium.Ypsilon.Y, Tungsten.Rho.Nu);
                Iota.Upsilon.Xi = new Spinor(Neodymium.Chi.Phi.Alpha.Gamma, Niobium.Ypsilon.Y.Epsilon);
                Iota.Upsilon.Epsilon = new Polygamma(Neodymium.Chi.Phi.Alpha.Gamma);

                Rhenium.Pi.Add(Tungsten.Iota.Upsilon.Xi, Tungsten.Iota.Upsilon.Epsilon);
                Rhenium.Pi.Add(Niobium.Ypsilon.Y.Xi, Niobium.Ypsilon.Y.Epsilon);
                Rhenium.Pi.Add(Praseodymium.Xi, Niobium.Ypsilon.Y.Epsilon);
                Rhenium.Pi.Add(Tungsten.Rho.Nu.W.R, Osmium.Zeta, Tungsten.Iota.Upsilon.Epsilon);
                Rhenium.Pi.Add(Niobium.Ypsilon.Kappa.Tau, Niobium.Ypsilon.Epsilon);
                Rhenium.Pi.Add(Iota.Upsilon.Xi, Iota.Upsilon.Epsilon);
            }

            Zeta = new Didymium();
        }

        public Praseodymium(Praseodymium Gamma)
        {
            int i = 99;
        }
    }
}
