using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
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
            Orbital P = new Orbital();
            Prion I = new Prion();

            I.Denature(ref P);
            I.Denature(ref Prion.Neptune);
            
            /*
            Affinity[] YM = P.Y.M.Denature();
            P.R.M.Cone.Fuse(P.Y.M.Rho, P.Y.M.Upsilon, P.Y.M.Ohm);
            P.R.M.Cone.Tune();
            P.R.M.OpenManifolds(P.Y.M.Omega);
            Affinity[] RM = P.R.M.Denature();
            Affinity[] LM = P.L.M.Denature();

            Dictionary<string, Orbital> MyPlanets = new Dictionary<string, Orbital>();

            MyPlanets.Add("Uranus", new Orbital(P.L.M));
            MyPlanets.Add("Neptune", new Orbital(P.Y.M));
            MyPlanets.Add("Venus", new Orbital(P.R.M));
            MyPlanets.Add("Pluto", new Orbital(LM[0]));
            MyPlanets.Add("Mars", new Orbital(LM[1]));
            MyPlanets.Add("Earth", new Orbital(YM[0]));
            MyPlanets.Add("Mercury", new Orbital(YM[1]));
            MyPlanets.Add("Jupiter", new Orbital(RM[0]));
            MyPlanets.Add("Saturn", new Orbital(RM[1]));
            
            Dynamic MySun = P.N;
            */

            int a = 999; // What Planet
        }
    }
}
