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

        public Chromium(Sulfur Alpha) {
            W = new Wavelet();

            Alpha.Eta.Rho.Add(Star.GetQuaternionByName("Pluto"));
            W.L = new Spinor(Alpha.Beta.Eta.L.Gamma, Alpha.Kappa.Rho);
            Alpha.Eta.Rho.Add(Star.GetQuaternionByName("Van Allen Belt"));
            Vanadium VY = new Vanadium(W.L);
            Kernel = Vanadium.Push();

            Alpha.Kappa.Rho.Add(Star.GetQuaternionByName("Van Allen Belt"));
            W.N = new Spinor(Alpha.Beta.Nu.L.Rho, Alpha.Kappa.Rho);
            Kernel.Eta.Add(W.N);

            Kernel.Eta.Add(Kernel.Alpha.Tau, Kernel.Mu); // Proof Of Earth

            Polygamma E = new Polygamma(Kernel.Iota.Phi);
            E.Add(Tin.Sigma);
            W.R = new Spinor(Kernel.Alpha.Rho.T.Last.Value.Value, E);
            Kernel.Eta.Add(W.R); // Proof Of Law

            X = Alpha.Y;
        }   
    }
}
