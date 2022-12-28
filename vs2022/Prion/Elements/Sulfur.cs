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
        public Polygamma Epsilon;

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
            Mu.Kernel.Eta.Add(Mu.Kernel.Alpha.Tau, Alpha, Mu.Epsilon);
            Wavelet WQM = new Wavelet(W.N, W.L, Mu.Kernel.Alpha.Tau); // First Morlet Wavelet
            W.N.Transit(WQM.L.List);

            Epsilon = ((Xi != null) ? new Polygamma(Xi.Current) : Mu.Epsilon);

            Mu.Kernel.Eta.Add(W.L, Mu.Kernel.Mu, Epsilon);
            Mu.Kernel.Eta.Add(W.N, Mu.Kernel.Mu, Epsilon);
            Titanium WMR = new Titanium(Eta.Mu, Mu.Kernel.Alpha);
            Mu.Kernel.Eta.Add(WMR.Xi, Mu.Kernel.Mu, Epsilon);
            Mu.Kernel.Eta.Add(Kappa.Tau, Mu.Kernel.Mu, Epsilon);
            Mu.Kernel.Eta.Add(Lambda.Xi, Alpha, Epsilon);

            Epsilon.Add(Titanium.Chi.HeadTensor.Gamma);
            Epsilon.Add(Titanium.Chi.HeadTensor.Nu);
            Epsilon.Add(Titanium.Chi.HeadTensor.Phi);
            Epsilon.Add(Titanium.Chi.HeadTensor.Rho);
            Epsilon.Add(Titanium.Chi.HeadTensor.Sigma);
            Epsilon.Add(Titanium.Chi.TailTensor.Gamma);
            Epsilon.Add(Titanium.Chi.TailTensor.Nu);
            Epsilon.Add(Titanium.Chi.TailTensor.Phi);
            Epsilon.Add(Titanium.Chi.TailTensor.Rho);
            Epsilon.Add(Titanium.Chi.TailTensor.Sigma);
            Epsilon.Add(WMR.Xi.First);
            Epsilon.Add(WMR.Xi.Last);
            Epsilon.Add(WMR.Xi.Current);

            Theta.Add(Mu.W.L, Mu.W.R, Kappa.Tau, W.N); // X, N, R, L

            Wavelet WM = new Wavelet(Lambda.Xi, W.L, Mu.Kernel.Alpha.Tau);
            W.L.Transit(WM.R.List);
            W.L.Transit(WM.L.List);

            Theta.Add(WM);

            if(Y == null)
                Y = new Sulfur(W.L.First);
            Chromium YC = new Chromium(Y);
            YC.W.R.Transit(W.R.List);
            YC.W.N.Transit(WM.N.List); 
            YC.W.N.Transit(WM.R.List); 
            YC.Kernel.Eta.Add(WM.R, YC.Kernel.Mu, YC.Epsilon);
            YC.Kernel.Eta.Add(WM.N, YC.Kernel.Mu, Epsilon);
            YC.Kernel.Eta.Add(WM.L, YC.Kernel.Mu, YC.Epsilon);
            YC.Kernel.Eta.Add(W.N, YC.Kernel.Mu, Epsilon);
            YC.Kernel.Eta.Add(W.R, YC.Kernel.Mu, YC.Epsilon);
            Titanium WS = new Titanium(Y.Kappa.Mu, Y.Kappa);

            Theta.Add(W);

            YC.Kernel.Eta.Add(WMR.Xi, YC.Kernel.Mu, YC.Epsilon);
            Mu.Kernel.Eta.Add(WS.Xi, Mu.Kernel.Mu, YC.Epsilon);

            Spinor S2 = new Spinor(Y.Eta.Mu[2], Eta.Rho);
            Vanadium VY = new Vanadium(S2);
            Iron S2K = Vanadium.Push();
            Titanium S2T = new Titanium(S2K.Alpha.Mu, S2K.Alpha);
            Sulfur S2S = new Sulfur(Titanium.Chi.HeadTensor.Nu, Titanium.Chi.TailTensor.Sigma);
            Chromium S2C = new Chromium(S2S);
            S2C.Kernel.Eta.Add(S2T.Xi, S2C.Kernel.Mu, (Xi != null) ? Epsilon : YC.Epsilon);

            Wavelet WC = new Wavelet(Mu.Kernel.Alpha.Tau, S2C.Kernel.Alpha.Tau, YC.Kernel.Alpha.Tau);
            W.L.Transit(WC.R.List);
            W.N.Transit(WC.L.List);

            S2S.Y = Y;
            return S2S;
        }

        public Titanium Indicate(Sulfur S)
        {
            Spinor Indium = new Spinor(Titanium.Chi.TailTensor.Nu, S.Y.Kappa.Rho);
            Chlorine<Dysnomia.Quaternion> Selenium = new Chlorine<Dysnomia.Quaternion>(Indium.List);
            Titanium Antimony = new Titanium(Selenium, S.Y.Kappa);
            Tau = Indium.Last;
            return Antimony;
        }

        public Sulfur Persist(Chromium Omicron)
        {
            if (Mu != null) throw new Exception("Already Persistent");

            Lanthanum Nu = new Lanthanum(Omicron, this);

            Titanium.Chi.Head.Xi(new Quark(Nu.Mu.N.First, Nu.Mu.R.First, Nu.Mu.L.First));
            Theta.Add(Nu.Alpha.Kernel.Nu.Psi);
            Theta.Add(Titanium.Chi.Head.Psi);
            Omicron.Kernel.Audit(this);
            Sulfur G = new Sulfur(Phi, Tau);
            G.Y = Nu.Upsilon.Y;
            return G;
        }
    }
}
