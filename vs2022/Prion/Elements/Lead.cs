using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Lead
    {
        public LinkedList<KeyValuePair<Soliton, Tuple<Tensor, Tensor>>> Polynu;
        public Manganese Mu;
        public BigInteger Epsilon;

        public Lead(Hafnium Phi, Hafnium Nu)
        {
            Polynu = new LinkedList<KeyValuePair<Soliton, Tuple<Tensor, Tensor>>>();
            Nu.S = Phi.P;

            Tensor Left = new Tensor();
            Left.Gamma = new Dysnomia.Quaternion();
            Left.Gamma.Gamma = Phi.S.L.M;
            Left.Gamma.Nu = Nu.S.Y.M;
            Left.Gamma.Phi = Nu.P.Y.M;
            Left.Gamma.Rho = Nu.F.Y.M;
            Left.Gamma.Sigma = Phi.P.L.M;

            Left.Gamma.Epsilon = Phi.F.Sigma;

            Left.Nu = new Dysnomia.Quaternion();
            Left.Nu.Gamma = Phi.F.Y.M;
            Left.Nu.Nu = Nu.P.R.M;
            Left.Nu.Phi = Phi.S.Y.M;
            Left.Nu.Rho = Nu.S.L.M;
            Left.Nu.Sigma = Phi.P.R.M;

            Left.Nu.Epsilon = Nu.P.Sigma;

            Left.Phi = new Dysnomia.Quaternion();
            Left.Phi.Gamma = Nu.P.L.M;
            Left.Phi.Nu = Nu.F.L.M;
            Left.Phi.Phi = Phi.F.R.M;
            Left.Phi.Rho = Nu.F.R.M;
            Left.Phi.Sigma = Nu.S.R.M;

            Left.Phi.Epsilon = Nu.S.Sigma;

            Left.Rho = new Dysnomia.Quaternion();
            Left.Rho.Gamma = Phi.S.R.M;
            Left.Rho.Nu = Phi.P.Y.M;
            Left.Rho.Phi = new Affinity();
            Left.Rho.Rho = Phi.F.L.M;
            Left.Rho.Sigma = new Affinity();

            Left.Rho.Epsilon = Phi.P.Sigma;

            Left.Sigma = new Dysnomia.Quaternion();
            Left.Sigma.Gamma = new Affinity();
            Left.Sigma.Nu = new Affinity();
            Left.Sigma.Phi = new Affinity();
            Left.Sigma.Rho = new Affinity();
            Left.Sigma.Sigma = new Affinity();

            Left.Sigma.Epsilon = Nu.F.Sigma;

            Tensor Right = new Tensor();
            Right.Gamma = new Dysnomia.Quaternion();
            Right.Gamma.Gamma = Nu.S.L.M;
            Right.Gamma.Nu = Phi.S.Y.M;
            Right.Gamma.Phi = Phi.P.Y.M;
            Right.Gamma.Rho = Phi.F.Y.M;
            Right.Gamma.Sigma = Nu.P.L.M;

            Right.Gamma.Epsilon = Phi.S.Sigma;

            Right.Nu = new Dysnomia.Quaternion();
            Right.Nu.Gamma = Nu.F.Y.M;
            Right.Nu.Nu = Phi.P.R.M;
            Right.Nu.Phi = Nu.S.Y.M;
            Right.Nu.Rho = Phi.S.L.M;
            Right.Nu.Sigma = Nu.P.R.M;

            Right.Nu.Epsilon = Phi.P.Sigma;

            Right.Phi = new Dysnomia.Quaternion();
            Right.Phi.Gamma = Phi.P.L.M;
            Right.Phi.Nu = Phi.F.L.M;
            Right.Phi.Phi = Nu.F.R.M;
            Right.Phi.Rho = Phi.F.R.M;
            Right.Phi.Sigma = Phi.S.R.M;

            Right.Phi.Epsilon = Nu.S.Sigma;

            Right.Rho = new Dysnomia.Quaternion();
            Right.Rho.Gamma = Nu.S.R.M;
            Right.Rho.Nu = Nu.P.Y.M;
            Right.Rho.Phi = new Affinity();
            Right.Rho.Rho = Nu.F.L.M;
            Right.Rho.Sigma = new Affinity();

            Right.Rho.Epsilon = Nu.P.Sigma;

            Right.Sigma = new Dysnomia.Quaternion();
            Right.Sigma.Gamma = new Affinity();
            Right.Sigma.Nu = new Affinity();
            Right.Sigma.Phi = new Affinity();
            Right.Sigma.Rho = new Affinity();
            Right.Sigma.Sigma = new Affinity();

            Right.Sigma.Epsilon = Phi.F.Sigma;

            Epsilon = Phi.S.Sigma;

            /*
            Octonion O = new Octonion(new Calcium(T.N, Left.Gamma, Right.Phi, T.L, T.R));
            Quark T = new Quark(X, Y, Xi);           
            Spinor P = new Spinor(O.X.N, new Polygamma(Right.Sigma));

            Polynu.AddLast(KeyValuePair.Create(Left, Right));
            */

            /*
                if (Mu == null) Mu = new Manganese();

                if (Magnesium.Nu.Sigma == null) throw new Exception("No Magnesium");
                if (Mu.Count != 1) throw new Exception("Magnesium Spinor Not Found");
                // First Sigma Star
            */
        }
    }
}
