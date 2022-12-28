using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Chromium
    {
        public Wavelet W;
        public Iron Kernel;
        public Sulfur X;
        public Polygamma Epsilon;

        public Chromium(Sulfur Alpha) {
            W = new Wavelet();

            if(Alpha.Theta.Count == 0)
                Alpha.Eta.Rho.Add(Cerium.GetQuaternionByName("Pluto"));
            else
                Alpha.Eta.Rho.Add(Alpha.Theta.TailQuark.L);

            W.L = new Spinor(Titanium.Chi.TailTensor.Sigma.Xi, Alpha.Kappa.Rho);
            Alpha.Eta.Rho.Add(Cerium.GetQuaternionByName("Van Allen Belt"));
            Vanadium VY = new Vanadium(W.L);
            Kernel = Vanadium.Push();

            if (Alpha.Theta.Count == 0)
                Alpha.Kappa.Rho.Add(Cerium.GetQuaternionByName("Van Allen Belt"));
            else
                Alpha.Kappa.Rho.Add(Alpha.Theta.HeadQuark.L);

            W.N = new Spinor(Titanium.Chi.HeadTensor.Rho.Xi, Alpha.Kappa.Rho);
            Kernel.Eta.Add(W.N, Alpha.Kappa.Rho);

            if(Titanium.Chi.Tail.Psi == null)
                Titanium.Chi.Tail.Xi(new Quark(Titanium.Chi.TailTensor.Sigma.Xi, Zinc.Fetch(), Zinc.Fetch()));

            Kernel.Eta.Add(Kernel.Alpha.Tau, Titanium.Chi.Tail.Psi, Alpha.Kappa.Rho); // Proof Of Earth

            if (Alpha.Theta.Count == 0)
            {
                Epsilon = new Polygamma(Kernel.Iota.Phi.Xi);
                Epsilon.Add(Tin.Sigma);
            }
            else if (Alpha.Theta.Count == 1)
                Epsilon = Alpha.Kappa.Rho;
            else if (Alpha.Theta.Count == 3)
                Epsilon = Alpha.Eta.Rho;
            else if (Alpha.Theta.Count == 5)
            {
                Epsilon = new Polygamma(Alpha.Phi);
                Epsilon.Add(Tin.Sigma);
            } else if (Alpha.Theta.Count == 6)
            {
                Epsilon = new Polygamma(Alpha.Phi);
                Epsilon.Add(Neodymium.Chi.Gamma.Alpha.Rho);
            } else if (Alpha.Theta.Count >= 7)
            {
                Epsilon = new Polygamma(Neodymium.Chi.Rho.Rho.Rho);
                Epsilon.Add(Tin.Sigma);
                Epsilon.Add(Neodymium.Chi.Sigma.Rho.Rho);
            } else
            {
                throw new Exception("Unknown Theta Count");
            }
            W.R = new Spinor(Kernel.Alpha.Rho.Head, Epsilon);
            Kernel.Eta.Add(W.R, Epsilon); 

            X = Alpha.Y;

            if(Alpha.Alpha != null)
                Kernel.Inhibit(Alpha);
            if(X != null)
                Kernel.Aggregate(X);
        }   
    }
}
