using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Sulfur
    {
        public Scandium Nu;
        public Scandium Eta;

        public Titanium Beta;

        public Sulfur()
        {
            Nu = new Scandium(); // Telesto
            Eta = new Scandium(); // Hyperion

            Beta = new Titanium(Nu.Mu, Eta);
        }

        public Sulfur(Dysnomia.Quaternion Y)
        {
            Nu = new Scandium(Y);
            Eta = new Scandium();

            Beta = new Titanium(Nu.Mu, Eta);
        }

        public Sulfur(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            Nu = new Scandium(Y);
            Eta = new Scandium(X);

            Beta = new Titanium(Nu.Mu, Eta);
        }
    }
}
