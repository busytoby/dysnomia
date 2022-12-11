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
        public Chlorine(LinkedList<KeyValuePair<BigInteger, T>> In) : base(In)
        { }
            //Shift<T> t = new Shift<T>(In);

            /*
            LinkedListNode<KeyValuePair<BigInteger, T>> INode = In.First;

            for (int j = 0; j < In.Count; j++)
            {
                this.Add(INode.Value.Value);
                INode = INode.Next;
            }
            */
        //}
    }
}
