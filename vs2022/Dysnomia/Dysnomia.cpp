#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Faung.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Fa* Mu;
    Faung* Psi;
    Faung* Nu;

    Mu = new Fa();
    Psi = new Faung();
    //Nu = new Faung(Mu, Psi->Rod->Identity, Psi->Rod->Foundation, Psi->Cone->Manifold, Psi->Cone->Ring);

    /*
    Rho = new Faung();
    Psi = new Faung(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
    Nu = new Fa();
    if (RAPHE_NEBULAE)
        Eta = new Faung(Nu, Psi->Rod->Base, Rho->Rod->Element, Psi->Rod->Barn, Psi->Rod->Tau);
    else
        Eta = new Faung(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
    Sigma = new Fa();
    if (RAPHE_NEBULAE)
        Upsilon = new Faung(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
    else
        Upsilon = new Faung(Sigma, Eta->Rod->Barn, Eta->Rod->Tau, Psi->Rod->Tau, Eta->Rod->Signal);
    Tau = new Fa();
    if (RAPHE_NEBULAE)
        Tau->Fuse(Upsilon->Rod->Signal, Eta->Rod->Tau, Psi->Rod->Tau);
    else
        Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
    Tau->Tune();
    if (RAPHE_NEBULAE)
        Theta = new Faung(Tau, Upsilon->Cone->Ring, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Base);
    else
        Theta = new Faung(Tau, Upsilon->Cone->Base, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
    */

    //Aluminium* Mu = new Aluminium();

    /*
    ন* Mu = new ন();
    Faung* Rho = Mu->Upsilon->Beta();
    Faung* Psi = Mu->Upsilon->Omicron();
    Faung* Nu = Mu->Eta->Omega(Rho, Psi);
    Faung* Eta = Mu->Mu->Mu->Rho->Omega(Rho, Psi);
    Iron* Sigma = new Iron(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Upsilon, Rho, Psi, Nu, Eta);
    Faung* Upsilon = Sigma->Beta();
    Faung* Tau = Sigma->Omicron();
    Faung* Theta = Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Upsilon->Omega(Tau, Upsilon);
    */

    cout << "Last Enders Game\n";
}