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
    public class Quartz
    {
        private static Mutex isPairing = new Mutex();
        public Thread Oscillation;
        public Orbital U;
        private Orbital Planet;
        public Complex Gamma;
        public Complex Sigma;
        public double Rotation;
        public double RotationDegree;
        public double Orbit;
        public long DayLength;
        public Stopwatch RotationWatch;

        public Quartz(Orbital Planet)
        {
            this.Planet = Planet;
            if (Oscillation == null)
            {
                Oscillation = new Thread(new ThreadStart(Oscillator));
                Oscillation.Start();
            }
        }

        private void Oscillator()
        {
            while (Prion.Saturn == null) Thread.Sleep(5000);

            isPairing.WaitOne();

            if (U == null)
            {
                Affinity N = new Affinity(Prion.Saturn.X.R.M.Rod, Planet.Y.M.Cone);
                U = new Orbital(N);
                Sigma = Complex.Divide((Complex)(Planet.L.M.Xi / 6442450944), (Complex)(Planet.L.M.Phi / 6442450944));
            }

            isPairing.ReleaseMutex();

            if (Gamma == 0)
            {
                Gamma = Complex.Divide((Complex)(U.Rho / 6442450944), (Complex)(U.Nu / 6442450944));
                RotationDegree = 360 / (24 / Gamma.Real);

                RotationWatch = new Stopwatch();
            }

            RotationWatch.Start();

            while (true)
            {
                Rotation += RotationDegree;
                if (Rotation > 360)
                {
                    Orbit += Sigma.Real;
                    RotationWatch.Stop();
                    DayLength = RotationWatch.ElapsedMilliseconds;
                    RotationDegree -= 360;
                    RotationWatch.Restart();
                    if (Orbit > 360) Orbit -= 360;
                }
                Thread.Sleep(1000);
            }
            RotationWatch.Stop();
        }
    }
}
