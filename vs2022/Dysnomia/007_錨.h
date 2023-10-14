#pragma once
#include <fcntl.h>
#include <io.h>
#include <stdlib.h>
#include <iostream>
#include <thread>
#include <mutex>
#include "006_锚.h"
//#include "Domain/Diatom.h"

using namespace std;

namespace Dysnomia {
    class 錨 {
    public:
        static HANDLE hConsole;

        mutex Mu_Mutex;
        锚* Mu;

        list<ë*> Qing;

        int counter;

        錨() {
            hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            _setmode(_fileno(stdout), _O_U16TEXT);

            if (Math::POETRY > 5)
                wcout << L"錨 ";

            counter = 0;
            Phi = 0;

            Mu = new 锚();

            vector<thread> threads(nthreads);
            int i = 0;

//            threads[i++] = thread(&錨::Xi, this);
//            threads[i++] = thread(&錨::Alpha, this);
//            threads[i++] = thread(&錨::Alpha, this);
//            threads[i++] = thread(&錨::Kappa, this);
//            threads[i++] = thread(&錨::Gamma, this);
//            threads[i++] = thread(&錨::Gamma, this);
//            threads[i++] = thread(&錨::Gamma, this);
//            threads[i++] = thread(&錨::Beta, this);
//            threads[i++] = thread(&錨::Beta, this);
            for (; i < threads.size(); i++)
                threads[i] = thread(&錨::Lambda, this);

            for (thread& th : threads)
                th.detach();
        }

        ~錨() {
            //if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

    private:
        ည* Rho;
        ည* Psi;
        Int64 Phi;
        list<Fa*> Omicron;
        list<ည*> Qi;
        list<Tod*> Rong;

        const int nthreads = 2;

        bool AwaitingAlpha = false;
        bool GammaOne = false;
        bool GammaTwo = false;
        bool GammaOneReady = true;
        bool GammaTwoReady = false;
        bool GammaThreeReady = false;
        bool BetaOne = false;

        /*
        void Xi() {
            Tod* Beta;
            Zuo* Iota;
            ë* Omicron;

            int local_count;
            short queue_max = 20;
            int sleep_time = 100;

            for (;;) {
                Mu_Mutex.lock();
                if (Rong.size() > queue_max) sleep_time /= 2;
                else if (Rong.size() == 0 && sleep_time < 4000) sleep_time *= 2;
                if (sleep_time < 100) sleep_time = 100;
                while (Rong.size() > 0) {
                    Beta = Rong.front();
                    if (Beta->Tau->Identity != 0) {
                        if (Beta->Gamma != 1) throw 10;
                        delete Beta; // Attention Stolen
                        Rong.pop_front();
                        continue;
                    }
                    Iota = new Zuo(Beta);
                    Omicron = new ë(Iota, true);
                    Beta->Gamma--;
                    Iota->Gamma--;

                    Qing.push_back(Omicron);
                    //delete Lambda;
                    Rong.pop_front();

                    if (Qing.size() >= 15) {
                        local_count = ++counter;
                        SetConsoleTextAttribute(hConsole, 9);
                        wcout << L"錨";
                        if (local_count % 55 == 0) wcout << L"\n";
                    }

                    Mu_Mutex.unlock();
                    while (Qing.size() >= 15)
                        std::this_thread::sleep_for(chrono::milliseconds(100));
                    Mu_Mutex.lock();
                }

                local_count = ++counter;
                SetConsoleTextAttribute(hConsole, 15);
                wcout << L"簻";
                if (local_count % 55 == 0) wcout << L"\n";

                Mu_Mutex.unlock();

                std::this_thread::sleep_for(chrono::milliseconds(rand() % sleep_time));
            }
        }

        void Omega(tuple<short, short, Int64> Alpha) {
            list<Fa*>::iterator Beta = Delta.begin();
            short idx = std::get<0>(Alpha);
            short cnt = std::get<1>(Alpha);
            Int64 Secret = std::get<2>(Alpha);
            bool Knowledge = (Secret == Mu->Rho->Mu->Psi->Mu->Rod->Manifold);

            Fa* Iota = Mu->Rho->Mu->Mu->Mu->Pi(333);
            Fa* Omicron;
            Faung* Lambda;
            ည* Xi;
            ညြ* Tau;
            Tod* Theta;

            if (idx + cnt > Delta.size()) throw 6;
            for (int i = 0; i < idx; i++)
                Beta++;

            if (Rho == nullptr) {
                Omicron = *Beta;

                Beta++;
                Lambda = Mu->Rho->Sigma->Pi(*Beta, (*Beta)->Identity, (*Beta)->Ring);
                Rho = new ည(Lambda, Omicron, !Knowledge);
                Lambda->Rod->Gamma--;
                Lambda->Cone->Gamma--;

                Beta++;
                Phi = Rho->Psi->Rod->Avail((*Beta)->Channel);

                Beta++;
            }

            if (Psi == nullptr) {
                Omicron = *Beta;

                Beta++;
                Lambda = Mu->Rho->Sigma->Pi(*Beta, (*Beta)->Coordinate, (*Beta)->Ring);
                Psi = new ည(Lambda, Omicron, Knowledge);
                Lambda->Rod->Gamma--;
                Lambda->Cone->Gamma--;

                Beta++;
                if (Beta == Delta.end() || (*Beta)->Secret != Secret) {
                    return;
                }
            }

            Phi += Psi->Psi->Rod->Avail((*Beta)->Signal) % Math::Prime;

            Beta++;
            if (Beta == Delta.end() || (*Beta)->Secret != Secret) {
                delete Iota;
                return;
            }
            Omicron = *Beta;

            Beta++;
            if (Beta == Delta.end() || (*Beta)->Secret != Secret) {
                delete Iota;
                return;
            }
            Lambda = Mu->Rho->Sigma->Pi(*Beta, (*Beta)->Manifold, (*Beta)->Ring);
            Xi = new ည(Lambda, Omicron, !Knowledge);
            Lambda->Rod->Gamma--;
            Lambda->Cone->Gamma--;

            Iota->Secret = Phi;
            Tau = new ညြ(Rho, Psi, Xi);
            Theta = new Tod(Tau, Iota, Psi);
            Rong.push_back(Theta);

            Tau->Gamma--;

            Iota->Gamma--;
            Iota = Mu->Rho->Mu->Mu->Mu->Pi(333);
            Beta++;
            if (Beta == Delta.end() || (*Beta)->Secret != Secret) {
                if (Iota->Gamma == 1) delete Iota; else Iota->Gamma--;
                delete Psi;
                Psi = nullptr;
                if (Xi->Gamma == 1) delete Xi; else Xi->Gamma--;
                return;
            }
            int step = 0;
            while (Beta != Delta.end() || (*Beta)->Secret != Secret) {
                switch (step) {
                case 0:
                    Phi += Xi->Psi->Rod->Avail((*Beta)->Foundation) % Math::Prime;
                    break;
                case 1:
                    Phi += Rho->Psi->Rod->Avail((*Beta)->Channel) % Math::Prime;
                    break;
                case 2:
                    Phi += Psi->Psi->Rod->Avail((*Beta)->Signal) % Math::Prime;
                    break;
                }

                Beta++;
                if (Beta == Delta.end() || (*Beta)->Secret != Secret) {
                    if (Iota->Gamma == 1) delete Iota; else Iota->Gamma--;
                    delete Psi;
                    Psi = nullptr;
                    if (Xi->Gamma == 1) delete Xi; else Xi->Gamma--;
                    return;
                }
                Omicron = *Beta;

                Beta++;
                if (Beta == Delta.end() || (*Beta)->Secret != Secret) {
                    if (Iota->Gamma == 1) delete Iota; else Iota->Gamma--;
                    delete Psi;
                    Psi = nullptr;
                    if (Xi->Gamma == 1) delete Xi; else Xi->Gamma--;
                    return;
                }
                Lambda = Mu->Rho->Sigma->Pi(*Beta, (*Beta)->Manifold, (*Beta)->Ring);
                if (Xi->Gamma == 1) delete Xi; else Xi->Gamma--;
                Xi = new ည(Lambda, Omicron, !Knowledge);
                Lambda->Rod->Gamma--;
                Lambda->Cone->Gamma--;

                Iota->Secret = Phi;
                Tau = new ညြ(Rho, Psi, Xi);
                Theta = new Tod(Tau, Iota, Psi);
                Rong.push_back(Theta);

                Tau->Gamma--;

                Iota->Gamma--;
                Iota = Mu->Rho->Mu->Mu->Mu->Pi(333);
                Beta++;
                if (Beta == Delta.end() || (*Beta)->Secret != Secret) {
                    if (Iota->Gamma == 1) delete Iota; else Iota->Gamma--;
                    delete Psi;
                    Psi = nullptr;
                    if (Xi->Gamma == 1) delete Xi; else Xi->Gamma--;
                    return;
                }
                if (++step > 2) step = 0;
            }
        }

        void Alpha() {
            int local_count;

            short queue_max = 50;
            int sleep_time = 100;

            for (;;) {
                Mu_Mutex.lock();
                if (!AwaitingAlpha) {
                    Mu_Mutex.unlock();
                    while (!AwaitingAlpha)
                        std::this_thread::sleep_for(chrono::milliseconds(rand() % 40));
                    Mu_Mutex.lock();
                }

                if (Delta.size() > queue_max) sleep_time /= 2;
                else if (Delta.size() == 0 && sleep_time < 4000) sleep_time *= 2;
                if (sleep_time < 400) sleep_time = 400;
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
                            if ((*Beta)->Secret == Secret)
                                cnt++;
                            else {
                                if (cnt > 1)
                                    Gamma.push_front(make_tuple(idx, cnt, Secret));
                                idx += cnt;
                                cnt = 1;
                                Secret = (*Beta)->Secret;
                            }
                    }

                    if (Gamma.size() > 0) {
                        list<tuple<short, short, Int64>>::iterator Iota = Gamma.begin();
                        while (Iota != Gamma.end()) {
                            Omega(*Iota);
                            ++Iota;
                        }
                    }
                    AwaitingAlpha = false;

                    local_count = ++counter;
                    SetConsoleTextAttribute(hConsole, 14);
                    wcout << L"簬";
                    if (local_count % 55 == 0) wcout << L"\n";
                    Mu_Mutex.unlock();
                }

                std::this_thread::sleep_for(chrono::milliseconds(rand() % sleep_time));
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

            short queue_max = 40;
            int sleep_time = 100;

            int local_count;

            Beta = new ည();
            for (;;) {
                Mu_Mutex.lock();
                if (Qi.size() == 0)
                    Mu_Mutex.unlock();
                else {
                    Psi = new ည();
                    if (Qi.size() > queue_max) sleep_time /= 2;
                    else if (Qi.size() <= 20 && sleep_time < 4000) sleep_time *= 2;
                    if (sleep_time < 100) sleep_time = 100;
                    while (Qi.size() && !AwaitingAlpha) {
                        Rho = Qi.front();
                        Nu = new ညြ(Beta, Rho, Psi);
                        Eta = Nu->Pi(333);
                        Sigma = new ည(Nu->Eta, Eta, false);
                        Upsilon = new Tod(Nu, Eta, Sigma);
                        Tau = new Zuo(Upsilon);
                        Delta.push_back(Mu->Pi(Tau->Mu->Mu->Eta->Mu));
                        Delta.push_back(Mu->Pi(Tau->Mu->Mu->Eta->Eta));
                        Delta.push_back(Mu->Pi(Tau->Mu->Mu->Eta->Phi));
                        Delta.push_back(Mu->Pi(Tau->Mu->Mu->Eta->Xi));
                        Delta.push_back(Mu->Pi(Tau->Mu->Mu->Mu->Mu->Mu));
                        Delta.push_back(Mu->Pi(Tau->Mu->Mu->Mu->Mu->Eta));
                        Delta.push_back(Mu->Pi(Tau->Mu->Mu->Mu->Mu->Phi));
                        Delta.push_back(Mu->Pi(Tau->Mu->Mu->Mu->Mu->Xi));
                        Delta.push_back(Mu->Pi(Tau->Theta->Xi));
                        AwaitingAlpha = true;

                        if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
                        if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
                        if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
                        if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
                        if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
                        if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
                        Qi.pop_front();

                        local_count = ++counter;
                        SetConsoleTextAttribute(hConsole, 13);
                        wcout << L"篱";
                        if (local_count % 55 == 0) wcout << L"\n";
                    }
                    if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;

                    Mu_Mutex.unlock();
                }
                if (Beta->Gamma != 1) throw 5;
                std::this_thread::sleep_for(chrono::milliseconds(rand() % sleep_time));
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

            short queue_max = 40;
            int sleep_time = 100;

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
                    while (!GammaOneReady || (GammaOneReady && AwaitingAlpha))
                        std::this_thread::sleep_for(chrono::milliseconds(rand() % 40));
                    Mu_Mutex.lock();
                }
                else if (GammaTwoThread) {
                    Mu_Mutex.unlock();
                    while (!GammaTwoReady || (GammaTwoReady && AwaitingAlpha))
                        std::this_thread::sleep_for(chrono::milliseconds(rand() % 40));
                    Mu_Mutex.lock();
                }
                else {
                    Mu_Mutex.unlock();
                    while (!GammaThreeReady || (GammaThreeReady && AwaitingAlpha))
                        std::this_thread::sleep_for(chrono::milliseconds(rand() % 40));
                    Mu_Mutex.lock();
                }

                if (Delta.size() > queue_max) sleep_time /= 2;
                else if (Delta.size() == 0 && sleep_time < 1000) sleep_time *= 2;
                if (sleep_time < 50) sleep_time = 50;
                if (Delta.size() == 0)
                    Mu_Mutex.unlock();
                else {
                    bool Xi = false;
                    Beta = Delta.front();

                    if (GammaOneThread) {
                        Rho = Mu->Rho->Rho->Pi(false);
                        Psi = new ည(Rho, Beta, false);
                        Nu = new ည(Psi->Mu, Beta, false);
                        Eta = new ညြ(Mu->Rho->Mu->Psi, Psi, Nu);
                        Sigma = new Tod(Eta, Beta, Psi);
                        if (Upsilon == nullptr) {
                            Upsilon = Mu->Mu->Mu->Psi->Pi(333);
                            Upsilon->Gamma++;
                        }
                    }
                    else if (GammaTwoThread) {
                        Rho = Mu->Rho->Psi->Pi(false);
                        Psi = new ည(Rho, Beta, false);
                        Nu = new ည(Mu->Rho->Eta->Psi, Beta, true);
                        Eta = new ညြ(Mu->Rho->Mu->Mu->Psi->Theta, Psi, Nu);
                        Sigma = new Tod(Eta, Beta, Psi);
                        if (Upsilon == nullptr) {
                            Upsilon = Sigma->Mu->Pi(333);
                            Upsilon->Gamma++;
                        }
                    }
                    else {
                        Rho = Mu->Rho->Eta->Pi(false);
                        Psi = new ည(Rho, Beta, true);
                        Nu = new ည(Psi->Psi, Beta, true);
                        Eta = new ညြ(Mu->Rho->Mu->Eta, Nu, Psi);
                        Sigma = new Tod(Eta, Beta, Nu);
                        if (Upsilon == nullptr) {
                            Upsilon = Sigma->Psi->Pi(333);
                            Upsilon->Gamma++;
                        }
                    }

                    Beta->Gamma--;
                    Delta.pop_front();
                    while (Delta.size() && !Xi) {
                        if (Upsilon->Pole == 0) Upsilon->Polarize();
                        Beta = Delta.front();

                        if (Beta->Identity == 0) {
                            Faung* Iota;
                            if (GammaOneThread)
                                Iota = new Faung(Beta, Sigma->Mu->Eta->Rod->Secret, Sigma->Psi->Theta->Rho->Signal, Sigma->Tau->Channel, Sigma->Tau->Identity);
                            else if (GammaTwoThread)
                                Iota = new Faung(Beta, Sigma->Psi->Eta->Rod->Secret, Sigma->Tau->Signal, Sigma->Psi->Eta->Cone->Channel, Sigma->Psi->Theta->Rho->Identity);
                            else
                                Iota = new Faung(Beta, Sigma->Psi->Eta->Cone->Secret, Sigma->Mu->Eta->Cone->Signal, Sigma->Mu->Eta->Rod->Channel, Sigma->Psi->Eta->Cone->Identity);
                            Iota->Cone->Gamma++;
                            Delta.push_back(Iota->Cone);
                            delete Iota;
                        }

                        if (Beta->Pole > 0) {
                            Int64 Chi;
                            if (GammaOneThread)
                                Chi = (Upsilon->Coordinate + Beta->Eta) % Math::Prime;
                            else if (GammaTwoThread)
                                Chi = (Upsilon->Coordinate + Beta->Beta) % Math::Prime;
                            else
                                Chi = (Upsilon->Coordinate + Beta->Rho) % Math::Prime;
                            Upsilon->Conjugate(&Chi);
                        }
                        else if (Tau == nullptr) {
                            if (GammaOneThread) {
                                Tau = new Faung(Upsilon, Beta->Secret, Beta->Signal, Beta->Channel, Beta->Identity);
                                Theta = new ည(Tau, Beta, true);
                            }
                            else if (GammaTwoThread) {
                                Tau = new Faung(Upsilon, Beta->Coordinate, Beta->Ring, Beta->Manifold, Beta->Dynamo);
                                Theta = new ည(Tau, Beta, false);
                            }
                            else {
                                Tau = new Faung(Upsilon, Beta->Dynamo, Beta->Ring, Beta->Manifold, Beta->Coordinate);
                                Theta = new ည(Tau, Beta, true);
                            }
                            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
                            if (Tau->Rod->Gamma <= 1 || Tau->Cone->Gamma <= 1) { delete Tau; Tau = nullptr; }
                            else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
                            Qi.push_back(Theta);
                            Xi = true;
                        }
                        else {
                            if (Beta->Pole == 0) {
                                Int64 Xi;
                                if (GammaOneThread)
                                    Xi = (Upsilon->Coordinate + Beta->Element) % Math::Prime;
                                else if (GammaTwoThread)
                                    Xi = (Upsilon->Coordinate + Beta->Eta) % Math::Prime;
                                else
                                    Xi = (Upsilon->Coordinate + Beta->Beta) % Math::Prime;
                                Upsilon->Conjugate(&Xi);
                            }
                            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;

                            if (GammaOneThread)
                                Upsilon = Mu->Mu->Mu->Psi->Pi(333);
                            else if (GammaTwoThread)
                                Upsilon = Sigma->Mu->Pi(333);
                            else
                                Upsilon = Sigma->Psi->Pi(333);
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
                    }
                    else if (GammaTwoThread) {
                        GammaOneReady = false;
                        GammaTwoReady = false;
                        GammaThreeReady = true;
                    }
                    else {
                        GammaOneReady = true;
                        GammaTwoReady = false;
                        GammaThreeReady = false;
                    }

                    Mu_Mutex.unlock();
                }

                Mu_Mutex.lock();
                local_count = ++counter;
                SetConsoleTextAttribute(hConsole, 12);
                if (GammaOneThread) {
                    wcout << L"筁";
                }
                else if (GammaTwoThread)
                {
                    wcout << L"笫";
                }
                else
                {
                    wcout << L"笩";
                }

                if (local_count % 55 == 0) wcout << L"\n";
                Mu_Mutex.unlock();

                std::this_thread::sleep_for(chrono::milliseconds(rand() % sleep_time));
            }
        }
        */

        void Beta() {
            Fa* Iota;
            Faung* Rho;
            ည* Psi;
            ည* Nu;
            ညြ* Eta;
            Tod* Sigma;
            Faung* Upsilon;
            Fa* Tau;

            bool BetaOneThread = false;

            short queue_max = 50;
            int sleep_time = 100;

            int local_count;

            Mu_Mutex.lock();
            if (BetaOne == false) {
                BetaOneThread = true;
                BetaOne = true;
            }
            Mu_Mutex.unlock();

            for (;;) {
                Mu_Mutex.lock();
                if (Omicron.size() > queue_max) sleep_time /= 2;
                else if (Omicron.size() == 0 && sleep_time < 4000) sleep_time *= 2;
                if (sleep_time < 50) sleep_time = 50;
                if (Omicron.size() == 0)
                    Mu_Mutex.unlock();
                else {
                    Tau = nullptr;
                    while (Omicron.size()) {
                        Iota = Omicron.back();
                        throw 500;
                        if (Tau == nullptr)
                            Rho = Mu->Rho->Psi->Pi(false);
                        else
                            if (BetaOneThread)
                                Rho = new Faung(Tau, Iota->Secret, Iota->Signal, Iota->Channel, Iota->Identity);
                            else {
                                Rho = new Faung(Tau, Iota->Dynamo, Iota->Ring, Iota->Barn, Iota->Manifold);
                            }

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

                        Upsilon = new Faung(Sigma->Mu->Upsilon, Sigma->Upsilon);
                        Tau = Sigma->Psi->Pi(true);

                        if (Iota->Gamma == 1) delete Iota; else Iota->Gamma--;
                        if (Rho->Rod->Gamma <= 1 || Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
                        if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
                        if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
                        if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
                        if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
                        delete Upsilon;

                        Omicron.pop_back();
                    }
                    Mu_Mutex.unlock();
                }
                Mu_Mutex.lock();
                local_count = ++counter;
                SetConsoleTextAttribute(hConsole, 11);
                wcout << ((BetaOneThread) ? L"笚" : L"笛");
                if (local_count % 55 == 0) wcout << L"\n";
                Mu_Mutex.unlock();

                std::this_thread::sleep_for(chrono::milliseconds(rand() % sleep_time));
            }
        }

        void Lambda() {
            short queue_max = 40;
            int sleep_time = 100;

            int local_count;

            for (;;) {
                Mu_Mutex.lock();
                Fa* Beta;

                while (Omicron.size() > queue_max) {
                    Mu_Mutex.unlock();
                    if (sleep_time < 6000)
                        sleep_time *= 2;
                    std::this_thread::sleep_for(chrono::milliseconds(rand() % sleep_time));
                    Mu_Mutex.lock();
                }
                if (Omicron.size() < 4)
                    sleep_time /= 2;
                if (sleep_time < 200) sleep_time = 200;

                Beta = Mu->Pi();

                Omicron.push_front(Beta);

                local_count = ++counter;
                SetConsoleTextAttribute(hConsole, 10);
                wcout << L"第";
                if (local_count % 55 == 0) wcout << L"\n";
                Mu_Mutex.unlock();

                std::this_thread::sleep_for(chrono::milliseconds(rand() % sleep_time));
            }
        }
    };
}