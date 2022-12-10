using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Nitrogen : Dictionary<String, BigInteger> // Pending Refactor
    {
        public void RecordOrbital(Orbital V, String Name)
        {
            Phosphorous.Xi.Add(V.Sigma, V);
            Phosphorous.Locks.Add(V.Sigma, new Mutex());
            base.Add(Name, V.Sigma);
        }

        public void RecordTensor(Tensor V, String Name)
        {
            Phosphorous.Locks.Add(V.Gamma.Epsilon, new Mutex());
            base.Add(Name, V.Gamma.Epsilon);
        }

        public void RecordQuaternion(Dysnomia.Quaternion V, String Name)
        {
            Beryllium.Phi.Add(V.Epsilon, V);
            Phosphorous.Locks.Add(V.Epsilon, new Mutex());
            base.Add(Name, V.Epsilon);
        }

        public void RecordQuark(Quark V, String Name)
        {
            Phosphorous.Locks.Add(V.Epsilon, new Mutex());
            base.Add(Name, V.Epsilon);
        }

        public void RecordSpinor(Dysnomia.Spinor V, String Name)
        {
            if (!Tin.Mu.ContainsKey(V.Epsilon)) Tin.Mu.Add(V.Epsilon, V);
            else throw new Exception("Must Not Add Spinor Twice");
            if (Tin.Mu.Count == 5) throw new Exception("Not Ready For More Than 5 Spinors");
            Phosphorous.Locks.Add(V.Epsilon, new Mutex());
            base.Add(Name, V.Epsilon);
        }
    }
}
