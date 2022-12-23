using Dysnomia;
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

        static public Carbon Alpha;
        static public Boron Tau;
        static public Phosphorous Chi;

        public Cerium()
        {
            if (Alpha == null) Alpha = new Carbon();
            if (Tau == null) Tau = new Boron();
            if (Chi == null) Chi = new Phosphorous();
        }

        public Cerium(Octonion Lambda)
        {
            Psi = new Hafnium(Lambda.X.L);
            Mu = new Hafnium(Lambda.L.Phi);

            Gamma = new Lead(Mu, Rhenium.Psi);
            Nu = new Lead(Rhenium.Psi, Psi);
            Phi = new Lead(Rhenium.Mu, Psi);
            Rho = new Lead(Rhenium.Mu, Mu);
            Sigma = new Lead(Mu, Psi);

            Rhenium.Pi.Add(new Spinor(Gamma.Alpha.Rho, Tungsten.Rho.Nu.Epsilon), Hafnium.Kappa);
            Rhenium.Pi.Add(new Spinor(Gamma.Rho.Gamma, Tungsten.Eta.Nu.Epsilon), Tungsten.Rho.Nu.Epsilon);
            Rhenium.Pi.Add(Niobium.Ypsilon.Kappa.Tau, Tungsten.Rho.Nu.Epsilon);
            Rhenium.Pi.Add(Tungsten.Rho.Nu.W.N, Osmium.Zeta, Tungsten.Eta.Nu.Epsilon);

            Tungsten.Eta.Theta.Add(Rhenium.Pi.Mu, Rhenium.Pi.Qi.Phi.Rho, Rhenium.Pi.XL.Last.Value.Value, Rhenium.Pi.XL.First.Value.Value);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Nu.Rho.Rho);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Gamma.Rho.Nu);
            Tungsten.Eta.Theta.Add(Osmium.Zeta);
            Tungsten.Eta.Theta.Add(Osmium.Delta, Rhenium.Pi.XL.First.Value.Value, Rhenium.Pi.Qi.Phi.Gamma, Rhenium.Pi.Qi.Phi.Nu);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Phi.Alpha.Nu);
            Tungsten.Eta.Theta.Run(Rhenium.Pi, Sigma.Rho.Gamma);
            Tungsten.Eta.Theta.Add(Osmium.Zeta);

            Tungsten.Rho.Theta.Add(Rhenium.Pi.Mu, Rhenium.Pi.Qi.Phi.Gamma, Rhenium.Pi.XL.Last.Value.Value, Rhenium.Pi.XL.First.Value.Value);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Phi.Rho.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Sigma.Alpha.Sigma);
            Tungsten.Rho.Theta.Add(Osmium.Zeta);
            Tungsten.Rho.Theta.Add(Osmium.Delta, Rhenium.Pi.XL.First.Value.Value, Rhenium.Pi.Qi.Phi.Rho, Rhenium.Pi.Qi.Phi.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Gamma.Rho.Nu);
            Tungsten.Rho.Theta.Run(Rhenium.Pi, Sigma.Alpha.Gamma);
            Tungsten.Rho.Theta.Add(Osmium.Zeta);
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
