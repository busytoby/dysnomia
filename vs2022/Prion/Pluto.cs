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
            Orbital UranusOrbital = Star.GetOrbitalByName("Uranus");
            Orbital NeptuneOrbital = Star.GetOrbitalByName("Neptune");
            Orbital SunOrbital = Star.GetOrbitalByName("Sun");
            Orbital VenusOrbital = Star.GetOrbitalByName("Venus");
            Orbital SaturnOrbital = Star.GetOrbitalByName("Saturn");
            
            Gamma = UranusOrbital.R.M;
            Nu = NeptuneOrbital.R.M;
            Phi = VenusOrbital.R.M;
            Rho = SaturnOrbital.Y.M;
            Sigma = UranusOrbital.L.M;

            Epsilon = Rho.Mu;
        }
    }
}
