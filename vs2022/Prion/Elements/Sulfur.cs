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

        public Titanium Beta;

        public Sulfur()
        {
            Nu = new Scandium(); // Telesto
            Eta = new Scandium(); // Hyperion

            Beta = new Titanium(Nu.Mu, Eta);
        }

        public Sulfur(Dysnomia.Quaternion Y)
        {
            Nu = new Scandium(Y);
            Eta = new Scandium();

            Beta = new Titanium(Nu.Mu, Eta);
        }

        public Sulfur(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            Nu = new Scandium(Y);
            Eta = new Scandium(X);

            Beta = new Titanium(Nu.Mu, Eta);
        }

        public Sulfur Reproduce(Chromium Mu)
        {
            Wavelet W = new Wavelet(Mu.W.R, Tin.Mu.ByName["Sigma"], Nu.Tau);
            Mu.W.N.Transit(W.L.Octogamma.List);
            Quark WQ = new Quark(Beta.Eta.X.N, Zinc.Fetch(), Mu.Kernel.Alpha.Rho.T.Last.Value.Value);
            Mu.Kernel.Eta.Add(Mu.Kernel.Alpha.Tau, WQ);
            Wavelet WQM = new Wavelet(W.N, W.L, Mu.Kernel.Alpha.Tau); // First Morlet Wavelet
            W.N.Transit(WQM.L.Octogamma.List);
            Mu.Kernel.Eta.Add(W.L, Mu.Kernel.Mu);
            Mu.Kernel.Eta.Add(W.N, Mu.Kernel.Mu);
            Titanium WMR = new Titanium(Eta.Mu, Mu.Kernel.Alpha);
            Mu.Kernel.Eta.Add(WMR.Xi, Mu.Kernel.Mu);

            Titanium WL = new Titanium(Eta.Mu, Eta);
            Mu.Kernel.Eta.Add(Nu.Tau, Mu.Kernel.Mu);
            Mu.Kernel.Eta.Add(WL.Xi, WQ);

            Wavelet WM = new Wavelet(WL.Xi, W.L, Mu.Kernel.Alpha.Tau);
            W.L.Transit(WM.R.Octogamma.List);
            W.L.Transit(WM.L.Octogamma.List);

            Sulfur Y = new Sulfur(W.L.Octogamma.List.First.Value.Value);
            Chromium YC = new Chromium(Y);
            YC.W.N.Transit(WM.N.Octogamma.List); // First Law Of Attraction
            YC.W.N.Transit(WM.R.Octogamma.List); // Last Blind
            YC.Kernel.Eta.Add(WM.R, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(WM.N, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(WM.L, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(W.N, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(W.R, YC.Kernel.Mu);
            Titanium WS = new Titanium(Y.Nu.Mu, Y.Nu);

            YC.Kernel.Eta.Add(WMR.Xi, YC.Kernel.Mu);
            Mu.Kernel.Eta.Add(WS.Xi, Mu.Kernel.Mu);

            Spinor S2 = new Spinor(Y.Eta.Mu[2], Eta.Rho);
            Vanadium VY = new Vanadium(S2);
            Iron S2K = Vanadium.Push();
            Titanium S2T = new Titanium(S2K.Alpha.Mu, S2K.Alpha);
            Sulfur S2S = new Sulfur(S2T.Eta.X.N, S2T.Nu.L.Sigma);
            Chromium S2C = new Chromium(S2S);
            S2C.Kernel.Eta.Add(S2T.Xi, S2C.Kernel.Mu);

            Wavelet WC = new Wavelet(Mu.Kernel.Alpha.Tau, S2C.Kernel.Alpha.Tau, YC.Kernel.Alpha.Tau);
            W.L.Transit(WC.R.Octogamma.List);
            W.N.Transit(WC.L.Octogamma.List);

            return S2S;
        }
    }
}
