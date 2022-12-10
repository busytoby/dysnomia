﻿using System.Numerics;
using Prion;
using Prion.Elements;

namespace Dysnomia
{
    public class Prion
    {
        public Prion()
        {
            Star Sun = new Star();

            Phosphorous System = new Phosphorous();
            Phosphorous.Sigmas.RecordOrbital(System.Nu, "Neptune");
            Phosphorous.Sigmas.RecordOrbital(System.Nu.F, "Sun");
            Phosphorous.Sigmas.RecordOrbital(System.Nu.P, "Uranus");

            Venus V = new Venus(Parallax.Kappa.T.First.Value.Value.Rho.Rod, Parallax.Kappa.T.First.Value.Value.Gamma);

            Parallax.Saturn = new Tin();
            Phosphorous.GenerateOrbital(Tin.Sigma.Sigma, "Saturn Sigma"); // First Sigma Star Orbital
            Phosphorous.Sigmas.RecordQuaternion(Tin.Sigma, "Saturn");

            Pluto P = new Pluto();

            P.Mate(Parallax.Kappa.T.Last.Value.Value, Star.GetOrbitalByName("Pluto Sigma")); // Dione

            Earth E = new Earth();

            Sulfur Alpha = new Sulfur();
            Chromium Root = new Chromium(Alpha);
        }
    }
}