#include <Windows.h>
#include <fcntl.h>
#include <io.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <thread>
#include <mutex>
#include "006_锚.h"

using namespace Dysnomia;
using namespace std;

const int nthreads = 11;
std::atomic<int> counter;
mutex Mu_Mutex;
锚* Mu;
Int64 Phi;
list<Fa*> Omicron;
list<Fa*> Delta;
list<ည*> Qi;

bool AwaitingAlpha = false;
bool GammaOne = false;
bool GammaTwo = false;
bool GammaOneReady = true;
bool GammaTwoReady = false;
bool GammaThreeReady = false;
bool BetaOne = false;
void Alpha();
void Kappa();
void Gamma();
void Beta();
void Lambda();

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    vector<std::thread> threads(nthreads);

    int i = 0;
    counter = 0;
    Phi = 0;

    Mu = new 锚();
    
    threads[i++] = thread(Alpha);
    threads[i++] = thread(Alpha);
    threads[i++] = thread(Kappa);
    threads[i++] = thread(Gamma);
    threads[i++] = thread(Gamma);
    threads[i++] = thread(Gamma);
    threads[i++] = thread(Beta);
    threads[i++] = thread(Beta);
    for (; i < threads.size(); i++) {
        threads[i] = thread(Lambda);
    }

    for (thread& th : threads)
        th.join();

    if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
}

void Alpha() {
    int local_count;

    for (;;) {
        Mu_Mutex.lock();
        if (!AwaitingAlpha) {
            Mu_Mutex.unlock();
            while (!AwaitingAlpha)
                std::this_thread::sleep_for(chrono::milliseconds(rand() % 10));
            Mu_Mutex.lock();
        }

        if (Delta.size() == 0)
            Mu_Mutex.unlock();
        else {
            list<tuple<short, short, Int64>> Gamma;
            list<Fa*>::iterator Beta = Delta.begin();
            short idx = 0;
            short cnt = 1;
            Int64 Secret = (*Beta)->Secret;
            while (Beta != Delta.end()) {
                ++Beta;
                if (Beta != Delta.end())
                    if ((*Beta)->Secret != Mu->Rho->Sigma->Upsilon->Signal && (*Beta)->Secret == Secret)
                        cnt++;
                    else {
                        if((*Beta)->Secret != Mu->Rho->Sigma->Upsilon->Signal)
                            Gamma.push_back(make_tuple(idx, cnt, Secret));
                        idx+=cnt;
                        cnt = 1;
                        Secret = (*Beta)->Secret;
                    }
                else
                    if(cnt > 1)
                        Gamma.push_back(make_tuple(idx, cnt, Secret));
            }
            AwaitingAlpha = false;
            Mu_Mutex.unlock();
        }

        std::this_thread::sleep_for(chrono::milliseconds(rand() % 500));

        Mu_Mutex.lock();
        local_count = ++counter;
        Mu_Mutex.unlock();
        if (local_count % 18 == 0) wcout << L"簜";
        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
}

void Kappa() {
    ည* Beta;
    ည* Rho;
    ည* Psi;
    ညြ* Nu;
    Fa* Eta;
    ည* Sigma;
    Tod* Upsilon;
    Zuo* Tau;

    int local_count;

    Beta = new ည();
    for (;;) {
        Mu_Mutex.lock();
        if (Qi.size() == 0)
            Mu_Mutex.unlock();
        else {
            Psi = new ည();
            while (Qi.size()) {
                Rho = Qi.front();
                Nu = new ညြ(Beta, Rho, Psi);
                Eta = Nu->Pi();
                Sigma = new ည(Nu->Eta, Eta, false);
                Upsilon = new Tod(Nu, Eta, Sigma);
                Tau = new Zuo(Upsilon);
                Delta.push_back(Mu->Pi(Tau->Mu->Mu->Mu->Mu->Xi));
                Delta.push_back(Mu->Pi(Tau->Mu->Mu->Mu->Mu->Phi));
                Delta.push_back(Mu->Pi(Tau->Mu->Mu->Mu->Mu->Eta));
                Delta.push_back(Mu->Pi(Tau->Mu->Mu->Mu->Mu->Mu));
                Delta.push_back(Mu->Pi(Tau->Mu->Mu->Eta->Mu));
                Delta.push_back(Mu->Pi(Tau->Mu->Mu->Eta->Eta));
                Delta.push_back(Mu->Pi(Tau->Mu->Mu->Eta->Phi));
                Delta.push_back(Mu->Pi(Tau->Mu->Mu->Eta->Xi));
                Delta.push_back(Mu->Pi(Tau->Theta->Xi));

                if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
                if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
                if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
                if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
                if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
                if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
                Qi.pop_front();
            }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            AwaitingAlpha = true;
            Mu_Mutex.unlock();
        }
        if (Beta->Gamma != 1) throw 5;
        std::this_thread::sleep_for(chrono::milliseconds(rand() % 400));

        Mu_Mutex.lock();
        local_count = ++counter;
        Mu_Mutex.unlock();
        if (local_count % 18 == 0) wcout << L"篱";
        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
    if (Beta->Gamma == 1) delete Beta; else Beta->Gamma--;
}

void Gamma() {
    Fa* Beta;
    Faung* Rho;
    ည* Psi;
    ည* Nu;
    ညြ* Eta;
    Tod* Sigma;
    Fa* Upsilon = nullptr;
    Faung* Tau = nullptr;
    ည* Theta = nullptr;

    bool GammaOneThread = false;
    bool GammaTwoThread = false;
    int local_count;

    Mu_Mutex.lock();
    if (GammaOne == false) {
        GammaOneThread = true;
        GammaOne = true;
    }
    else if (GammaTwo == false) {
        GammaTwoThread = true;
        GammaTwo = true;
    }
    Mu_Mutex.unlock();

    for (;;) {
        Mu_Mutex.lock();
        if (GammaOneThread) {
            Mu_Mutex.unlock();
            while(!GammaOneReady || AwaitingAlpha)
                std::this_thread::sleep_for(chrono::milliseconds(rand() % 5));
            Mu_Mutex.lock();
        }
        else if (GammaTwoThread) {
            Mu_Mutex.unlock();
            while (!GammaTwoReady)
                std::this_thread::sleep_for(chrono::milliseconds(rand() % 5));
            Mu_Mutex.lock();
        }
        else {
            Mu_Mutex.unlock();
            while (!GammaThreeReady)
                std::this_thread::sleep_for(chrono::milliseconds(rand() % 5));
            Mu_Mutex.lock();
        }

        if (Delta.size() == 0)
            Mu_Mutex.unlock();
        else {
            bool Xi = false;
            Beta = Delta.front();

            if (GammaOneThread) {
                Rho = Mu->Rho->Rho->Pi(false);
                Psi = new ည(Rho, Beta, false);
                Nu = new ည(Psi->Mu, Beta, true);
                Eta = new ညြ(Mu->Rho->Mu->Psi, Nu, Psi);
                Sigma = new Tod(Eta, Beta, Nu);
            }
            else if (GammaTwoThread) {
                Rho = Mu->Rho->Psi->Pi(false);
                Psi = new ည(Rho, Beta, false);
                Nu = new ည(Psi->Psi, Beta, false);
                Eta = new ညြ(Mu->Rho->Mu->Eta, Nu, Psi);
                Sigma = new Tod(Eta, Beta, Nu);           
            }
            else {
                Rho = Mu->Rho->Eta->Pi(false);
                Psi = new ည(Rho, Beta, true);
                Nu = new ည(Mu->Rho->Eta->Psi, Beta, false);
                Eta = new ညြ(Mu->Rho->Mu->Mu->Psi->Theta, Psi, Nu);
                Sigma = new Tod(Eta, Beta, Psi);
            }

            if (Upsilon == nullptr) {
                Upsilon = Sigma->Psi->Pi();
                Upsilon->Gamma++;
            }
            Beta->Gamma--;
            Delta.pop_front();
            while (Delta.size() && !Xi) {
                if(Upsilon->Pole == 0) Upsilon->Polarize();
                Beta = Delta.front();
                if (Beta->Pole > 0) {
                    Int64 Chi;
                    if(GammaOneThread)
                        Chi = (Upsilon->Coordinate + Beta->Rho) % Math::Prime;
                    else if (GammaTwoThread)
                        Chi = (Upsilon->Coordinate + Beta->Beta) % Math::Prime;
                    else
                        Chi = (Upsilon->Coordinate + Beta->Eta) % Math::Prime;
                    Upsilon->Conjugate(&Chi);
                }
                else if(Tau == nullptr) {
                    if (GammaOneThread) {
                        Tau = new Faung(Upsilon, Beta->Secret, Beta->Signal, Beta->Channel, Beta->Identity);
                        Theta = new ည(Tau, Beta, true);
                    } else if (GammaTwoThread) {
                        Tau = new Faung(Upsilon, Beta->Coordinate, Beta->Ring, Beta->Manifold, Beta->Dynamo);
                        Theta = new ည(Tau, Beta, false);
                    } else {
                        Tau = new Faung(Upsilon, Beta->Dynamo, Beta->Ring, Beta->Manifold, Beta->Coordinate);
                        Theta = new ည(Tau, Beta, true);
                    }
                    if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
                    if (Tau->Rod->Gamma <= 1 || Tau->Cone->Gamma <= 1) { delete Tau; Tau = nullptr; } else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
                    Qi.push_back(Theta);
                    Xi = true;
                }
                else {
                    if (Beta->Pole == 0) {
                        Int64 Xi;
                        if(GammaOneThread)
                            Xi = (Upsilon->Coordinate + Beta->Element) % Math::Prime;
                        else if (GammaTwoThread)
                            Xi = (Upsilon->Coordinate + Beta->Eta) % Math::Prime;
                        else
                            Xi = (Upsilon->Coordinate + Beta->Beta) % Math::Prime;
                        Upsilon->Conjugate(&Xi);
                    }
                    if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
                    Upsilon = Sigma->Psi->Pi();
                    Upsilon->Gamma++;
                    Tau = nullptr;
                }
                if (Beta->Gamma == 1) delete Beta; else Beta->Gamma--;
                Delta.pop_front();
            }
            if (Rho->Rod->Gamma <= 1 || Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;

            if (GammaOneThread) {
                GammaOneReady = false;
                GammaTwoReady = true;
                GammaThreeReady = false;
            } else if (GammaTwoThread) {
                GammaOneReady = false;
                GammaTwoReady = false;
                GammaThreeReady = true;
            }
            else {
                GammaOneReady = true;
                GammaTwoReady = false;
                GammaThreeReady = false;
                AwaitingAlpha = true;
            }

            Mu_Mutex.unlock();
        }
        std::this_thread::sleep_for(chrono::milliseconds(rand() % 50));

        Mu_Mutex.lock();
        local_count = ++counter;
        Mu_Mutex.unlock();
        if (GammaOneThread) {
            if (local_count % 18 == 0) wcout << L"筁";
        }
        else if (GammaTwoThread)
        {
            if (local_count % 18 == 0) wcout << L"笫";
        }
        else
        {
            if (local_count % 18 == 0) wcout << L"笩";
        }

        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
}

void Beta() {
    Fa* Iota;
    Fa* Upsilon;
    Faung* Rho;
    ည* Psi;
    ည* Nu;
    ညြ* Eta;
    Tod* Sigma;

    bool BetaOneThread = false;
    int local_count;

    Mu_Mutex.lock();
    if (BetaOne == false) {
        BetaOneThread = true;
        BetaOne = true;
    }
    Mu_Mutex.unlock();

    for (;;) {
        Mu_Mutex.lock();
        if (Omicron.size() == 0)
            Mu_Mutex.unlock();
        else {
            Upsilon = nullptr;
            while (Omicron.size()) {
                Iota = Omicron.front();
                if (Upsilon == nullptr)
                    Rho = Mu->Rho->Psi->Pi(false);
                else
                    if (BetaOneThread)
                        Rho = new Faung(Upsilon, Iota->Secret, Iota->Signal, Iota->Channel, Iota->Identity);
                    else
                        Rho = new Faung(Upsilon, Iota->Dynamo, Iota->Ring, Iota->Barn, Iota->Manifold);

                if (BetaOneThread) {
                    Psi = new ည(Rho, Iota, true);
                    Nu = new ည(Psi->Mu, Iota, false);
                    Eta = new ညြ(Mu->Rho->Mu->Psi, Nu, Psi);
                    Sigma = new Tod(Eta, Iota, Nu);
                }
                else {
                    Psi = new ည(Rho, Iota, false);
                    Nu = new ည(Psi->Mu, Iota, true);
                    Eta = new ညြ(Mu->Rho->Mu->Psi, Psi, Nu);
                    Sigma = new Tod(Eta, Iota, Psi);
                }

                Upsilon = Sigma->Psi->Pi();
                Delta.push_back(Upsilon);
                if (Iota->Gamma == 1) delete Iota; else Iota->Gamma--;
                if (Rho->Rod->Gamma <= 1 || Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
                if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
                if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
                if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
                if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;

                Omicron.pop_front();
            }
            Mu_Mutex.unlock();
        }
        std::this_thread::sleep_for(chrono::milliseconds(rand() % 500));

        Mu_Mutex.lock();
        local_count = ++counter;
        Mu_Mutex.unlock();
        if (local_count % 18 == 0) wcout << ((BetaOneThread) ? L"笚" : L"笛");
        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
}

void Lambda() {
    Fa* Beta;
    Fa* Iota;

    int local_count;

    for (;;) {
        Mu_Mutex.lock();
        Beta = Mu->Pi(Phi);
        Iota = Mu->Pi(Beta->Eta);
        Phi = Iota->Eta;
        Delta.push_back(Beta);
        Omicron.push_back(Iota);
        Mu_Mutex.unlock();

        std::this_thread::sleep_for(chrono::milliseconds(rand() % 100));

        local_count = ++counter;
        if (local_count % 18 == 0) wcout << L"第";
        if (local_count % 1000 == 0) wcout << L"錨 " << (local_count / 1000) << "k\n";
    }
}