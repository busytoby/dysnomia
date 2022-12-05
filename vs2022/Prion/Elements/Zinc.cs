using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Linq;
using System.Numerics;
using System.Reflection.Metadata.Ecma335;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    static public class Zinc
    {
        static public Dysnomia.Quaternion? Eta = null;
        static private int Bonds; // stub conception of how zinc will work

        static Zinc()
        {
            if (Eta != null) throw new Exception("Zinc Failure");
            Bonds = 0;
            Dispose();
        }

        static private void Dispose()
        {
            while (Bonds > 0)
                System.Threading.Thread.Sleep(5000);
            if (Eta != null)
                Phosphorous.Locks.Remove(Eta.Epsilon);
            Eta = new Dysnomia.Quaternion();
            Ion I = new Ion();
            Ion R = new Ion();
            Ion N = new Ion();

            Eta.Gamma = new Affinity(R.M.Rod, N.M.Cone);
            Eta.Nu = new Affinity(I.M.Rod, R.M.Cone);
            Eta.Phi = new Affinity(N.M.Rod, I.M.Cone);
            Eta.Rho = new Affinity(N.M.Rod, R.M.Cone);
            Eta.Sigma = new Affinity(N.M.Rod, N.M.Cone);

            Eta.Epsilon = Dysnomia.Math.ModPow(R.M.Rod.Rho, I.M.Cone.Manifold, N.M.Rod.Barn);

            Phosphorous.Locks.Add(Eta.Epsilon, new Mutex());
        }
    }
}
