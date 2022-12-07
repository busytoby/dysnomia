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
        public LinkedList<Octonion> Magnesia;

        public Aluminum(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            Magnesia = new LinkedList<Octonion>();
            R = X; 
            N = Y; 
            L = Zinc.Fetch();

            Epsilon = L.Epsilon;
        }
    }
}
