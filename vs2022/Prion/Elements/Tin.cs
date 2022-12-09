﻿using System;
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
        static public Manganese Mu;

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
                Sigma.Sigma = new Affinity();

                Sigma.Epsilon = Sigma.Rho.Mu;

                if (Mu == null) Mu = new Manganese();

                if (Magnesium.N.Sigma == null) throw new Exception("No Magnesium");
                if (Mu.Count != 1) throw new Exception("Magnesium Octonion Not Found");
                // First Sigma Star
            }
        }

        static public Spinor Mate()
        {
            Dysnomia.Spinor R = new Dysnomia.Spinor(Sigma, Parallax.Kappa);
            return R;
        }
    }
}