#pragma once
#include "11_Xiao.h"

using namespace std;

namespace Dysnomia {
	class Tsuan {
	public:
		Tung* Mu;
		Xiao* Rho;
		Sulphur* Psi;
		Qiao* Nu;
		Iron* Eta;
		Eun* Sigma;
		Eun* Upsilon;
		Qiao* Tau;
		Tin* Theta;
		int Gamma = 1;

		~Tsuan() { 
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}

		Tsuan(Xiao* Beta, Qiao* Iota, Tung* Omicron) {
			Beta->Gamma++;
			Iota->Gamma++;
			Mu = Omicron;
			Rho = Beta;
			Psi = Rho->Mu->Theta->Mu->Eta;
			Nu = Iota;
			Eta = new Iron(Psi, Nu->Nu, Mu->Mu->Nu->Omicron());
			pair<Eun*, Eun*> Two = Kappa();
			Sigma = Two.first;
			Upsilon = Two.second;
			Tau = new Qiao(Eta, Sigma->Upsilon, Upsilon->Upsilon, Psi);
			Theta = new Tin(Tau->Upsilon);
		}

		Tsuan(Tung* Beta, Xiao* Iota, Sulphur* Omicron, Qiao* Lambda) {
			Beta->Gamma++;
			Iota->Gamma++;
			Omicron->Gamma++;
			Lambda->Gamma++;
			Mu = Beta;
			Rho = Iota;
			Psi = Omicron;
			Nu = Lambda;
			Eta = new Iron(Psi, Nu->Nu, Mu->Mu->Nu->Omicron());
			pair<Eun*, Eun*> Two = Kappa();
			Sigma = Two.first;
			Upsilon = Two.second;
			Tau = new Qiao(Eta, Sigma->Upsilon, Upsilon->Upsilon, Psi);
			Theta = new Tin(Tau->Upsilon);
		}
		
		Tsuan(Life* Alpha) {
			Alpha->Gamma++;
			Mu = new Tung(Alpha);
			Rho = new Xiao(Mu);
			Psi = new Sulphur();
			Nu = new Qiao(Rho->Theta, Rho->Theta->Beta(), Rho->Theta->Omicron(), Psi);
			Eta = new Iron(Psi, Nu->Nu, Mu->Mu->Nu->Omicron());
			pair<Eun*, Eun*> Two = Kappa();
			Sigma = Two.first;
			Upsilon = Two.second;
			Tau = new Qiao(Eta, Sigma->Upsilon, Upsilon->Upsilon, Psi);
			Theta = new Tin(Tau->Upsilon);
		}

		pair<Eun*, Eun*> Kappa() {
			pair<Eun*, Iron*> Two = Rho->Pi();
			Eun* Beta = Two.first;
			Eun* Iota = new Eun(Two.second);
			return make_pair(Beta, Iota);
		}
	};
}