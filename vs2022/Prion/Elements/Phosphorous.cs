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

        static public Hafnium Nu;

        public Phosphorous()
        {
            if (Locks != null || Xi != null || Sigmas != null || V != null || Nu != null) return;

            Locks = new Dictionary<BigInteger, Mutex>();
            Xi = new Neon();
            Sigmas = new Nitrogen();

            Nu = new Hafnium(new Orbital());

            Sigmas.RecordOrbital(Nu, "Neptune");
            Sigmas.RecordOrbital(Nu.F, "Sun");
            Sigmas.RecordOrbital(Nu.P, "Uranus");

            V = new Venus(Hafnium.Kappa.First.Value.Value.Rho.Rod, Hafnium.Kappa.First.Value.Value.Gamma);

            Hafnium.Saturn = new Tin();
            Phosphorous.GenerateOrbital(Tin.Sigma.Sigma, "Saturn Sigma"); // First Sigma Star Orbital
            Phosphorous.Sigmas.RecordQuaternion(Tin.Sigma, "Saturn");

            Pluto P = new Pluto();

            P.Mate(Hafnium.Kappa.Last.Value.Value, Star.GetOrbitalByName("Pluto Sigma")); // Dione

            Earth E = new Earth();
        }

        public Phosphorous(Affinity L)
        {
            Nu = new Hafnium(L);
        }

        public Phosphorous(Orbital L)
        {
            Nu = new Hafnium(L);
        }

        public Phosphorous(Dysnomia.Quaternion L)
        {
            Nu = new Hafnium(L);
        }

        static public Orbital GenerateOrbital(Affinity L, String Name)
        {
            Orbital P = new Orbital(L);
            Hafnium.Kappa.Add(P);
            Sigmas.RecordOrbital(P, Name);
            return P;
        }

        static public Tensor GenerateTensor(Quark M, String Name)
        {
            Tensor P = new Tensor(M, Hafnium.Kappa);
            //Parallax.Kappa.Add(P);
            Sigmas.RecordTensor(P, Name);
            return P;
        }

        public void Pair(Dysnomia.Quaternion S)
        {

        }
    }
}
