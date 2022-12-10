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

            Tensor Xtensor = new Tensor(new Polygamma(CX[0]), new Polygamma(CX[1]), new Polygamma(CX[2]), new Polygamma(CX[3]),new Polygamma(CX[4]));
            Tensor Ytensor = new Tensor(new Polygamma(CY[0]), new Polygamma(CY[1]), new Polygamma(CY[2]), new Polygamma(CY[3]), new Polygamma(CY[4]));

            Octonion Egg = new Octonion(Aluminum.Phi.X, Xtensor);
            Octonion Chicken = new Octonion(Aluminum.Phi.X, Ytensor);

            Spinor One = new Spinor(Chicken.L.Gamma, X);
        }
    }
}
