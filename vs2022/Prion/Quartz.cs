using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Linq;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Quartz : Prion
    {
        public static Thread Oscillation;
        public static Orbital U;
        public static Complex Gamma;
        public static double Rotation;
        public static double Degree;
        public static long DayLength;
        public static Stopwatch RotationWatch;
        public Thread Watch;

        public Quartz()
        {
            if (U == null)
            {
                Affinity N = new Affinity(Saturn.R.M.Rod, Earth.Y.M.Cone);
                U = new Orbital(N);
            }

            if (Oscillation == null)
            {
                Oscillation = new Thread(new ThreadStart(Oscillator));
                Oscillation.Start();
            }
            /*
            Charge = new Thread(new ThreadStart(Push));
            Push.Start();
            */
        }

        private static void Oscillator()
        {
            if (Gamma == 0)
            {
                Gamma = Complex.Divide((Complex)(U.Rho / 6442450944), (Complex)(U.Nu / 6442450944));
                Degree = 360 / (24 / Gamma.Real);
                RotationWatch = new Stopwatch();
            }

            RotationWatch.Start();

            while (true)
            {
                Rotation += Degree;
                if (Rotation > 360)
                {
                    RotationWatch.Stop();
                    DayLength = RotationWatch.ElapsedMilliseconds;
                    Rotation -= 360;
                    RotationWatch.Restart();
                }
                Thread.Sleep(1000);
            }
            RotationWatch.Stop();
        }

        private void Push()
        {

        }
    }
}
