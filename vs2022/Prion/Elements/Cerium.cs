﻿using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Cerium : Spin<Lead>
    {
        public Hafnium Psi;
        public Hafnium Mu;

        static public Quark Zeta;
        static public Vanadium Eta;
        public Soliton Pi;
        public Spinor Delta;

        static public Carbon Alpha;
        static public Boron Tau;
        static public Phosphorous Chi;

        public Cerium()
        {
            if (Alpha == null) Alpha = new Carbon();
            if (Tau == null) Tau = new Boron();
            if (Chi == null) Chi = new Phosphorous();
        }

        static public Affinity GetAffinityByName(string Name)
        {
            return Alpha[Phosphorous.Sigmas[Name]];
        }

        static public Dynamic GetRodByName(string Name)
        {
            return GetAffinityByName(Name).Rod;
        }

        static public Dynamic GetConeByName(string Name)
        {
            return GetAffinityByName(Name).Cone;
        }

        static public List<BigInteger> GetSigmasByName(string Name)
        {
            return Tau[GetConeByName(Name)];
        }

        static public Dysnomia.Quaternion GetQuaternionBySigma(BigInteger Sigma)
        {
            List<Dysnomia.Quaternion> L = new List<Dysnomia.Quaternion>();
            if (Beryllium.Phi.ContainsKey(Sigma))
                L.Add(Beryllium.Phi[Sigma]);
            if (Hafnium.Kappa.Eta.ContainsKey(Sigma))
                L.Add(Hafnium.Kappa.Eta[Sigma]);
            if (L.Count > 1) throw new Exception("More Than One Orbital Found");
            return L[0];
        }
        static public Dysnomia.Quaternion GetQuaternionByName(string Name)
        {
            BigInteger Sigma = Phosphorous.Sigmas[Name];
            return GetQuaternionBySigma(Sigma);
        }

        static public Orbital GetOrbitalByName(string Name)
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
