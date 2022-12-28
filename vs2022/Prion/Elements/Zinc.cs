﻿using System;
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

        static public Dysnomia.Quaternion Fetch()
        {
            if (++Bonds > 32768) throw new Exception("The Watch Broke");
            Dysnomia.Quaternion Pi = Eta;
            Dispose();
            return Pi;
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

            Eta.Gamma = new Affinity(R.Rod, N.Cone);
            Eta.Nu = new Affinity(I.Rod, R.Cone);
            Eta.Phi = new Affinity(N.Rod, I.Cone);
            Eta.Rho = new Affinity(N.Rod, R.Cone);
            Eta.Sigma = new Affinity(N.Rod, N.Cone);

            Eta.Epsilon = Dysnomia.Math.ModPow(R.Rod.Base, I.Cone.Manifold, N.Rod.Barn);

            Phosphorous.Locks.Add(Eta.Epsilon, new Mutex());
            Bonds--;
        }
    }
}
