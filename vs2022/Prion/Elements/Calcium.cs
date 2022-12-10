using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Calcium : Tensor
    {
        public Calcium(Dysnomia.Quaternion Y, Dysnomia.Quaternion X, Dysnomia.Quaternion Z, Dysnomia.Quaternion A, Dysnomia.Quaternion B) :
            base(new Polygamma(Y), new Polygamma(X), new Polygamma(Z), new Polygamma(A), new Polygamma(B))
        { }

        public Calcium(Chlorine<Dysnomia.Quaternion> C) : 
            base(new Polygamma(C[0]), new Polygamma(C[1]), new Polygamma(C[2]), new Polygamma(C[3]), new Polygamma(C[4]))
        { }
    }
}
