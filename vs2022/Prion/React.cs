using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dysnomia
{
    internal class React : Prion
    {
        public React()
        {
            b = 66;
            this.b = 67;
        }

        public React(React BasePrion) : base(BasePrion)
        {
            b = 45;
        }
    }
}
