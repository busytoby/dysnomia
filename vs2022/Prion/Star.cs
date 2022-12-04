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

        public Star()
        {
            if (C == null) C = new Carbon();
            if (B == null) B = new Boron();
        }
    }
}
