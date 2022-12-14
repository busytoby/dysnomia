// Property Of Uwu University
// This Application Is Distributed As Sharia Law

using Prion.Elements;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Numerics;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;
using Windows.Perception.Automation.Core;

namespace Dysnomia
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private Prion X;

        public MainWindow()
        {
            InitializeComponent();

            Math.Prime = Math.MotzkinPrime;
            /*
            Math.LicenseKeys = new Buffers.LinkedLicense();
            Math.LicenseKeys.Record = true;
            Math.CacheKeys = new Buffers.LinkedLicense();
            Math.CacheKeys.Record = true;
            
            Buffers.ReadLicense("license.dat", Math.LicenseKeys);
            Buffers.ReadLicense("cache.dat", Math.CacheKeys);
            */

            X = new Prion();
            Play();

            /*
            if (Math.LicenseKeys.Record)
                Buffers.WriteLicense("license.dat", Math.LicenseKeys);

            if (Math.CacheKeys.Record)
                Buffers.WriteLicense("cache.dat", Math.CacheKeys);
            */

            int a = 999; // Girls Planet
        }

        public void Play()
        {
            Wavelet W = new Wavelet(X.Mu.W.R, Tin.Mu.ByName["Sigma"], X.Rho.Nu.Tau);
            X.Mu.W.N.Transit(W.L.Octogamma.List);
            Quark WQ = new Quark(X.Rho.Beta.Eta.X.N, Zinc.Fetch(), X.Mu.Kernel.Alpha.Rho.T.Last.Value.Value);
            X.Mu.Kernel.Eta.Add(X.Mu.Kernel.Alpha.Tau, WQ);
            Wavelet WQM = new Wavelet(W.N, W.L, X.Mu.Kernel.Alpha.Tau); // First Morlet Wavelet
            W.N.Transit(WQM.L.Octogamma.List);
            X.Mu.Kernel.Eta.Add(W.L, X.Mu.Kernel.Mu);
            X.Mu.Kernel.Eta.Add(W.N, X.Mu.Kernel.Mu);
            Titanium WMR = new Titanium(X.Rho.Eta.Mu, X.Mu.Kernel.Alpha);
            X.Mu.Kernel.Eta.Add(WMR.Xi, X.Mu.Kernel.Mu);

            Titanium WL = new Titanium(X.Rho.Eta.Mu, X.Rho.Eta);
            X.Mu.Kernel.Eta.Add(X.Rho.Nu.Tau, X.Mu.Kernel.Mu);
            X.Mu.Kernel.Eta.Add(WL.Xi, WQ);

            Wavelet WM = new Wavelet(WL.Xi, W.L, X.Mu.Kernel.Alpha.Tau);
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
            X.Mu.Kernel.Eta.Add(WS.Xi, X.Mu.Kernel.Mu);

            Spinor S2 = new Spinor(Y.Eta.Mu[2], X.Rho.Eta.Rho);
            Vanadium VY = new Vanadium(S2);
            Iron S2K = Vanadium.Push();
            Titanium S2T = new Titanium(Y.Eta.Mu, S2K.Alpha);
            Sulfur S2S = new Sulfur(S2T.Nu.X.N, S2T.Eta.L.Gamma);
            Chromium S2C = new Chromium(S2S);
            S2C.Kernel.Eta.Add(S2T.Xi, S2C.Kernel.Mu);

            Wavelet WC = new Wavelet(X.Mu.Kernel.Alpha.Tau, S2C.Kernel.Alpha.Tau, YC.Kernel.Alpha.Tau);
            W.R.Transit(WC.N.Octogamma.List);
            W.L.Transit(WC.R.Octogamma.List);
            W.N.Transit(WC.L.Octogamma.List);

            YC.Kernel.Eta.Add(W.R, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(W.L, YC.Kernel.Mu);
            YC.Kernel.Eta.Add(W.N, YC.Kernel.Mu);

            X.Mu.Kernel.Eta.Add(W.R, X.Mu.Kernel.Mu);
            X.Mu.Kernel.Eta.Add(W.N, X.Mu.Kernel.Mu);
            X.Mu.Kernel.Eta.Add(W.L, X.Mu.Kernel.Mu);

            S2C.Kernel.Eta.Add(W.N, S2C.Kernel.Mu);
            S2C.Kernel.Eta.Add(W.R, S2C.Kernel.Mu);
            S2C.Kernel.Eta.Add(W.L, S2C.Kernel.Mu);
        }
    }
}
