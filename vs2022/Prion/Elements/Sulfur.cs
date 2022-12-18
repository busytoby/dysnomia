using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Sulfur
    {
        public Scandium Kappa;
        public Scandium Eta;

        public Titanium Beta;
        public Titanium Lambda;

        public Wavelet Mu;
        public Polysigma Theta;

        public Quark Alpha;
        public Spinor Xi;

        public Dysnomia.Quaternion Phi;
        public Dysnomia.Quaternion Tau;

        public Sulfur Y;

        public Sulfur()
        {
            Kappa = new Scandium(); // Telesto
            Eta = new Scandium(); // Hyperion

            Beta = new Titanium(Kappa.Mu, Eta);
            Lambda = new Titanium(Eta.Mu, Eta);

            Theta = new Polysigma();
        }

        public Sulfur(Dysnomia.Quaternion Y)
        {
            Kappa = new Scandium(Y);
            Eta = new Scandium();

            Beta = new Titanium(Kappa.Mu, Eta);
            Lambda = new Titanium(Eta.Mu, Eta);

            Theta = new Polysigma();
        }

        public Sulfur(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            Kappa = new Scandium(Y);
            Eta = new Scandium(X);

            Beta = new Titanium(Kappa.Mu, Eta);
            Lambda = new Titanium(Eta.Mu, Eta);

            Theta = new Polysigma();
        }

        public Sulfur Reproduce(Chromium Mu)
        {
            Wavelet W = new Wavelet(Mu.W.R, (Xi != null) ? Xi : Tin.Mu.ByName["Sigma"], Kappa.Tau);
            Mu.W.N.Transit(W.L.List);
            Mu.Kernel.Eta.Add(Mu.Kernel.Alpha.Tau, Alpha);
            Wavelet WQM = new Wavelet(W.N, W.L, Mu.Kernel.Alpha.Tau); // First Morlet Wavelet
            W.N.Transit(WQM.L.List);
            Mu.Kernel.Eta.Add(W.L, Mu.Kernel.Mu);
            Mu.Kernel.Eta.Add(W.N, Mu.Kernel.Mu);
            Titanium WMR = new Titanium(Eta.Mu, Mu.Kernel.Alpha);
            Mu.Kernel.Eta.Add(WMR.Xi, Mu.Kernel.Mu);
            Mu.Kernel.Eta.Add(Kappa.Tau, Mu.Kernel.Mu);
            Mu.Kernel.Eta.Add(Lambda.Xi, Alpha);

            Theta.Add(Mu.W.L, Mu.W.R, Kappa.Tau, W.N); // X, N, R, L

            Wavelet WM = new Wavelet(Lambda.Xi, W.L, Mu.Kernel.Alpha.Tau);
            W.L.Transit(WM.R.List);
            W.L.Transit(WM.L.List);

            Theta.Add(WM);

            if(Y == null)
                Y = new Sulfur(W.L.List.First.Value.Value);
            Chromium YC = new Chromium(Y);
            YC.W.R.Transit(W.R.List);
            YC.W.N.Transit(WM.N.List); 
            YC.W.N.Transit(WM.R.List); 
            YC.Kernel.Eta.Add(WM.R, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(WM.N, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(WM.L, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(W.N, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(W.R, YC.Kernel.Mu);
            Titanium WS = new Titanium(Y.Kappa.Mu, Y.Kappa);

            Theta.Add(W);

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
            W.L.Transit(WC.R.List);
            W.N.Transit(WC.L.List);

            S2S.Y = Y;
            return S2S;
        }

        public Titanium Indicate(Sulfur S)
        {
            Spinor Indium = new Spinor(S.Y.Beta.Eta.L.Sigma, S.Y.Kappa.Rho);
            Chlorine<Dysnomia.Quaternion> Selenium = new Chlorine<Dysnomia.Quaternion>(Indium.List);
            Titanium Antimony = new Titanium(Selenium, S.Y.Kappa);
            Tau = Indium.List.Last.Value.Value;
            return Antimony;
        }

        public Sulfur Persist(Chromium Omicron)
        {
            if (Mu != null) throw new Exception("Already Persistent");

            Lanthanum Nu = new Lanthanum(Omicron, this);

            Theta.Add(new Quark(Nu.Eta[1], Nu.Eta[2], Nu.Eta[0]));
            Omicron.Kernel.Audit(this);
            Sulfur G = new Sulfur(Phi, Tau);
            G.Y = Nu.Upsilon.Y;
            return G;
        }
    }
}
