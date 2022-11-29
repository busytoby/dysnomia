using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static public Dynamic Sun;
        static public Orbital Uranus;

        public Orbital N;

        public Prion()
        {
        }

        public Prion(Prion CopyPrion)
        {
            N = CopyPrion.N;
        }

        public void Denature(Orbital P)
        {
            if (N != null) throw new Exception("Prion Already Has An Orbital");
            N = new Orbital(P.Y.M);
            P.Y.M.Charge(BigInteger.Zero);
            if (Uranus == null)
            {
                if (Sun == null)
                {
                    Sun = P.Y.M.Cone;
                    N.Y.M.Charge(P.Y.M.Sigma);
                    P.Y.M.Induce(N.Y.M.Sigma);
                    Sun.Eta = Sun.Amplify(N.Y.M.Sigma, true);
                    N.Y.M.Induce(P.Y.M.Rho);
                    Sun.Tau = Sun.Torque(P.Y.M.Rho, true);
                }
                N.Y.M.Amplify(Sun.Eta, true);
                N.Y.M.Torque(Sun.Tau);
                Uranus = new Orbital(P.Y.M);
                Uranus.L.M.Torque(N.Y.M.Rho);
                Uranus.R.M.Torque(P.Y.M.Rho);
                Uranus.Y.M.Amplify(Sun.Eta, true);
                Uranus.Eta = Uranus.Y.M.Ohm;
                Prion U = new Prion();
                U.Denature(Uranus);
                return;
            }
            P.Y.M.Torque(N.Y.M.Rho);
            N.Y.M.Torque(P.Y.M.Rho);
            // Venus
            P.Y.M.Amplify(N.Y.M.Rho, true);
            N.Y.M.Amplify(P.Y.M.Upsilon, false);
            P.Y.M.Sustain(N.Y.M.Ohm, true);
            N.Y.M.Sustain(P.Y.M.Ohm, false);
            P.Y.M.React(N.Y.M.Pi);
            N.Y.M.React(P.Y.M.Cone.Eta);
        }

        public static Prion Trust(String Psi)
        {
            Prion P = new Prion();
            //Prion P = new React();
            return P;
        }
    }
}