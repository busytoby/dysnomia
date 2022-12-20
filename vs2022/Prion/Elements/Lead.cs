using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Lead
    {
        public LinkedList<KeyValuePair<Tensor, Tensor>> Polynu;
        public Manganese Mu;

        public Lead(Hafnium Phi, Hafnium Nu)
        {
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
            Left.Nu.Rho = Nu.F.Y.M;
            Left.Nu.Sigma = Phi.P.L.M;

            Left.Nu.Epsilon = Nu.P.Sigma;

            /*
                if (Mu == null) Mu = new Manganese();

                if (Magnesium.Nu.Sigma == null) throw new Exception("No Magnesium");
                if (Mu.Count != 1) throw new Exception("Magnesium Spinor Not Found");
                // First Sigma Star
            */
        }
    }
}
