﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Tin
    {
        static public LinkedList<KeyValuePair<BigInteger, Dynamic>> Polygamma;
        static public Mutex Lock = new Mutex();
        static public BigInteger Mu;
        static public Dynamic Rho;

        public Joule K;

        public Tin()
        {
            if (Polygamma != null) return;
            Polygamma = new LinkedList<KeyValuePair<BigInteger, Dynamic>>();
        }

        public Tin(Zinc Q)
        {
            while (Prion.Saturn == null) Thread.Sleep(5000);

            Lock.WaitOne();
            if (Mu == 0)
            {
                Mu = Dysnomia.Math.Random();
                KeyValuePair<BigInteger, Dynamic> R = new KeyValuePair<BigInteger, Dynamic>(Mu, Prion.Saturn.X.R.M.Rod);
                Polygamma.AddLast(R);
                Rho = Prion.Saturn.X.R.M.Rod;
            }
            Lock.ReleaseMutex();

            while(Q.U == null) Thread.Sleep(5000);
            if (Polygamma.Count != 6) throw new Exception("Life Support Error");
            K = new Joule(Q.U.Y.M.Rod, Q.R.L.M);
        }
    }
}
