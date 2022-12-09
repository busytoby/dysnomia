using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Aluminum
    {
        static public Octonion Phi;
        static public Dysnomia.Quaternion Xi;

        public Aluminum(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            if (Phi != null) throw new Exception("Aluminum Already Exists");

            if (Tin.Mu.Count == 2)
            {
                Spinor A = new Dysnomia.Spinor(Y, Parallax.Kappa);
                Phosphorous.Sigmas.RecordSpinor(A, "Io");
                Xi = Y;
            }

            if (!Phosphorous.Sigmas.ContainsKey("Io")) throw new Exception("No Moon Io Found");

            Phi = new Octonion();
            Phi.Y = new Quark(X, Y, Xi);
            Phosphorous.Sigmas.RecordQuark(Phi.Y, "Thebe");

            Phi.H = new Tensor(new Polygamma(Phi.Y.N), new Polygamma(Xi), new Polygamma(Zinc.Fetch()), new Polygamma(Phi.Y.L), new Polygamma(Phi.Y.R));
            Phosphorous.Sigmas.RecordTensor(Phi.H, "Ganymede");

            Phi.Epsilon = Phi.Y.L.Epsilon;
        }
    }
}
