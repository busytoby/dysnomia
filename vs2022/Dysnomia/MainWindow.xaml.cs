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
            X.Mu.W.N.Transit(W.N.Octogamma.List);
            Quark WQ = new Quark(X.Rho.Beta.Eta.X.R, Zinc.Fetch(), X.Mu.Kernel.Alpha.Rho.T.Last.Value.Value);
            X.Mu.Kernel.Eta.Add(X.Mu.Kernel.Alpha.Tau, WQ);
            Wavelet WQM = new Wavelet(W.N, W.L, X.Mu.Kernel.Alpha.Tau); // First Morlet Wavelet
            W.N.Transit(WQM.L.Octogamma.List);
            X.Mu.Kernel.Eta.Add(W.N, X.Mu.Kernel.Mu);
            X.Mu.Kernel.Eta.Add(W.L, X.Mu.Kernel.Mu);
            Titanium WMR = new Titanium(X.Rho.Eta.Mu, X.Mu.Kernel.Alpha);
            X.Mu.Kernel.Eta.Add(WMR.Xi, X.Mu.Kernel.Mu);
        }
    }
}
