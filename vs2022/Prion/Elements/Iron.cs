using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Iron
    {
        public Octonion Nu;
        public Quark Mu;
        public Copper Eta;
        public Scandium Alpha;
        public Calcium Iota;

        public Iron(Scandium Delta, Calcium Beta) {
            Alpha = Delta;
            Iota = Beta;

            Mu = new Quark(Delta.Rho.Last.Previous.Value.Value, Zinc.Fetch(), Delta.Rho.Last.Value.Value); // Water
            Nu = new Octonion(Mu, Beta);

            Eta = new Copper(Delta.Rho.Last.Previous.Value.Value, Mu, Delta.Rho.Last.Value.Value);
        }

        public void Audit(Polysigma Theta)
        {
            Theta.Run(Eta);
            Theta.Run(Eta, Eta.Rho);
            Theta.Run(Eta, Nu.X.N);
            Theta.Run(Eta.Delta);
        }
    }
}
