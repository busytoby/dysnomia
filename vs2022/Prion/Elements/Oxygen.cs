using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;
using Dysnomia;

namespace Prion.Elements
{
    public class Oxygen
    {
        static public Fluorine F;

        static public Phosphorous Learn(BigInteger Epsilon)
        {
            if (F == null) F = new Fluorine();
            if (!Star.Alpha.ContainsKey(Epsilon)) throw new Exception("Unlearnable");   
            Phosphorous I = new Phosphorous(Star.Alpha[Epsilon]);
            F.Add(I.Nu, I.Nu.Nu);

            return I;
        }
    }
}
