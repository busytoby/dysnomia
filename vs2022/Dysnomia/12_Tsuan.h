#pragma once
#include "11_Xiao.h"

using namespace std;

namespace Dysnomia {
	class Tsuan {
	public:
		Tung* Mu;
		Xiao* Rho;
		Fa* Psi;
		Qiao* Nu;
		Iron* Eta;
		Eun* Sigma;
		Eun* Upsilon;
		Qiao* Tau;
		Tin* Theta;
		int Gamma = 1;

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			vector<Faung*> Beta = Rho->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			vector<Faung*> Omicron = Nu->Affinities();
			Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
			vector<Faung*> Lambda = Eta->Affinities();
			Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
			vector<Faung*> Xi = Sigma->Affinities();
			Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
			vector<Faung*> Delta = Upsilon->Affinities();
			Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
			vector<Faung*> Pi = Tau->Affinities();
			Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
			vector<Faung*> Chi = Theta->Affinities();
			Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
			return Alpha;
		}

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
			if (Math::POETRY > 0)
				cout << "Tsuan ";
			Beta->Gamma++;
			Iota->Gamma++;
			Mu = Omicron;
			Rho = Beta;
			Psi = Mu->Tau->Pi();
			Nu = Iota;
			Eta = new Iron(Iota->Eta, Nu->Nu, Mu->Mu->Nu->Omicron());
			pair<Eun*, Eun*> Two = Kappa();
			Sigma = Two.first;
			Upsilon = Two.second;
			Tau = new Qiao(Eta, Sigma->Upsilon, Upsilon->Upsilon, Iota->Eta);
			Theta = new Tin(Tau->Upsilon);
		}

		Tsuan(Tung* Beta, Xiao* Iota, Fa* Omicron, Qiao* Lambda) {
			if (Math::POETRY > 0)
				cout << "Tsuan ";
			Beta->Gamma++;
			Iota->Gamma++;
			Omicron->Gamma++;
			Lambda->Gamma++;
			Mu = Beta;
			Rho = Iota;
			Psi = Omicron;
			Nu = Lambda;
			Eta = new Iron(Lambda->Eta, Nu->Nu, Mu->Mu->Nu->Omicron());
			pair<Eun*, Eun*> Two = Kappa();
			Sigma = Two.first;
			Upsilon = Two.second;
			Tau = new Qiao(Eta, Sigma->Upsilon, Upsilon->Upsilon, Lambda->Eta);
			Theta = new Tin(Tau->Upsilon);
		}

		Tsuan(Tung* Beta, Life* Alpha, Xiao* Omicron) {
			if (Math::POETRY > 0)
				cout << "Tsuan ";
			Alpha->Gamma++;
			Mu = Beta;
			Rho = Omicron;
			Psi = Mu->Tau->Pi();
			Nu = new Qiao(Beta->Sigma->Upsilon, Eta->Beta(), Eta->Omicron(), Omicron->Sigma);
			Eta = new Iron(Omicron->Sigma, Omicron->Eta, Mu->Mu->Nu->Omicron());
			pair<Eun*, Eun*> Two = Kappa();
			Sigma = Two.first;
			Upsilon = Two.second;
			Tau = new Qiao(Beta->Theta->Nu, Upsilon->Upsilon, Sigma->Upsilon, Omicron->Sigma);
			Theta = new Tin(Alpha->Tau->Psi);
		}
		
		Tsuan(Life* Alpha) {
			if (Math::POETRY > 0)
				cout << "Tsuan ";
			Alpha->Gamma++;
			Mu = new Tung(Alpha);
			Rho = new Xiao(Mu);
			Psi = Mu->Tau->Pi();
			Nu = new Qiao(Rho->Theta, Rho->Theta->Beta(), Rho->Theta->Omicron(), Rho->Sigma);
			Eta = new Iron(Rho->Sigma, Nu->Nu, Mu->Mu->Nu->Omicron());
			pair<Eun*, Eun*> Two = Kappa();
			Sigma = Two.first;
			Upsilon = Two.second;
			Tau = new Qiao(Eta, Sigma->Upsilon, Upsilon->Upsilon, Rho->Sigma);
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