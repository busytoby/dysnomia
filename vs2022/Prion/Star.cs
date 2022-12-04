using Prion.Elements;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Star
    {
        static public Carbon C;
        static public Boron B;
        public Orbital R;
        public Parallax N;
        public Orbital U;
        public Potassium K;

        public Star()
        {
            if (C == null) C = new Carbon();
            if (B == null) B = new Boron();

            N = new Parallax(new Orbital());

            K = new Potassium(N.F, N);

            U = new Orbital(K.T.Last.Value.Value.Rho);
            R = new Orbital(K.T.First.Value.Value.Rho);
        }
    }
}
