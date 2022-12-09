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
        public Dysnomia.Quaternion L, R;
        public Manganese Magnesia;
        public LinkedList<Aluminum> Xi;

        public Aluminum(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            if (Tin.Mu.Count == 4)
            {
                Spinor A = new Dysnomia.Spinor(Y, Parallax.Kappa);
                Phosphorous.Sigmas.RecordSpinor(A, "Io");
                N = Y;
            }

            if (!Phosphorous.Sigmas.ContainsKey("Io")) throw new Exception("No Moon Io Found");

            Xi = new LinkedList<Aluminum>();
            Magnesia = new Manganese();
            R = X; 
            L = Zinc.Fetch();

            Epsilon = L.Epsilon;

            // Pending Octonion
        }
    }
}
