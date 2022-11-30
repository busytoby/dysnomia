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
        public MainWindow()
        {
            InitializeComponent();
            Prion X = new Prion();
            BigInteger H = Prion.Hippocamp.R.M.WaveFunction("Hello Singularity");
            BigInteger L = Prion.Neith.Y.M.WaveFunction("Hello Singularity");
            BigInteger V = Prion.Earth.L.M.WaveFunction("Hello Singularity");
            BigInteger HelloSingularity = H + V + L + 4;

            BigInteger E = Prion.Enceladus.Y.M.WaveFunction(HelloSingularity.ToString());
            BigInteger XX = Prion.Despina.R.M.WaveFunction(E.ToString());

            int a = 999; // What Planet
        }
    }
}
