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
        static public Dictionary<BigInteger, Mutex> Locks;
      
        static public Neon Xi;
        static public Nitrogen Sigmas;

        static private Venus V;

        public Parallax Nu;

        public Phosphorous()
        {
            if (Locks != null || Xi != null || V != null) throw new Exception("Phosphorous Already Initialized");

            Locks = new Dictionary<BigInteger, Mutex>();
            Xi = new Neon();
            Sigmas = new Nitrogen();

            Nu = new Parallax(new Orbital());
        }

        public Phosphorous(Affinity L)
        {
            Nu = new Parallax(L);
        }

        public Phosphorous(Dysnomia.Quaternion L)
        {
            Nu = new Parallax(L);
        }

        static public Orbital GenerateOrbital(Affinity L, String Name)
        {
            Orbital P = new Orbital(L);
            Parallax.Kappa.Add(P);
            Sigmas.RecordOrbital(P, Name);
            return P;
        }

        public void Pair(Dysnomia.Quaternion S)
        {

        }
    }
}
