using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Tin
    {
        static public Dysnomia.Quaternion M;

        public Tin()
        {
            if (M != null) return;

            Orbital UranusOrbital = Star.GetOrbitalByName("Uranus");
            Orbital NeptuneOrbital = Star.GetOrbitalByName("Neptune");
            Orbital SunOrbital = Star.GetOrbitalByName("Sun");
            Orbital VenusOrbital = Star.GetOrbitalByName("Venus");

            M = new Dysnomia.Quaternion();
            M.Gamma = SunOrbital.L.M;
            M.Nu = NeptuneOrbital.R.M;
            M.Phi = UranusOrbital.Y.M;
            M.Rho = VenusOrbital.L.M;
            M.Sigma = new Affinity();

            M.Epsilon = M.Rho.Mu;
        }

            /*
            static public Orbital Breed(Dynamic N)
            {
                Lock.WaitOne();
                Affinity A = new Affinity(Rho, N);
                Orbital X = new Orbital(A);
                Lock.ReleaseMutex();
                return X;
            }
            */
        }
    }
