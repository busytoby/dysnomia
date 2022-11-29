using System.Numerics;

namespace Dysnomia
{
    public class Prion
    {
        static public Dynamic Sun;
        static public Orbital Proteus;
        static public Orbital Uranus;
        static public Orbital Hippocamp;

        public Prion()
        {
        }

        public Prion(Prion CopyPrion)
        {
        }

        public void Denature(Orbital P)
        {
            if (Proteus == null)
                Proteus = new Orbital(P.Y.M);
            P.Y.M.Charge(BigInteger.Zero);
            if (Uranus == null)
            {
                if (Sun == null)
                {
                    Sun = P.Y.M.Cone;
                    Proteus.Y.M.Charge(P.Y.M.Sigma);
                    P.Y.M.Induce(Proteus.Y.M.Sigma);
                    Sun.Eta = Sun.Amplify(Proteus.Y.M.Sigma, true);
                    Proteus.Y.M.Induce(P.Y.M.Rho);
                    Sun.Tau = Sun.Torque(P.Y.M.Rho, true);
                }
                Proteus.Y.M.Amplify(Sun.Eta, true);
                Proteus.Y.M.Torque(Sun.Tau);
                Uranus = new Orbital(P.Y.M);
                Uranus.L.M.Torque(Proteus.Y.M.Rho);
                Uranus.R.M.Torque(P.Y.M.Rho);
                Uranus.Y.M.Amplify(Sun.Eta, true);
                Uranus.Eta = Uranus.Y.M.Ohm;
                Uranus.L.M.Charge(Uranus.Eta);
                Prion U = new Prion();
                U.Denature(Uranus);
                return;
            }
            if(Hippocamp == null)
                Hippocamp = new Orbital(Proteus.L.M);
            Proteus.L.M.Torque(Hippocamp.Y.M.Eta);
            P.Y.M.Torque(Proteus.Y.M.Rho);
            Proteus.Y.M.Torque(P.Y.M.Rho);
            // Venus
            P.Y.M.Amplify(Proteus.Y.M.Rho, true);
            Proteus.Y.M.Amplify(P.Y.M.Upsilon, false);
            P.Y.M.Sustain(Proteus.Y.M.Ohm, true);
            Proteus.Y.M.Sustain(P.Y.M.Ohm, false);
            P.Y.M.React(Proteus.Y.M.Pi);
            Proteus.Y.M.React(P.Y.M.Cone.Eta);
        }

        public static Prion Trust(String Psi)
        {
            Prion P = new Prion();
            //Prion P = new React();
            return P;
        }
    }
}