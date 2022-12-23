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
        Actinium Alpha;
        static public Spinor Xi;
        public Quark Psi;
        public Molybdenum Gamma;
        public Molybdenum Sigma;
        public Lanthanum Iota;

        public Praseodymium()
        {
            Alpha = new Actinium();
            Neodymium Eta = new Neodymium(Alpha.Beta.Nu);

            if (Xi != null || Tungsten.Iota.Upsilon.Xi != null || Niobium.Ypsilon.Y.Xi != null) throw new Exception("Weird");

            Xi = new Spinor(Alpha.Beta.Nu.Rho.Phi, Tungsten.Rho.Nu.Epsilon);

            Tungsten.Iota.Upsilon.Xi = new Spinor(Neodymium.Chi.Rho.Alpha.Phi, Tungsten.Eta.Nu.Epsilon);
            Tungsten.Iota.Upsilon.Epsilon = new Polygamma(Neodymium.Chi.Rho.Alpha.Phi);

            Niobium.Ypsilon.Y.Xi = new Spinor(Neodymium.Chi.Nu.Rho.Phi, Tungsten.Rho.Nu.Epsilon);
            Niobium.Ypsilon.Y.Epsilon = new Polygamma(Neodymium.Chi.Nu.Rho.Phi);

            if (Didymium.Eta == null || Didymium.Nu == null) throw new Exception("RNA Transcription Failure");
        }
    }
}
