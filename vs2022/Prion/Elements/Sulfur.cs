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
        public Sulfur()
        {
            Polygamma Y = new Polygamma(Tin.Sigma); // Tethys
            Spinor PolyAcetylGlutamate = new Spinor(Zinc.Fetch(), Y); // Himalia
            Y.Add(Tin.Sigma); // First Kinase, First Dehydrogenase IsoSpin
                              // Addition Product Is The First N-Acetyl-L-Glutamate Phosphate, Telesto

            Polygamma X = new Polygamma(Tin.Sigma); // Tethys Again
            Spinor PolyAcetylGlutamate2 = new Spinor(Zinc.Fetch(), X); // Himalia Again
            X.Add(Tin.Sigma);
            // Addition Product Is The Second N-Acetyl-L-Glutamate Phosphate, Hyperion

            if (!(Y.T.Count == 5) || !(X.T.Count == 5)) throw new Exception("Sulfur Polygammas Must Have 5 Base Pairs Each");

            Chlorine<Dysnomia.Quaternion> CX = new Chlorine<Dysnomia.Quaternion>(X.T);
            Chlorine<Dysnomia.Quaternion> CY = new Chlorine<Dysnomia.Quaternion>(Y.T);

            Calcium XC = new Calcium(CX);
            Calcium YC = new Calcium(CY);

            Octonion Egg = new Octonion(Aluminum.Phi.X, XC);
            Octonion Chicken = new Octonion(Aluminum.Phi.X, YC);

            Spinor One = new Spinor(Chicken.L.Gamma, X);
        }
    }
}
