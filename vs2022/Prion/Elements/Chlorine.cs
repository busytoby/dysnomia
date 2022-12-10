using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Chlorine<T> : List<T>
    {
        public Chlorine(LinkedList<KeyValuePair<BigInteger, T>> In)
        {
            LinkedListNode<KeyValuePair<BigInteger, T>> INode = In.First;

            for (int j = 0; j < In.Count; j++)
            {
                this.Add(INode.Value.Value);
                INode = INode.Next;
            }
        }
    }
}
