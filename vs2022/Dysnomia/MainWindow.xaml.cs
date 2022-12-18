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
            Molybdenum Opal = new Molybdenum(); // First Earth Stone

            Opal.Contrast(); // // Breather, Gametophyte, Using Amber.Theta Sporophyte, then Bryophyta
            Opal.Kappa.Propagate(Opal.Theta);
            Opal.Contrast();
            Opal.Rho.Kernel.Inhibit(X.Rho);
            Opal.Rho.Kernel.Aggregate(Niobium.Ypsilon);
            Opal.Rho.Kernel.Antagonize(Radon.Tau.X);
        }
    }
}
