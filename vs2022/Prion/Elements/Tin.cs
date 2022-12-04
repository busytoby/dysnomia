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
        static public Boron M;
        static public Mutex Lock = new Mutex();
        static public BigInteger Mu;
        static public Dynamic Rho;

        public Orbital K;

        public Tin()
        {
            if (M != null) return;
            M = new Boron();
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

        static public Orbital Breed(Dynamic N)
        {
            Lock.WaitOne();
            Affinity A = new Affinity(Rho, N);
            Orbital X = new Orbital(A);
            Lock.ReleaseMutex();
            return X;
        }
    }
}
