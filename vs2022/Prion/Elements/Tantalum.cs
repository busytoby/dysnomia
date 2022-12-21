using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Tantalum : Spin<Lead> { 
        public Tantalum()
        {
            Gamma = new Lead(Tungsten.Phi, Niobium.Nu);

            Phi = new Lead(Niobium.Nu, Tungsten.Phi);
        }
    }
}
