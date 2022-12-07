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

        public Aluminum(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            if (Tin.Mu.Count == 4)
            {
                Octonion A = new Dysnomia.Octonion(Y, Parallax.Kappa);
                Phosphorous.Sigmas.RecordOctonion(A, "Io");
                N = Y;
            }

            if (!Phosphorous.Sigmas.ContainsKey("Io")) throw new Exception("No Moon Io Found");

            Magnesia = new Manganese();
            R = X; 
            L = Zinc.Fetch();

            Epsilon = L.Epsilon;
        }
    }
}
