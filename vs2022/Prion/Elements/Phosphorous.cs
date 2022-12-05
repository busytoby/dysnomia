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
        static public Lithium Phi;
        static public Dictionary<String, BigInteger> Sigmas;

        static private Venus V;

        public Parallax Nu;

        public Phosphorous()
        {
            if (Locks != null || Xi != null || V != null) throw new Exception("Phosphorous Already Initialized");

            Locks = new Dictionary<BigInteger, Mutex>();
            Xi = new Neon();
            Phi = new Lithium();
            Sigmas = new Dictionary<String, BigInteger>();

            Nu = new Parallax(new Orbital());
        }

        public Phosphorous(Affinity L)
        {
            Nu = new Parallax(L);
        }

        public Orbital Generate(Affinity L, String Name)
        {
            Orbital P = new Orbital(L);
            Nu.K.Add(P);
            RecordOrbital(P, Name);
            return P;
        }

        public void Pair(Dysnomia.Quaternion S)
        {

        }

        public void RecordOrbital(Orbital V, String Name)
        {
            Xi.Add(V.Sigma, V);
            Locks.Add(V.Sigma, new Mutex());
            Sigmas.Add(Name, V.Sigma);
        }
    }
}
