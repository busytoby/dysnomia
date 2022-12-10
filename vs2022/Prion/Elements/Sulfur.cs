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

            LinkedListNode<KeyValuePair<BigInteger, Dysnomia.Quaternion>> Xgamma;
            LinkedListNode<KeyValuePair<BigInteger, Dysnomia.Quaternion>> Ygamma;

            List<Dysnomia.Quaternion> XPoly = new List<Dysnomia.Quaternion>();
            List<Dysnomia.Quaternion> YPoly = new List<Dysnomia.Quaternion>();

            Xgamma = X.T.First;
            Ygamma = Y.T.First;

            for (int j = 0; j < 5; j++)
            {
                XPoly.Add(Xgamma.Value.Value);
                YPoly.Add(Ygamma.Value.Value);
                Xgamma = Xgamma.Next;
                Ygamma = Ygamma.Next;
            }

            Tensor Xtensor = new Tensor(new Polygamma(XPoly[0]), new Polygamma(XPoly[1]), new Polygamma(XPoly[2]), new Polygamma(XPoly[3]), new Polygamma(XPoly[4]));
            Tensor Ytensor = new Tensor(new Polygamma(YPoly[0]), new Polygamma(YPoly[1]), new Polygamma(YPoly[2]), new Polygamma(YPoly[3]), new Polygamma(YPoly[4]));

            Octonion Egg = new Octonion(Aluminum.Phi.X, Xtensor);
            Octonion Chicken = new Octonion(Aluminum.Phi.X, Ytensor);
        }
    }
}
