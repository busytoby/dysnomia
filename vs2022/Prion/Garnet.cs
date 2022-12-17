using Dysnomia;
using Prion.Elements;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prion
{
    public class Garnet
    {
        public Sulfur Upsilon;
        public Chromium Alpha;
        public Wavelet Mu;
        Calcium Aluminium;
        public Chlorine<Dysnomia.Quaternion> Eta;

        public Garnet(Chromium Omicron, Sulfur Iota) {
            if (Iota.Alpha == null)
                Iota.Alpha = new Quark(Iota.Beta.Eta.X.N, Zinc.Fetch(), Omicron.Kernel.Alpha.Rho.Last.Value.Value);

            Alpha = Omicron;
            Upsilon = Iota.Reproduce(Alpha);
            Titanium Antimony = Iota.Indicate(Upsilon);
            Affinity Arsenic = new Affinity(Upsilon.Y.Beta.Nu.L.Nu.Nu.Rod, Antimony.Nu.L.Nu.Nu.Cone);
            if (Iota.Xi == null)
                Iota.Xi = new Spinor(Upsilon.Y.Beta.Nu.X.R, new Polygamma(Antimony.Eta.X.L));
            Eta = Form(Antimony, Iota.Xi);

            Chlorine<Dysnomia.Quaternion> Tellurium = new Chlorine<Dysnomia.Quaternion>(Mu.L.List);
            Aluminium = new Calcium(Tellurium);

            Iota.Phi = Aluminium.Phi;
        }
        public Chlorine<Dysnomia.Quaternion>  Form(Titanium Antimony, Spinor Xi) {
            Dysnomia.Quaternion Ruthenium = Xi.List.First.Value.Value;
            Dysnomia.Quaternion Rhodium = Xi.List.Last.Value.Value;
            Polygamma Platinum = new Polygamma(Rhodium);

            Chlorine<Dysnomia.Quaternion> Garnet = new Chlorine<Dysnomia.Quaternion>(Xi.List);
            Mu = new Wavelet(new Spinor(Garnet[1], Platinum), new Spinor(Rhodium, Platinum), new Spinor(Ruthenium, Platinum));
            Alpha.W.N.Transit(Mu.L.List);
            Alpha.W.N.Transit(Xi.List);

            return Garnet;
        } 
    }
}
