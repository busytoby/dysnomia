using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Tin
    {
        static public Dysnomia.Quaternion Saturn;

        public Tin(Boron A, Boron B)
        {
            // Star.Eta[Star.Alpha[Phosphorous.Sigmas["Neptune"]].Cone] == A[Star.Alpha[Phosphorous.Sigmas["Neptune"]].Cone]

            // Star.Alpha[Star.Eta[Star.Alpha[Phosphorous.Sigmas["Neptune"]].Cone][0]]
            // Phosphorous.Sigmas["Neptune"]
            // Saturn = new Planet(Uranus.X.R.M.Rod, Neptune.X.L.M.Cone);

            Dynamic UranusRod = Star.Alpha[Phosphorous.Sigmas["Uranus"]].Rod;
            Orbital UranusOrbital = Star.GetOrbitalByName("Uranus");
            Orbital NeptuneOrbital = Star.GetOrbitalByName("Neptune");


            int i = 99;
        }

        /*
        public Tin(Zinc Q)
        {
            while (Prion.Saturn == null) Thread.Sleep(5000);

            Lock.WaitOne();
            if (Mu == 0)
            {
                Mu = Dysnomia.Math.Random();
                KeyValuePair<BigInteger, Dynamic> R = new KeyValuePair<BigInteger, Dynamic>(Mu, Prion.Saturn.X.R.M.Rod);
                M.AddLast(R);
                Rho = Prion.Saturn.X.R.M.Rod;
            }
            Lock.ReleaseMutex();

            while (Q.U == null) Thread.Sleep(5000);

            K = new Orbital(Q.U.Y.M.Rod, Q.R.L.M);
        }
        */

        /*
        static public Orbital Breed(Dynamic N)
        {
            Lock.WaitOne();
            Affinity A = new Affinity(Rho, N);
            Orbital X = new Orbital(A);
            Lock.ReleaseMutex();
            return X;
        }
        */
    }
}
