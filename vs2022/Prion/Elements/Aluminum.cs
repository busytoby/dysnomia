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
        public Dysnomia.Quaternion L, R, N;
        public Manganese Magnesia;

        public Aluminum(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            if (Tin.Mu.Count == 4)
            {
                Octonion A = new Dysnomia.Octonion(Y, Parallax.Kappa);
                Phosphorous.Sigmas.RecordOctonion(A, "Io");
            }

            if (!Phosphorous.Sigmas.ContainsKey("Io")) throw new Exception("No Moon Io Found");

            Magnesia = new Manganese();
            R = X; 
            N = Y; 
            L = Zinc.Fetch();

            Epsilon = L.Epsilon;
        }
    }
}
