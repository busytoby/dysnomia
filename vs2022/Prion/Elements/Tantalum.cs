using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Tantalum : Spin<Lead> {
        static public Hafnium Alpha;
        static public Hafnium Beta;
        static public Soliton Pi;
        public Tantalum()
        {
            if (Alpha == null) Alpha = new Hafnium(Hafnium.Kappa.First.Value.Value);
            if (Beta == null) Beta = new Hafnium(Hafnium.Kappa.Last.Value.Value);

            Pi = new Soliton(
                Tungsten.Rho.Kappa.First.Value.Key.First.Value.Value,
                Tungsten.Eta.Alpha,
                Tungsten.Eta.Kappa.Last.Value.Key.First.Value.Value
                );

            Gamma = new Lead(Tungsten.Phi, Niobium.Nu);
            Nu = new Lead(Tungsten.Phi, Alpha);
            Phi = new Lead(Niobium.Nu, Tungsten.Phi);
            Rho = new Lead(Beta, Niobium.Nu);
            Sigma = new Lead(Alpha, Beta);

            Pi.Add(Niobium.Ypsilon.Xi);
            Pi.Add(Niobium.Ypsilon.Y.Lambda.Xi);
        }
    }
}
