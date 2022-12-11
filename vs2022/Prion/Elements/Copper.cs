using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Copper : Dysnomia.Soliton
    {
        public Quaternion Rho;
        public Quaternion Nu;
        public Quark Delta;
        public Copper(Quaternion Rho, Quark Delta, Quaternion Nu) : base(Rho, Delta, Nu) {
            this.Rho = Rho;
            this.Nu = Nu;
            this.Delta = Delta;
        }
    }
}
