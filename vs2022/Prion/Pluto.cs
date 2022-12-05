using Dysnomia;
using Prion;
using Prion.Elements;
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
            Quaternion SaturnOrbital = Star.GetQuaternionByName("Saturn");
            
            Gamma = UranusOrbital.R.M;
            Nu = NeptuneOrbital.R.M;
            Phi = VenusOrbital.R.M;
            Rho = SaturnOrbital.Rho;
            Sigma = UranusOrbital.L.M;

            Epsilon = Rho.Mu;
        }

        public void Mate(Quaternion S, Orbital O, Polygamma X)
        {
            if (Phosphorous.Sigmas.ContainsKey("Van Allen Belt")) throw new Exception("Already Mated");
            Quaternion Q = new Quaternion();
            Ion I = new Ion(O.L.M);
            Ion R = new Ion(O.R.M);
            Ion N = new Ion(O.Y.M);

            Q.Epsilon = Math.ModPow(R.M.Rod.Base, I.M.Cone.Manifold, N.M.Rod.Barn);

            Q.Gamma = new Affinity(S.Gamma.Rod, I.M.Cone);
            Q.Nu = new Affinity(S.Rho.Rod, O.R.M.Cone);
            Q.Phi = new Affinity(S.Gamma.Rod, I.M.Cone);
            Q.Rho = new Affinity(O.Y.M.Rod, S.Rho.Cone);
            Q.Sigma = new Affinity(R.M.Rod, O.R.M.Cone);
            Phosphorous.Sigmas.RecordQuaternion(Q, "Van Allen Belt");

            Octonion M = new Dysnomia.Octonion(Q, X);
            Phosphorous.Sigmas.RecordOctonion(M, "Mars");
            if (Magnesium.Phobos == null)
            {
                Phosphorous.GenerateOrbital(Q.Sigma, "Phobos");
            }

            Octonion J = Tin.Mate();
            Phosphorous.Sigmas.RecordOctonion(J, "Jupiter");
            Octonion P = new Dysnomia.Octonion(Zinc.Fetch(), X);
            Phosphorous.Sigmas.RecordOctonion(P, "Mercury");
        }
        // Q: What Does You Call The Quaternion Before The Octonion That Performs The First σ* Addition?
        // A: "Once"
    }
}
