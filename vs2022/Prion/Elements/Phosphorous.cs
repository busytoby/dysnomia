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

        static public Neon Xi;

        static private Star Sun;
        static private Venus V;

        public Dictionary<String, BigInteger> Sigma;

        public Phosphorous()
        {
            if (Locks == null) Locks = new Dictionary<BigInteger, Mutex>();
            if (Xi == null) Xi = new Neon();
            Sigma = new Dictionary<String, BigInteger>();

            Sun = new Star();
            RecordOrbital(Sun.R, "Sun");
            RecordOrbital(Sun.U, "Uranus");
            RecordOrbital(Sun.N, "Neptune");

            V = new Venus(Sun.U.Y.M.Rod, Sun.K.T.First.Value.Value.Gamma);
            int i = 998;
        }

        private void RecordOrbital(Orbital V, String Name)
        {
            Xi.Add(V.Sigma, V);
            Locks.Add(V.Sigma, new Mutex());
            Sigma.Add(Name, V.Sigma);
        }
    }
}
