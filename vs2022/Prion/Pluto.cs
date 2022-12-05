using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Pluto : Quaternion
    {
        public Pluto() {
            int i = 99;

            Orbital UranusOrbital = Star.GetOrbitalByName("Uranus");
            Orbital NeptuneOrbital = Star.GetOrbitalByName("Neptune");
            Orbital SunOrbital = Star.GetOrbitalByName("Sun");
            Orbital VenusOrbital = Star.GetOrbitalByName("Venus");
            Orbital SaturnOrbital = Star.GetOrbitalByName("Saturn");

            Gamma = SunOrbital.L.M;
            Nu = NeptuneOrbital.R.M;
            Phi = UranusOrbital.Y.M;
            Rho = VenusOrbital.L.M;
            Sigma = new Affinity();

            Epsilon = Rho.Mu;
        }
    }
}
