using Dysnomia;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion.Elements
{
    public class Lanthanum
    {
        public Sulfur Upsilon;
        public Chromium Alpha;
        public Wavelet Mu;
        public Chlorine<Quaternion> Eta;

        public Lanthanum(Sulfur Gamma)
        {
            if (Gamma.Y.Alpha == null)
                Gamma.Y.Alpha = new Quark(Gamma.Beta.Eta.X.L, Zinc.Fetch(), Gamma.Tau);
            else throw new Exception("Already Active");

            Alpha = new Chromium(Gamma.Y);
            Upsilon = Gamma.Y.Reproduce(Alpha);
            Titanium Antimony = Gamma.Indicate(Upsilon);

            if (Gamma.Y.Xi == null)
                Gamma.Y.Xi = new Spinor(Upsilon.Beta.Nu.X.N, new Polygamma(Antimony.Eta.X.R));
            else throw new Exception("Already Active");

            Eta = Form(Antimony, Gamma.Y.Xi);

            Gamma.Y.Phi = Mu.L.Current;
        }

        public Lanthanum(Chromium Omicron, Sulfur Iota)
        {
            if (Iota.Alpha == null)
                Iota.Alpha = new Quark(Iota.Beta.Eta.X.N, Zinc.Fetch(), Omicron.Kernel.Alpha.Rho.Head);

            Alpha = Omicron;
            Upsilon = Iota.Reproduce(Alpha);
            Titanium Antimony = Iota.Indicate(Upsilon);

            if (Iota.Xi == null)
                Iota.Xi = new Spinor(Upsilon.Y.Beta.Nu.X.R, new Polygamma(Antimony.Eta.X.L));
            Eta = Form(Antimony, Iota.Xi);

            Iota.Phi = Mu.R.Current;
        }
        public Chlorine<Quaternion> Form(Titanium Antimony, Spinor Xi)
        {
            Quaternion Ruthenium = Xi.First;
            Quaternion Rhodium = Xi.Last;
            Polygamma Platinum = new Polygamma(Rhodium);

            Chlorine<Quaternion> Garnet = new Chlorine<Quaternion>(Xi.List);
            Mu = new Wavelet(new Spinor(Garnet[1], Platinum), new Spinor(Rhodium, Platinum), new Spinor(Ruthenium, Platinum));
            Alpha.W.N.Transit(Mu.L.List);
            Alpha.W.N.Transit(Xi.List);

            return Garnet;
        }
    }
}
