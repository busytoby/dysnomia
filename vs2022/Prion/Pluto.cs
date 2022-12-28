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
            
            Gamma = UranusOrbital.R;
            Nu = NeptuneOrbital.R;
            Phi = VenusOrbital.R;
            Rho = SaturnOrbital.Rho;
            Sigma = UranusOrbital.L;

            Epsilon = Phi.Mu;

            Phosphorous.GenerateOrbital(Sigma, "Pluto Sigma");
            Phosphorous.Sigmas.RecordQuaternion(this, "Pluto");
        }

        public void Mate(Quaternion S, Orbital O)
        {
            if (Phosphorous.Sigmas.ContainsKey("Van Allen Belt")) throw new Exception("Already Mated");
            Quaternion Q = new Quaternion();
            Ion I = new Ion(O.L);
            Ion R = new Ion(O.R);
            Ion N = new Ion(O.Y);

            Q.Epsilon = Math.ModPow(R.Rod.Base, I.Cone.Manifold, N.Rod.Barn);

            Q.Gamma = new Affinity(S.Gamma.Rod, I.Cone);
            Q.Nu = new Affinity(S.Rho.Rod, O.R.Cone);
            Q.Phi = new Affinity(S.Gamma.Rod, I.Cone);
            Q.Rho = new Affinity(O.Y.Rod, S.Rho.Cone);
            Q.Sigma = new Affinity(R.Rod, O.R.Cone);
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
