using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
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

        public Quaternion Mate(Quaternion S, Orbital O, Polygamma X)
        {
            Quaternion Q = new Quaternion();
            Ion I = new Ion(O.L.M);
            Ion R = new Ion(O.R.M);
            Ion N = new Ion(O.Y.M);
        
            Epsilon = Math.ModPow(S.Epsilon, R.M.Cone.Manifold, O.R.M.Rod.Barn);

            Q.Gamma = new Affinity(S.Gamma.Rod, I.M.Cone);
            Q.Nu = new Affinity(S.Rho.Rod, O.R.M.Cone);
            Q.Phi = new Affinity(S.Gamma.Rod, I.M.Cone);
            Q.Rho = new Affinity(O.Y.M.Rod, S.Rho.Cone);
            Q.Sigma = new Affinity(R.M.Rod, O.R.M.Cone);

            Octonion M = new Dysnomia.Octonion(Q, X);
            M.Transit();

            return Q;
        }
    }
}
