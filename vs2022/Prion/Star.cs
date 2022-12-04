using Prion.Elements;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    public class Star
    {
        public Orbital R;
        public Parallax N;
        public Orbital U;
        public Potassium K;

        public Star()
        {
            N = new Parallax(new Orbital());

            K = new Potassium(N.F, N);

            U = new Orbital(K.M.Last.Value.Value.Rho);
            R = new Orbital(K.M.First.Value.Value.Rho);
        }
    }
}
