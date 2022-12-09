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

            Quark Thebe = new Quark(X, Y, Xi);
            Phi = new Octonion(Thebe,
                new Tensor(new Polygamma(Thebe.N), new Polygamma(Xi), new Polygamma(Zinc.Fetch()), new Polygamma(Thebe.L), new Polygamma(Thebe.R))
                );

            Phosphorous.Sigmas.RecordQuark(Thebe, "Thebe");
            Phosphorous.Sigmas.RecordTensor(Phi.L, "Ganymede");
        }
    }
}
