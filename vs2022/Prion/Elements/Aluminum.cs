using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Aluminum
    {
        static public Octonion Phi;
        static public Dysnomia.Quaternion Xi;
        static public Spinor Rho;

        public Aluminum(Dysnomia.Quaternion Y, Dysnomia.Quaternion X)
        {
            if (Phi != null) throw new Exception("Aluminum Already Exists");

            if (Tin.Mu.Count != 2) throw new Exception("Io Already Exists");

            Spinor A = new Dysnomia.Spinor(Y, Hafnium.Kappa);
            Phosphorous.Sigmas.RecordSpinor(A, "Io");
            Xi = Y;
            
            Spinor B = new Dysnomia.Spinor(X, Hafnium.Kappa);
            Phosphorous.Sigmas.RecordSpinor(B, "Amalthea");

            Quark Thebe = new Quark(X, Y, Xi);
            Phi = new Octonion(Thebe, new Calcium(Thebe.N, Xi, Zinc.Fetch(), Thebe.L, Thebe.R));

            Rho = new Spinor(Phi.X.N, Hafnium.Kappa);
            Phosphorous.Sigmas.RecordSpinor(Rho, "Valetudo");

            Phosphorous.Sigmas.RecordQuark(Thebe, "Thebe");
            Phosphorous.Sigmas.RecordTensor(Phi.L, "Ganymede");
        }
    }
}
