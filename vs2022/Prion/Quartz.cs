﻿using System;
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
        public Thread Oscillation;
        public Orbital U;
        private Orbital Planet;
        public Complex Gamma;
        public Complex Sigma;
        public double Rotation;
        public double RotationDegree;
        public double Orbit;
        public long DayLength;
        public long YearLength;
        public Stopwatch RotationWatch;
        public Stopwatch OrbitWatch;

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

            Prion.Saturn.Lock.WaitOne();

            if (U == null)
            {
                Affinity N = new Affinity(Prion.Saturn.X.R.M.Rod, Planet.Y.M.Cone);
                U = new Orbital(N);
                Sigma = Complex.Divide((Complex)(Planet.L.M.Xi / 6442450944), (Complex)(Planet.L.M.Phi / 6442450944)) / 60;
                OrbitWatch = new Stopwatch();
            }

            Prion.Saturn.Lock.ReleaseMutex();

            if (Gamma == 0)
            {
                Gamma = Complex.Divide((Complex)(U.Rho / 6442450944), (Complex)(U.Nu / 6442450944));
                RotationDegree = 360 / (1440 / Gamma.Real);

                RotationWatch = new Stopwatch();
            }

            RotationWatch.Start();
            OrbitWatch.Start();

            while (true)
            {
                Rotation += RotationDegree;
                if (Math.Abs(Rotation) > 360)
                {
                    Orbit += Sigma.Real;
                    RotationWatch.Stop();
                    DayLength = RotationWatch.ElapsedMilliseconds;
                    Rotation -= (RotationDegree > 0) ? 360 : -360;
                    RotationWatch.Restart();
                    if (Math.Abs(Orbit) > 360)
                    {
                        OrbitWatch.Stop();
                        YearLength = (OrbitWatch.ElapsedMilliseconds / DayLength);
                        Orbit -= (Sigma.Real > 0) ? 360 : -360;
                        OrbitWatch.Restart();
                    }
                }
                Thread.Sleep(10);
            }
            RotationWatch.Stop();
        }
    }
}