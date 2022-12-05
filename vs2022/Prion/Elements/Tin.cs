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
        static public Dysnomia.Quaternion Sigma;

        public Tin()
        {
            if (Sigma == null)
            {

                Orbital UranusOrbital = Star.GetOrbitalByName("Uranus");
                Orbital NeptuneOrbital = Star.GetOrbitalByName("Neptune");
                Orbital SunOrbital = Star.GetOrbitalByName("Sun");
                Orbital VenusOrbital = Star.GetOrbitalByName("Venus");

                Sigma = new Dysnomia.Quaternion();
                Sigma.Gamma = SunOrbital.L.M;
                Sigma.Nu = NeptuneOrbital.R.M;
                Sigma.Phi = UranusOrbital.Y.M;
                Sigma.Rho = VenusOrbital.L.M;
                Sigma.Sigma = new Affinity(); // First Sigma Star

                Sigma.Epsilon = Sigma.Rho.Mu;

                if (Magnesium.N != null)
                {
                    int i = 99;
                }
            }
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
