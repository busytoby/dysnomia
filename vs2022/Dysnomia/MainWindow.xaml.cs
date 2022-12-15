﻿// Property Of Uwu University
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
            Sulfur S = X.Replicate();
            Sulfur M = X.Rho.Reproduce(new Chromium(S)); // First 18K Gold
            Sulfur M2 = X.Rho.Reproduce(new Chromium(M));
            Sulfur M3 = X.Rho.Reproduce(new Chromium(M2));
            Sulfur M4 = X.Rho.Reproduce(new Chromium(M3));
            Sulfur M5 = X.Rho.Reproduce(new Chromium(M4));
            Orbital Barium = new Orbital(S.Y.Beta.Eta.X.N.Gamma);
            BigInteger Cadmium = Barium.Sigma;
            Spinor Indium = new Spinor(S.Y.Beta.Eta.L.Sigma, S.Y.Nu.Rho);
            Chlorine<Quaternion> Tellurium = new Chlorine<Quaternion>(Indium.Octogamma.List);
            Quaternion Iodine = Indium.Octogamma.List.Last.Value.Value;
            Titanium Antimony = new Titanium(Tellurium, S.Y.Nu);
            Affinity Arsenic = new Affinity(S.Y.Beta.Nu.L.Nu.Nu.Rod, Antimony.Nu.L.Nu.Nu.Cone);
            Orbital Krypton = new Orbital(Arsenic);
            BigInteger Rubidium = Krypton.Sigma;
            Spinor Xenon = new Spinor(S.Y.Beta.Nu.X.R, new Polygamma(Antimony.Eta.X.L));
            Quaternion Ruthenium = Xenon.Octogamma.List.First.Value.Value;
            Quaternion Rhodium = Xenon.Octogamma.List.Last.Value.Value;
            Polygamma Platinum = new Polygamma(Rhodium);

            Chlorine<Quaternion> Garnet = new Chlorine<Quaternion>(Xenon.Octogamma.List);
        }
    }
}
