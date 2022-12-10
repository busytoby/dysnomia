using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Sulfur
    {
        public Scandium Nu;
        public Scandium Eta;

        public Octonion Tau;
        public Octonion Mu;

        public Spinor Rho;

        public Sulfur()
        {
            Nu = new Scandium();
            Eta = new Scandium();

            if (!(Nu.Rho.T.Count == 5) || !(Eta.Rho.T.Count == 5)) throw new Exception("Sulfur Polygammas Must Have 5 Base Pairs Each");

            Chlorine<Dysnomia.Quaternion> Epsilon = new Chlorine<Dysnomia.Quaternion>(Eta.Rho.T);
            Chlorine<Dysnomia.Quaternion> Gamma = new Chlorine<Dysnomia.Quaternion>(Nu.Rho.T);

            Calcium Theta = new Calcium(Epsilon);
            Calcium Alpha = new Calcium(Gamma);

            Mu = new Octonion(Aluminum.Phi.X, Theta);
            Tau = new Octonion(Aluminum.Phi.X, Alpha);

            Rho = new Spinor(Tau.L.Gamma, Eta.Rho);
        }
    }
}
