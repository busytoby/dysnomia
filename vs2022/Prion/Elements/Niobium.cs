using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Prion;

namespace Prion.Elements
{
    static public class Niobium // Jupiter's Moon Europa
    {
        public static Sulfur Ypsilon;
        public static Parallax Phi;

        static Niobium() {
            Ypsilon = Astatine.Beta.Persist(Radon.Tau);
            Orbital Omicron = new Orbital(Ypsilon.Y.Beta.Xi.Gamma.Item2, Astatine.Beta.Xi.Phi.Item2, Ypsilon.Y.Beta.Xi.Rho.Item2);
            Phi = new Parallax(Omicron);
        }    
    }
}
