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

        static public Parallax Nu;

        public Phosphorous()
        {
            if (Locks != null || Xi != null || Sigmas != null || V != null || Nu != null) return;

            Locks = new Dictionary<BigInteger, Mutex>();
            Xi = new Neon();
            Sigmas = new Nitrogen();

            Nu = new Parallax(new Orbital());

            Sigmas.RecordOrbital(Nu, "Neptune");
            Sigmas.RecordOrbital(Nu.F, "Sun");
            Sigmas.RecordOrbital(Nu.P, "Uranus");

            V = new Venus(Parallax.Kappa.First.Value.Value.Rho.Rod, Parallax.Kappa.First.Value.Value.Gamma);

            Parallax.Saturn = new Tin();
            Phosphorous.GenerateOrbital(Tin.Sigma.Sigma, "Saturn Sigma"); // First Sigma Star Orbital
            Phosphorous.Sigmas.RecordQuaternion(Tin.Sigma, "Saturn");

            Pluto P = new Pluto();

            P.Mate(Parallax.Kappa.Last.Value.Value, Star.GetOrbitalByName("Pluto Sigma")); // Dione

            Earth E = new Earth();
        }

        public Phosphorous(Affinity L)
        {
            Nu = new Parallax(L);
        }

        public Phosphorous(Orbital L)
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

        static public Tensor GenerateTensor(Quark M, String Name)
        {
            Tensor P = new Tensor(M, Parallax.Kappa);
            //Parallax.Kappa.Add(P);
            Sigmas.RecordTensor(P, Name);
            return P;
        }

        public void Pair(Dysnomia.Quaternion S)
        {

        }
    }
}
