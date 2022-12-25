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
            Orbital UranusOrbital = Cerium.GetOrbitalByName("Uranus");
            Orbital NeptuneOrbital = Cerium.GetOrbitalByName("Neptune");
            Orbital SunOrbital = Cerium.GetOrbitalByName("Sun");
            Orbital VenusOrbital = Cerium.GetOrbitalByName("Venus");
            Quaternion SaturnOrbital = Cerium.GetQuaternionByName("Saturn");
            
            Gamma = UranusOrbital.R.M;
            Nu = NeptuneOrbital.R.M;
            Phi = VenusOrbital.R.M;
            Rho = SaturnOrbital.Rho;
            Sigma = UranusOrbital.L.M;

            Epsilon = Phi.Mu;

            Phosphorous.GenerateOrbital(Sigma, "Pluto Sigma");
            Phosphorous.Sigmas.RecordQuaternion(this, "Pluto");
        }

        public void Mate(Quaternion S, Orbital O)
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

            Quark M = new Quark(Q, S, Zinc.Fetch());
            Phosphorous.Sigmas.RecordQuark(M, "Mars");

            if (Magnesium.Xi == null)
            {
                Magnesium.Xi = Phosphorous.GenerateTensor(M, "Phobos");
            }

            Spinor J = Tin.Mate();
            Phosphorous.Sigmas.RecordSpinor(J, "Jupiter");

            Aluminum Zero = new Aluminum(Hafnium.Kappa.Head, Zinc.Fetch());
        }
    }
}
