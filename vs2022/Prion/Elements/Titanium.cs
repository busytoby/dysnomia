using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Titanium
    {
        static public Polyphi Chi;
        public Octonion Eta;
        public Octonion Nu;

        public Spinor Xi;

        public Titanium(Chlorine<Dysnomia.Quaternion> Tau, Scandium Beta) {
            if(Chi == null)
                Chi = new Polyphi();

            Calcium Rho = new Calcium(Beta.Mu);
            Calcium Phi = new Calcium(Tau);

            Eta = new Octonion(Beta.Rho.Tail.Sigma, Beta.Rho.Tail.Phi);
            Chi.AddLast(Rho, Eta);

            Nu = new Octonion(Beta.Rho.Head.Sigma, Beta.Rho.Tail.Gamma);
            Chi.AddLast(Phi, Nu);

            Xi = new Spinor(Phi.Nu, Beta.Rho);
        }
    }
}
