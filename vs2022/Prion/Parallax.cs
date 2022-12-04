using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Prion.Elements;

namespace Dysnomia
{
    public class Parallax : Orbital
    {
        private Carbon C;
        public Orbital S, F, P;


        public Parallax(Orbital D) : base(D.R.M)
        {
            C = new Carbon();
            F = new Orbital(D.Y.M);
            P = new Orbital(D.L.M);
        }

        public Parallax(Parallax E) : base(E.F.L.M)
        {
            C = new Carbon();
            F = new Parallax(E.F);
            P = new Orbital();
        }
    }
}
