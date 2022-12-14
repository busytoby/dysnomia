using Prion.Elements;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Star
    {
        static public Carbon Alpha;
        static public Boron Eta;
        static public Phosphorous Gamma;

        public Star()
        {
            if (Alpha == null) Alpha = new Carbon();
            if (Eta == null) Eta = new Boron();
            if (Gamma == null) Gamma = new Phosphorous();
        }

        static public Affinity GetAffinityByName(String Name)
        {
            return Star.Alpha[Phosphorous.Sigmas[Name]];
        }

        static public Dynamic GetRodByName(String Name)
        {
            return GetAffinityByName(Name).Rod;
        }

        static public Dynamic GetConeByName(String Name)
        {
            return GetAffinityByName(Name).Cone;
        }

        static public List<BigInteger> GetSigmasByName(String Name)
        {
            return Star.Eta[GetConeByName(Name)];         
        }

        static public Dysnomia.Quaternion GetQuaternionBySigma(BigInteger Sigma)
        {
            List<Quaternion> L = new List<Quaternion>();
            if (Beryllium.Phi.ContainsKey(Sigma))
                L.Add(Beryllium.Phi[Sigma]);
            if (Parallax.Kappa.Eta.ContainsKey(Sigma))
                L.Add(Parallax.Kappa.Eta[Sigma]);
            if (L.Count > 1) throw new Exception("More Than One Orbital Found");
            return L[0];
        }
        static public Dysnomia.Quaternion GetQuaternionByName(String Name)
        {
            BigInteger Sigma = Phosphorous.Sigmas[Name];
            return GetQuaternionBySigma(Sigma);
        }

        static public Orbital GetOrbitalByName(String Name)
        {
            List<Orbital> L = new List<Orbital>();
            foreach (BigInteger Sigma in GetSigmasByName(Name))
                if (Phosphorous.Xi.ContainsKey(Sigma))
                    L.Add(Phosphorous.Xi[Sigma]);
            if (L.Count > 1) throw new Exception("More Than One Orbital Found");
            return L[0];
        }
    }
}
