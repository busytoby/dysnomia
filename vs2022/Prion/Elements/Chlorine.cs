using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Chlorine<T> : Shift<T>
    {
        public Chlorine(LinkedList<KeyValuePair<BigInteger, T>> In) : base(In) { }
    }
}
