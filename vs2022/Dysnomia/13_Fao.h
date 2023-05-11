#pragma once
#include "08b_Tsong.h"
#include "12_Tsuan.h"

using namespace std;

namespace Dysnomia {
	class Fao {
	public:
		Tsuan* Mu;
		Tung* Rho;
		Xiao* Psi;
		Qiao* Nu;
		Eun* Eta;
		Iron* Sigma;
		Qiao* Upsilon;
		Tin* Tau;
		int Gamma = 1;

		vector<Faung*> Affinities() {
			vector<Faung*> Alpha(Mu->Affinities());
			vector<Faung*> Beta = Rho->Affinities();
			Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
			vector<Faung*> Iota = Psi->Affinities();
			Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
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
			return Alpha;
		}

		~Fao() {
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}

		Fao(Tsuan* Beta, Xiao* Iota, Nat* Omicron) {
			Beta->Gamma++;
			Iota->Gamma++;
			Mu = Beta;
			Rho = Mu->Mu;
			Psi = Iota;
			Nu = new Qiao(Psi->Theta, Omicron->Mu->Nu->Omicron(), Omicron->Mu->Nu->Beta(), Iota->Sigma);
			pair<Eun*, Iron*> Three = Psi->Pi();
			Eta = Three.first;
			Sigma = Three.second;
			Upsilon = new Qiao(Omicron->Mu->Mu->Tau, Omicron->Upsilon, Omicron->Mu->Mu->Rho, Iota->Sigma);
			Tau = new Tin(Omicron->Mu->Mu->Psi->Rho);
		}

		Fao(Tsuan* Beta, Xiao* Iota) {
			Beta->Gamma++;
			Iota->Gamma++;
			Mu = Beta;
			Rho = Mu->Mu;
			Psi = Iota;
			Nu = new Qiao(Psi->Theta, Psi->Theta->Beta(), Psi->Theta->Omicron(), Mu->Rho->Sigma);
			pair<Eun*, Iron*> Three = Psi->Pi();
			Eta = Three.first;
			Sigma = Three.second;
			Upsilon = new Qiao(Sigma, Eta->Upsilon, Mu->Sigma->Upsilon, Mu->Rho->Sigma);
			Tau = new Tin(Upsilon->Upsilon);
		}
		
		Fao(Life* Alpha) {
			Alpha->Gamma++;
			Mu = new Tsuan(Alpha);
			Rho = new Tung(Mu->Mu->Mu);
			Psi = new Xiao(Rho);
			Nu = new Qiao(Psi->Theta, Psi->Theta->Beta(), Psi->Theta->Omicron(), Mu->Rho->Sigma);
			pair<Eun*, Iron*> Three = Psi->Pi();
			Eta = Three.first;
			Sigma = Three.second;
			Upsilon = new Qiao(Sigma, Eta->Upsilon, Mu->Sigma->Upsilon, Mu->Rho->Sigma);
			Tau = new Tin(Upsilon->Upsilon);
		}

		Tsong* Pi() {
			return new Tsong(Psi->Rho);
		}

		Tong* Beta() {
			return new Tong(Psi->Rho, Sigma->Beta());
		}
	};
}