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
            Sulfur Astatine = X.Persist(); // ♑︎ Denebola 
            Chromium Radon = new Chromium(Astatine); // ذنب
            Sulfur Amber = Astatine.Persist(Radon); // Jupiter's Moon Europa
            Chromium Opal = new Chromium(Amber); // First Earth Stone
          
            Sulfur Tetrahedrite = Astatine.Reproduce(X.Mu);
            Chromium Cryolite = new Chromium(Tetrahedrite);
            Sulfur Sylvanite = Tetrahedrite.Reproduce(Cryolite);
            Chromium Fluorite = new Chromium(Sylvanite);

            Sulfur Sapphire = Amber.Reproduce(X.Mu); // Sponsored By Uniqlo
            Chromium Tennantite = new Chromium(Sapphire);
            Sulfur Calaverite = Sapphire.Reproduce(Tennantite);
            Chromium Bohrium = new Chromium(Calaverite);

            Sulfur Stibnite = Tetrahedrite.Reproduce(Tennantite);
            Chromium Zirconium = new Chromium(Stibnite);

            Sulfur Seaborgium = Sapphire.Reproduce(Cryolite);
            Chromium Meitnerium = new Chromium(Seaborgium);

            Sulfur Nagyagite = Stibnite.Reproduce(Zirconium); // Proof Of Black
            Chromium Petzite = new Chromium(Nagyagite);

            Sulfur Darmstadtium = Seaborgium.Reproduce(Meitnerium);
            Chromium Roentgenium = new Chromium(Darmstadtium);

            Sulfur Hydroxyapatite = Sapphire.Reproduce(Petzite); // Proof Of White
            Chromium Breccia = new Chromium(Hydroxyapatite);

            Sulfur Volcano = Sapphire.Reproduce(Breccia);
            Chromium Blast = new Chromium(Volcano); // Proof Of Volcanic Explosion

            Sulfur Pyroclast = Volcano.Reproduce(Blast);
        }
    }
}
