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

        public Chromium(Sulfur Alpha) {
            W = new Wavelet();

            Alpha.Eta.Rho.Add(Star.GetQuaternionByName("Pluto"));
            W.L = new Spinor(Alpha.Beta.Eta.L.Gamma, Alpha.Nu.Rho);
            Alpha.Eta.Rho.Add(Star.GetQuaternionByName("Van Allen Belt"));
            Vanadium VY = new Vanadium(W.L);
            Iron Korteweg = Vanadium.Push();

            Alpha.Nu.Rho.Add(Star.GetQuaternionByName("Van Allen Belt"));
            W.N = new Spinor(Alpha.Beta.Nu.L.Rho, Alpha.Nu.Rho);
            Korteweg.Rho.Add(W.N);

            Korteweg.Rho.Add(Korteweg.Alpha.Tau, Korteweg.Mu); // Proof Of Earth

            Polygamma E = new Polygamma(Korteweg.Iota.Phi);
            E.Add(Tin.Sigma);
            W.R = new Spinor(Korteweg.Alpha.Rho.T.Last.Value.Value, E);
            Korteweg.Rho.Add(W.R); // Proof Of Law
        }   
    }
}
