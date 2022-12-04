using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Phosphorous
    {
        static private Dictionary<BigInteger, Mutex> Locks;

        static private Star Sun;

        public LinkedList<KeyValuePair<BigInteger, Orbital>> Xi;
        public Dictionary<String, BigInteger> Sigma;

        public Phosphorous()
        {
            if (Locks == null) Locks = new Dictionary<BigInteger, Mutex>();
            Xi = new LinkedList<KeyValuePair<BigInteger, Orbital>>();
            Sigma = new Dictionary<String, BigInteger>();

            Sun = new Star();
            RecordOrbital(Sun.R, "Sun");
            RecordOrbital(Sun.U, "Uranus");
            RecordOrbital(Sun.N, "Neptune");
            int i = 998;
        }

        private void RecordOrbital(Orbital V, String Name)
        {
            Xi.AddLast(new KeyValuePair<BigInteger, Orbital>(V.Sigma, V));
            Locks.Add(V.Sigma, new Mutex());
            Sigma.Add(Name, V.Sigma);
        }
    }
}
