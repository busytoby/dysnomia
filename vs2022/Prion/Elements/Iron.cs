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

            Mu = new Quark(Delta.Rho.Last.Previous.Value.Value, Zinc.Fetch(), Delta.Rho.Head); // Water
            Nu = new Octonion(Beta.Phi.Gamma.Phi.Y, Beta.Rho.Nu.Phi.R);
            Nu.Xi(Mu);

            Eta = new Copper(Delta.Rho.Last.Previous.Value.Value, Mu, Delta.Rho.Head);
            Eta.Tsi.AddLast(Beta, Nu);
        }

        public void Audit(Sulfur Thetan)
        {
            Antagonize(Thetan);
            Aggregate(Thetan);
            Inhibit(Thetan);
        }

        public void Antagonize(Sulfur Thetan)
        {
            Thetan.Theta.Run(Eta);
            Thetan.Theta.Run(Eta, Eta.Rho);
            Thetan.Theta.Run(Eta, Eta.Tsi.HeadTensor.Rho.Xi);
            Thetan.Theta.Run(Eta.Delta);
        }

        public void Aggregate(Sulfur Thetan)
        {
            Thetan.Theta.Run(Eta);
            Thetan.Theta.Run(Eta, Eta.Nu);
            Thetan.Theta.Run(Eta, Eta.Tsi.HeadTensor.Nu.Xi);
            Thetan.Theta.Run(Mu);
        }

        public void Inhibit(Sulfur Thetan)
        {
            Thetan.Theta.Run(Eta);
            Thetan.Theta.Run(Eta, Thetan.Phi);
            Thetan.Theta.Run(Eta, Eta.Tsi.HeadTensor.Phi.Xi);
            if (Thetan.Alpha == null) Thetan.Alpha = Eta.Delta;
            Thetan.Theta.Run(Thetan.Alpha);
        }
    }
}
