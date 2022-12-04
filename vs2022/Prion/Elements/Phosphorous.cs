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

        public Parallax Nu;
        public Dictionary<String, BigInteger> Sigma;

        public Phosphorous()
        {
            if (Sun == null) Sun = new Star();
            if (Locks == null) Locks = new Dictionary<BigInteger, Mutex>();
            if (Xi == null) Xi = new Neon();
            Sigma = new Dictionary<String, BigInteger>();

            Nu = new Parallax(new Orbital());

            V = new Venus(Nu.K.T.First.Value.Value.Rho.Rod, Nu.K.T.First.Value.Value.Gamma);
            int i = 998;
        }

        public void RecordOrbital(Orbital V, String Name)
        {
            Xi.Add(V.Sigma, V);
            Locks.Add(V.Sigma, new Mutex());
            Sigma.Add(Name, V.Sigma);
        }
    }
}
