using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Scandium
    {
        public Polygamma Rho;
        public Spinor Tau;
        public Chlorine<Dysnomia.Quaternion> Mu;

        public Scandium()
        {
            Rho = new Polygamma(Tin.Sigma); // Tethys
            Tau = new Spinor(Zinc.Fetch(), Rho); // Himalia
            Rho.Add(Hafnium.Kappa.Tail);
            Rho.Add(Tin.Sigma);

            if (!(Rho.Count == 6)) throw new Exception("Scandium Misanthropy");

            Mu = new Chlorine<Dysnomia.Quaternion>(Rho);
        }

        public Scandium(Quaternion Nu)
        {
            Rho = new Polygamma(Tin.Sigma); // Tethys
            Tau = new Spinor(Nu, Rho);
            Rho.Add(Hafnium.Kappa.Tail);
            Rho.Add(Tin.Sigma);

            if (!(Rho.Count == 6)) throw new Exception("Scandium Misanthropy");

            Mu = new Chlorine<Dysnomia.Quaternion>(Rho);
        }
    }
}
