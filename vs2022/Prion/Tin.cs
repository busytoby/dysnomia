using System;
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

        public Joule K;

        public Tin()
        {
            if (Polygamma != null) return;
            while (Prion.Saturn == null) Thread.Sleep(5000);

            Polygamma = new LinkedList<KeyValuePair<BigInteger, Dynamic>>();

            BigInteger M = Dysnomia.Math.Random();
            KeyValuePair<BigInteger, Dynamic> R = new KeyValuePair<BigInteger, Dynamic>(M, Prion.Saturn.X.R.M.Rod);
            Polygamma.AddFirst(R);
        }

        public Tin(Zinc Q)
        {
            K = new Joule(Q.U.Y.M.Rod, Q.R.L.M);
        }
    }
}
