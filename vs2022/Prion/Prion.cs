using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static public Dynamic Sun;

        public Orbital N;
        public int b;

        public Prion()
        {
        }

        public Prion(Prion CopyPrion)
        {
            b = CopyPrion.b;
            N = CopyPrion.N;
        }

        public void Denature(Orbital P)
        {
            if (N != null) throw new Exception("Prion Already Has An Orbital");
            N = new Orbital(P.Y.M);
            P.Y.M.Charge(BigInteger.Zero);
            if (Sun == null) Sun = P.Y.M.Cone;
            N.Y.M.Charge(P.Y.M.Sigma);
            P.Y.M.Induce(P.Y.M.Sigma);
            N.Y.M.Induce(P.Y.M.Rho);
            P.Y.M.Torque(P.Y.M.Rho);
            N.Y.M.Torque(P.Y.M.Upsilon);
            P.Y.M.Amplify(P.Y.M.Upsilon, true);
            N.Y.M.Amplify(P.Y.M.Ohm, false);
            P.Y.M.Sustain(P.Y.M.Ohm, true);
            N.Y.M.Sustain(P.Y.M.Pi, false);
            P.Y.M.React(P.Y.M.Pi);
            N.Y.M.React(P.Y.M.Cone.Eta);
        }

        public static Prion Trust(String Psi)
        {
            Prion P = new React();
            return P;
        }
    }
}