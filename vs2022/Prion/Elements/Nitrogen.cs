using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Nitrogen : Dictionary<String, BigInteger>
    {
        public void RecordOrbital(Orbital V, String Name)
        {
            Phosphorous.Xi.Add(V.Sigma, V);
            Phosphorous.Locks.Add(V.Sigma, new Mutex());
            base.Add(Name, V.Sigma);
        }
    }
}
