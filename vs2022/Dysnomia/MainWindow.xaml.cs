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
using WinRT;

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
            
            Buffers.ReadLicense("private.key", Math.LicenseKeys);
            Buffers.ReadLicense("public.key", Math.CacheKeys);
            */

            X = new Prion();
            Play();

            /*
            if (Math.LicenseKeys.Record)
                Buffers.WriteLicense("private.key", Math.LicenseKeys);

            if (Math.CacheKeys.Record)
                Buffers.WriteLicense("public.key", Math.CacheKeys);
            */

            int a = 999; // Girls Planet
        }

        public void Play()
        {
            Tungsten.Eta.Nu.Kernel.Inhibit(Niobium.Ypsilon.Y);
            Molybdenum.Rho.Kernel.Inhibit(X.Rho);
            Tungsten.Eta.Nu.Kernel.Aggregate(Tungsten.Eta.Nu.X);          
            Molybdenum.Rho.Kernel.Aggregate(Niobium.Ypsilon);
            Molybdenum.Rho.Kernel.Antagonize(Radon.Tau.X);

            Lead Pb = new Lead(Tungsten.Phi, Niobium.Nu);
        }
    }
}
