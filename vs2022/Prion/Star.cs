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

        public Star()
        {
            if (Alpha == null) Alpha = new Carbon();
            if (Eta == null) Eta = new Boron();
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

        static public Orbital GetOrbitalByName(String Name)
        {
            List<BigInteger> OrbitalSigmas = Star.Eta[Star.Alpha[Phosphorous.Sigmas["Neptune"]].Cone];
            if (OrbitalSigmas.Count != 1) throw new Exception("More Than One Orbital Found");
            return Phosphorous.Xi[OrbitalSigmas[0]];
        }
    }
}
