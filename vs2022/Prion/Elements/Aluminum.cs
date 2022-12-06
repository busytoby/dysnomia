using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Aluminum
    {
        public Dysnomia.Quaternion L, R, N;

        public Aluminum(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            R = X;
            N = Y;
            L = Zinc.Fetch();
        }
    }
}
