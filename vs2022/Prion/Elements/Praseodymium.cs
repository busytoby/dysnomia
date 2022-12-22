using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Praseodymium
    {
        static public Soliton Qi;
        static public Spinor Xi;
        static public Polyrho Chi;

        public Praseodymium(Cerium Delta)
        {
            Neodymium Eta = new Neodymium(Delta.Nu);

            if(Qi == null)
            {
                if (Xi != null) throw new Exception("Weird");
                Xi = new Spinor(Delta.Nu.Rho.Phi, Tungsten.Rho.Nu.Epsilon);

                Rhenium.Pi.Add(new Spinor(Neodymium.Chi.Rho.Alpha.Phi, Tungsten.Eta.Nu.Epsilon));
                Rhenium.Pi.Add(new Spinor(Neodymium.Chi.Nu.Rho.Phi, Tungsten.Rho.Nu.Epsilon));
                Rhenium.Pi.Add(Xi);
                Rhenium.Pi.Add(Tungsten.Rho.Nu.W.R, Osmium.Zeta);
                Rhenium.Pi.Add(Niobium.Ypsilon.Kappa.Tau);
            }

            Qi = new Soliton(
                Delta.Gamma.Rho.Gamma,
                new Quark(Vanadium.Rho, Cerium.GetQuaternionByName("Van Allen Belt"), Cerium.GetQuaternionByName("Pluto")),
                Delta.Sigma.Alpha.Sigma
                );

        }
    }
}
