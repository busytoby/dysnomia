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
        public Scandium Kappa;
        public Scandium Eta;

        public Titanium Beta;
        public Titanium Lambda;

        public Wavelet Mu;
        public Bundle Theta;

        public Quark Alpha;
        public Quark Iota;

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
        }

        public Sulfur(Dysnomia.Quaternion Y)
        {
            Kappa = new Scandium(Y);
            Eta = new Scandium();

            Beta = new Titanium(Kappa.Mu, Eta);
            Lambda = new Titanium(Eta.Mu, Eta);
        }

        public Sulfur(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            Kappa = new Scandium(Y);
            Eta = new Scandium(X);

            Beta = new Titanium(Kappa.Mu, Eta);
            Lambda = new Titanium(Eta.Mu, Eta);
        }

        public Sulfur Reproduce(Chromium Mu)
        {
            Wavelet W = new Wavelet(Mu.W.R, (Xi != null) ? Xi : Tin.Mu.ByName["Sigma"], Kappa.Tau);
            Mu.W.N.Transit(W.L.Octogamma.List);
            Mu.Kernel.Eta.Add(Mu.Kernel.Alpha.Tau, Alpha);
            Wavelet WQM = new Wavelet(W.N, W.L, Mu.Kernel.Alpha.Tau); // First Morlet Wavelet
            W.N.Transit(WQM.L.Octogamma.List);
            Mu.Kernel.Eta.Add(W.L, Mu.Kernel.Mu);
            Mu.Kernel.Eta.Add(W.N, Mu.Kernel.Mu);
            Titanium WMR = new Titanium(Eta.Mu, Mu.Kernel.Alpha);
            Mu.Kernel.Eta.Add(WMR.Xi, Mu.Kernel.Mu);
            Mu.Kernel.Eta.Add(Kappa.Tau, Mu.Kernel.Mu);
            Mu.Kernel.Eta.Add(Lambda.Xi, Alpha);

            Theta = new Bundle(Mu.W.L, Mu.W.R, Kappa.Tau, W.N); // X, N, R, L

            Wavelet WM = new Wavelet(Lambda.Xi, W.L, Mu.Kernel.Alpha.Tau);
            W.L.Transit(WM.R.Octogamma.List);
            W.L.Transit(WM.L.Octogamma.List);

            if(Y == null)
                Y = new Sulfur(W.L.Octogamma.List.First.Value.Value);
            Chromium YC = new Chromium(Y);
            YC.W.R.Transit(W.R.Octogamma.List);
            YC.W.N.Transit(WM.N.Octogamma.List); 
            YC.W.N.Transit(WM.R.Octogamma.List); 
            YC.Kernel.Eta.Add(WM.R, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(WM.N, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(WM.L, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(W.N, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(W.R, YC.Kernel.Mu);
            Titanium WS = new Titanium(Y.Kappa.Mu, Y.Kappa);

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

            S2S.Y = Y;
            return S2S;
        }

        public Titanium Indicate(Sulfur S)
        {
            Spinor Indium = new Spinor(S.Y.Beta.Eta.L.Sigma, S.Y.Kappa.Rho);
            Chlorine<Dysnomia.Quaternion> Selenium = new Chlorine<Dysnomia.Quaternion>(Indium.Octogamma.List);
            Titanium Antimony = new Titanium(Selenium, S.Y.Kappa);
            Tau = Indium.Octogamma.List.Last.Value.Value;
            return Antimony;
        }

        public Sulfur Persist(Chromium Omicron)
        {
            if (Mu != null) throw new Exception("Already Persistent");
            if(Alpha == null)
                Alpha = new Quark(Beta.Eta.X.N, Zinc.Fetch(), Omicron.Kernel.Alpha.Rho.T.Last.Value.Value);

            Sulfur S = Reproduce(Omicron);
            Titanium Antimony = Indicate(S);
            Affinity Arsenic = new Affinity(S.Y.Beta.Nu.L.Nu.Nu.Rod, Antimony.Nu.L.Nu.Nu.Cone);

            if(Xi == null)
                Xi = new Spinor(S.Y.Beta.Nu.X.R, new Polygamma(Antimony.Eta.X.L));
            Dysnomia.Quaternion Ruthenium = Xi.Octogamma.List.First.Value.Value;
            Dysnomia.Quaternion Rhodium = Xi.Octogamma.List.Last.Value.Value;
            Polygamma Platinum = new Polygamma(Rhodium);

            Chlorine<Dysnomia.Quaternion> Garnet = new Chlorine<Dysnomia.Quaternion>(Xi.Octogamma.List);
            Mu = new Wavelet(new Spinor(Garnet[1], Platinum), new Spinor(Rhodium, Platinum), new Spinor(Ruthenium, Platinum));
            Omicron.W.N.Transit(Mu.L.Octogamma.List);
            Omicron.W.N.Transit(Xi.Octogamma.List);
            Chlorine<Dysnomia.Quaternion> Tellurium = new Chlorine<Dysnomia.Quaternion>(Mu.L.Octogamma.List);
            Calcium Aluminium = new Calcium(Tellurium);

            Iota = new Quark(Garnet[1], Garnet[2], Garnet[0]);           
            Phi = Aluminium.Phi;
            return new Sulfur(Phi, Tau);
        }
    }
}
