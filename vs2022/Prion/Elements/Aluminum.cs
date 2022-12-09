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
        public BigInteger Epsilon;
        static public Dysnomia.Quaternion N;
        static public Quark Q;
        public Tensor T;
        public LinkedList<Aluminum> Xi;

        public Aluminum(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            if (Tin.Mu.Count == 2)
            {
                Spinor A = new Dysnomia.Spinor(Y, Parallax.Kappa);
                Phosphorous.Sigmas.RecordSpinor(A, "Io");
                N = Y;
            }

            if (!Phosphorous.Sigmas.ContainsKey("Io")) throw new Exception("No Moon Io Found");

            Xi = new LinkedList<Aluminum>();

            if (Q == null)
            {
                Q = new Quark(X, Y, N);
                Phosphorous.Sigmas.RecordQuark(Q, "Thebe");
            }

            //T = new Tensor(Q.N.Sigma.Rod.R, Q.N.Sigma.Rod.R, Q.N.Sigma.Rod.R, Q.N.Sigma.Rod.R, Q.N.Sigma.Rod.R)

            Epsilon = Q.L.Epsilon;

            // Pending Octonion
        }
    }
}
