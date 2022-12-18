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
        Calcium Aluminium;
        public Chlorine<Quaternion> Eta;

        public Lanthanum(Chromium Omicron, Sulfur Iota)
        {
            if (Iota.Alpha == null)
                Iota.Alpha = new Quark(Iota.Beta.Eta.X.N, Zinc.Fetch(), Omicron.Kernel.Alpha.Rho.Last.Value.Value);

            Alpha = Omicron;
            Upsilon = Iota.Reproduce(Alpha);
            Titanium Antimony = Iota.Indicate(Upsilon);
            Affinity Arsenic = new Affinity(Upsilon.Y.Beta.Nu.L.Nu.Nu.Rod, Antimony.Nu.L.Nu.Nu.Cone);
            if (Iota.Xi == null)
                Iota.Xi = new Spinor(Upsilon.Y.Beta.Nu.X.R, new Polygamma(Antimony.Eta.X.L));
            Eta = Form(Antimony, Iota.Xi);

            Chlorine<Quaternion> Tellurium = new Chlorine<Quaternion>(Mu.L.List);
            Aluminium = new Calcium(Tellurium);

            Iota.Phi = Aluminium.Phi;
        }
        public Chlorine<Quaternion> Form(Titanium Antimony, Spinor Xi)
        {
            Quaternion Ruthenium = Xi.List.First.Value.Value;
            Quaternion Rhodium = Xi.List.Last.Value.Value;
            Polygamma Platinum = new Polygamma(Rhodium);

            Chlorine<Quaternion> Garnet = new Chlorine<Quaternion>(Xi.List);
            Mu = new Wavelet(new Spinor(Garnet[1], Platinum), new Spinor(Rhodium, Platinum), new Spinor(Ruthenium, Platinum));
            Alpha.W.N.Transit(Mu.L.List);
            Alpha.W.N.Transit(Xi.List);

            return Garnet;
        }
    }
}
