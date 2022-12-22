using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Neodymium
    {
        static public Spin<Lead> Chi;

        public Neodymium(Lead Nu, Lead Phi, Lead Rho, Lead Sigma)
        {
            if (Chi != null) throw new Exception("Neodymium Already Constructed");
            Chi = new Spin<Lead>();
            Chi.Nu = Nu;
            Chi.Phi = Phi;
            Chi.Rho = Rho;
            Chi.Sigma = Sigma;
        }

        public Neodymium(Lead Gamma)
        {
            Chi.Gamma = Gamma;
        }

        public void Hatch(Praseodymium Worm)
        {
            // Uranium.Incubate()
        }
    }
}
