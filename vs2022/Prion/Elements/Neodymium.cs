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

        public Neodymium(Lead Gamma, Lead Nu, Lead Phi, Lead Rho)
        {
            if (Chi != null) throw new Exception("Neodymium Already Constructed");
            Chi = new Spin<Lead>();
            Chi.Gamma = Gamma;
            Chi.Nu = Nu;
            Chi.Phi = Phi;
            Chi.Rho = Rho;
        }

        public Neodymium(Lead Sigma)
        {
            Chi.Sigma = Sigma;
        }

        public void Hatch(Praseodymium Worm)
        {

        }
    }
}
