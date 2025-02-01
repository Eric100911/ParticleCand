#define ReadTree_cxx
//#define SHOW_DEBUG
#ifdef SHOW_DEBUG
#define VERBOSE
#endif

//#define CUT_GLOBAL_VTX_PROB
#define CUT_FROM_3J

//#define CUT_MUON_ID_LOOSE

#define CUT_MUON_ID_SOFT

#define CUT_UPS_TRY

#define ALLOW_OVERLAP

#include "/afs/cern.ch/user/c/chiw/cernbox/JpsiJpsiUps/ParticleCand/interface/ReadTree.h"
#include "/afs/cern.ch/user/c/chiw/cernbox/JpsiJpsiUps/ParticleCand/src/ParticleCand.C"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <memory>

void ReadTree::Loop()
{
    if (fChain == 0) return;

    Long64_t nentries = fChain->GetEntriesFast();

    const unsigned int nBin = 20;

    // Define mass histograms for Jpsi, Ups and Pri.
    TH1F* hJpsi1 = new TH1F("hJpsi1", "Jpsi1 mass", nBin, 2.5, 3.5);
    TH1F* hJpsi2 = new TH1F("hJpsi2", "Jpsi2 mass", nBin, 2.5, 3.5);
    TH1F* hUps   = new TH1F("hUps", "Ups mass", nBin, 8.0, 12.0);
    TH1F* hPri   = new TH1F("hPri", "Pri mass", nBin, 0.0, 100.0);

    // Define pT histograms for Jpsi, Ups and Pri.
    TH1F* hJpsi1_pT = new TH1F("hJpsi1_pT", "Jpsi1 pT", nBin, 0.0, 100.0);
    TH1F* hJpsi2_pT = new TH1F("hJpsi2_pT", "Jpsi2 pT", nBin, 0.0, 100.0);
    TH1F* hUps_pT   = new TH1F("hUps_pT", "Ups pT", nBin, 0.0, 100.0);
    TH1F* hPri_pT   = new TH1F("hPri_pT", "Pri pT", nBin, 0.0, 100.0);

    // Define eta histograms for Jpsi, Ups and Pri.
    TH1F* hJpsi1_eta = new TH1F("hJpsi1_eta", "Jpsi1 eta", nBin, -3.0, 3.0);
    TH1F* hJpsi2_eta = new TH1F("hJpsi2_eta", "Jpsi2 eta", nBin, -3.0, 3.0);
    TH1F* hUps_eta   = new TH1F("hUps_eta", "Ups eta", nBin, -3.0, 3.0);
    TH1F* hPri_eta   = new TH1F("hPri_eta", "Pri eta", nBin, -3.0, 3.0);

    // Define vertex probability histograms for Jpsi, Ups and Pri.
    TH1F* hJpsi1_vProb = new TH1F("hJpsi1_vProb", "Jpsi1 vertex probability", nBin, 0.0, 1.0);
    TH1F* hJpsi2_vProb = new TH1F("hJpsi2_vProb", "Jpsi2 vertex probability", nBin, 0.0, 1.0);
    TH1F* hUps_vProb   = new TH1F("hUps_vProb", "Ups vertex probability", nBin, 0.0, 1.0);
    TH1F* hPri_vProb   = new TH1F("hPri_vProb", "Pri vertex probability", nBin, 0.0, 1.0);

    // Define mass histograms for Jpsi, Ups and Pri passing the cut.
    TH1F* hJpsi1_cut = new TH1F("hJpsi1_cut", "Jpsi1 mass cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 2.5, 3.5);
    TH1F* hJpsi2_cut = new TH1F("hJpsi2_cut", "Jpsi2 mass cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 2.5, 3.5);
    TH1F* hUps_cut   = new TH1F("hUps_cut", "Ups mass cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 8.0, 12.0);
    TH1F* hPri_cut   = new TH1F("hPri_cut", "Pri mass cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 100.0);

    // Define pT histograms for Jpsi, Ups and Pri passing the cut.
    TH1F* hJpsi1_pT_cut = new TH1F("hJpsi1_pT_cut", "Jpsi1 pT cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 40.0);
    TH1F* hJpsi2_pT_cut = new TH1F("hJpsi2_pT_cut", "Jpsi2 pT cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 40.0);
    TH1F* hUps_pT_cut   = new TH1F("hUps_pT_cut", "Ups pT cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 40.0);
    TH1F* hPri_pT_cut   = new TH1F("hPri_pT_cut", "Pri pT cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 40.0);

    // Define eta histograms for Jpsi, Ups and Pri passing the cut.
    TH1F* hJpsi1_eta_cut = new TH1F("hJpsi1_eta_cut", "Jpsi1 eta cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, -3.0, 3.0);
    TH1F* hJpsi2_eta_cut = new TH1F("hJpsi2_eta_cut", "Jpsi2 eta cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, -3.0, 3.0);
    TH1F* hUps_eta_cut   = new TH1F("hUps_eta_cut", "Ups eta cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, -3.0, 3.0);
    TH1F* hPri_eta_cut   = new TH1F("hPri_eta_cut", "Pri eta cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, -3.0, 3.0);

    // Define vertex probability histograms for Jpsi, Ups and Pri passing the cut.
    TH1F* hJpsi1_vProb_cut = new TH1F("hJpsi1_vProb_cut", "Jpsi1 vertex probability cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 1.0);
    TH1F* hJpsi2_vProb_cut = new TH1F("hJpsi2_vProb_cut", "Jpsi2 vertex probability cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 1.0);
    TH1F* hUps_vProb_cut   = new TH1F("hUps_vProb_cut", "Ups vertex probability cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 1.0);
    TH1F* hPri_vProb_cut   = new TH1F("hPri_vProb_cut", "Pri vertex probability cut pT [Jpsi6 Ups4 Mu Ups_Mu4] MuID Soft", nBin, 0.0, 1.0);


    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;

        // Initialize the total set of candidates.
        std::vector<std::shared_ptr<ParticleCand> > CandList;
        ParticleCand tempCand;
        ParticleCand::PartIdxList_t tempList;
        double temp_massChi2;

        const double vtxProb_Thr = 0.05;

        // Marker
        #ifdef SHOW_DEBUG
        printf("\n>>>>> Begin new event %lld <<<<<\n", jentry);
        #endif

        // Display event number once 500 events.
        if(jentry % 500 == 0){
            printf("Processing event %lld\n", jentry);
        }
        // Loop over all candidates.
        size_t nCands = Jpsi_1_mass->size();

        #ifdef VERBOSE
        printf("number of candidate = %lld\n", nCands);
        #endif

        if(nCands == 0) continue;

        // Calculate muon pT, eta, phi from px, py and pz.
        std::vector<double> mu_pT;
        std::vector<double> mu_eta;
        std::vector<double> mu_phi;
        
        for(Long64_t iMuon=0; iMuon < nMu; iMuon++){
            // Calculate pT, eta, phi from px, py and pz.
            double pT  = sqrt(muPx->at(iMuon) * muPx->at(iMuon) + muPy->at(iMuon) * muPy->at(iMuon));
            double eta = 0.5 * log((pT + muPz->at(iMuon)) / (pT - muPz->at(iMuon)));
            double phi = atan2(muPy->at(iMuon), muPx->at(iMuon));
            mu_pT.push_back(pT);
            mu_eta.push_back(eta);
            mu_phi.push_back(phi);
        }

        for (Long64_t iCand=0; iCand < nCands; iCand++) {
            // Exclude failed fitting.
            if(Pri_mass->at(iCand) <= 0.0) continue;

            #ifdef CUT_GLOBAL_VTX_PROB
            // Cut from vertex probability
            if(Pri_VtxProb->at(iCand) < vtxProb_Thr) continue;
            if(Jpsi_1_VtxProb->at(iCand) < vtxProb_Thr) continue;
            if(Jpsi_2_VtxProb->at(iCand) < vtxProb_Thr) continue;
            if(Ups_VtxProb->at(iCand) < vtxProb_Thr) continue;
            #endif

            // Further cuts are applied here.
            bool passCut = true;

            // Register the candidate final state muons.
            tempList.push_back(Jpsi_1_mu_1_Idx->at(iCand));
            tempList.push_back(Jpsi_1_mu_2_Idx->at(iCand));
            tempList.push_back(Jpsi_2_mu_1_Idx->at(iCand));
            tempList.push_back(Jpsi_2_mu_2_Idx->at(iCand));
            tempList.push_back(Ups_mu_1_Idx->at(iCand));
            tempList.push_back(Ups_mu_2_Idx->at(iCand));
            tempCand.AddParticle(ParticleCand::PartType::Muon, tempList);

            #ifdef CUT_FROM_3J
            // Cut from 3J
            // Muons that decay from Jpsi and Ups:
            // require pT > 3.5GeV/c for abs(eta) < 1.2 and pT > 2.5GeV/c for 1.2 < abs(eta) < 2.4
            for(auto idx : tempList){
                if(mu_pT[idx] < 3.5 && abs(mu_eta[idx]) < 1.2){
                    passCut = false;
                    break;
                }
                if(mu_pT[idx] < 2.5 && abs(mu_eta[idx]) > 1.2 && abs(mu_eta[idx]) < 2.4){
                    passCut = false;
                    break;
                }
                if(abs(mu_eta[idx]) > 2.4){
                    passCut = false;
                    break;
                }
            }

            // For Jpsi: require pT > 6GeV/c and abs(eta) < 2.4
            if(Jpsi_1_pt->at(iCand) <= 6.0 || abs(Jpsi_1_eta->at(iCand)) > 2.4){
                passCut = false;
            }
            if(Jpsi_2_pt->at(iCand) <= 6.0 || abs(Jpsi_2_eta->at(iCand)) > 2.4){
                passCut = false;
            }

            #endif

            #ifdef CUT_MUON_ID_LOOSE
            // Check by muIsPatLooseMuon
            for(auto idx : tempList){
                if(!muIsPatLooseMuon->at(idx)){
                    passCut = false;
                    break;
                }
            }

            #endif

            #ifdef CUT_MUON_ID_SOFT
            // Check by muIsPatSoftMuon
            for(auto idx : tempList){
                if(!muIsPatSoftMuon->at(idx)){
                    passCut = false;
                    break;
                }
            }

            #endif

            #ifdef CUT_UPS_TRY
            // For Upsilon: try a loose cut. pT > 6GeV/c and abs(eta) < 2.4
            if(Ups_pt->at(iCand) <= 6.0 || abs(Ups_eta->at(iCand)) > 2.4){
                passCut = false;
            }
            // Additional cut for muons from Ups: pT > 4 GeV/c
            if(mu_pT[Ups_mu_1_Idx->at(iCand)] <= 4.0 || mu_pT[Ups_mu_2_Idx->at(iCand)] <= 4.0){
                passCut = false;
            }
            #endif




            // Calculate Chi2 from massDiff and massErr of Jpsi and Ups.
            temp_massChi2 =   (Jpsi_1_massDiff->at(iCand) / Jpsi_1_massErr->at(iCand))
                            * (Jpsi_1_massDiff->at(iCand) / Jpsi_1_massErr->at(iCand))
                            + (Jpsi_2_massDiff->at(iCand) / Jpsi_2_massErr->at(iCand))
                            * (Jpsi_2_massDiff->at(iCand) / Jpsi_2_massErr->at(iCand))
                            + (Ups_massDiff->at(iCand) / Ups_massErr->at(iCand))
                            * (Ups_massDiff->at(iCand) / Ups_massErr->at(iCand));
            tempCand.SetScore(temp_massChi2);
            tempCand.SetId(iCand);
            tempCand.SetCutResult(passCut);
            CandList.push_back(std::make_shared<ParticleCand>(tempCand));
            tempList.clear();
            tempCand.Clear();
        }
        // Sort all candidates for later use.
        std::sort(CandList.begin(), CandList.end(), [](const std::shared_ptr<ParticleCand>& a, 
                                                       const std::shared_ptr<ParticleCand>& b){
            return a->GetScore() < b->GetScore();
        });

        // Print out the sorted candidates.
        #ifdef VERBOSE
        for(auto& cand : CandList){
            printf("[ %d ] %.4f ",cand->GetId() ,cand->GetScore());
            puts(cand->ToString().c_str());
        }
        #endif

        #ifdef ALLOW_OVERLAP
        // Greedy algorithm to mark the top-10 candidates.
        std::vector<std::shared_ptr<ParticleCand> > SelectedCands_raw;
        for(auto& cand : CandList){
            if(SelectedCands_raw.size() < 20){
                SelectedCands_raw.push_back(cand);
            }
            else{
                break;
            }
        }

        std::vector<std::shared_ptr<ParticleCand> > SelectedCands_cut;
        for(auto& cand : CandList){
            if(!cand->PassCut()){
                continue;
            }
            if(SelectedCands_cut.size() < 20){
                SelectedCands_cut.push_back(cand);
            }
            else{
                break;
            }
        }

        #else
        // Greedy algorithm to find a non-overlapping combination.
        std::vector<std::shared_ptr<ParticleCand> > SelectedCands_raw;
        for(auto& cand : CandList){
            if(SelectedCands_raw.empty()){
                SelectedCands_raw.push_back(cand);
            }
            else{
                bool isOverlap = false;
                for(auto& selCand : SelectedCands_raw){
                    if(cand->Overlap(*selCand)){
                        isOverlap = true;
                        break;
                    }
                }
                if(!isOverlap){
                    SelectedCands_raw.push_back(cand);
                }
            }
        }

        std::vector<std::shared_ptr<ParticleCand> > SelectedCands_cut;
        for(auto& cand : CandList){
            if(!cand->PassCut()){
                continue;
            }
            if(SelectedCands_cut.empty()){
                SelectedCands_cut.push_back(cand);
            }
            else{
                bool isOverlap = false;
                for(auto& selCand : SelectedCands_cut){
                    if(cand->Overlap(*selCand)){
                        isOverlap = true;
                        break;
                    }
                }
                if(!isOverlap){
                    SelectedCands_cut.push_back(cand);
                }
            }
        }
        #endif

        // Print out the selected candidates with the highest score.
        #ifdef VERBOSE
        printf("\n Selected candidates: %lld\n", SelectedCands_raw.size());
        for(auto& cand : SelectedCands_raw){
            printf("[ %d ] %.4f ",cand->GetId() ,cand->GetScore());
            puts(cand->ToString().c_str());
        }
        #endif

        // Draw the selected candidates.
        for(auto& cand : SelectedCands_raw){
            // Fill mass histograms.
            hJpsi1->Fill(Jpsi_1_mass->at(cand->GetId()));
            hJpsi2->Fill(Jpsi_2_mass->at(cand->GetId()));
            hUps->Fill(Ups_mass->at(cand->GetId()));
            hPri->Fill(Pri_mass->at(cand->GetId()));
            // Fill pT histograms.
            hJpsi1_pT->Fill(Jpsi_1_pt->at(cand->GetId()));
            hJpsi2_pT->Fill(Jpsi_2_pt->at(cand->GetId()));
            hUps_pT->Fill(Ups_pt->at(cand->GetId()));
            hPri_pT->Fill(Pri_pt->at(cand->GetId()));
            // Fill eta histograms.
            hJpsi1_eta->Fill(Jpsi_1_eta->at(cand->GetId()));
            hJpsi2_eta->Fill(Jpsi_2_eta->at(cand->GetId()));
            hUps_eta->Fill(Ups_eta->at(cand->GetId()));
            hPri_eta->Fill(Pri_eta->at(cand->GetId()));
            // Fill vertex probability histograms.
            hJpsi1_vProb->Fill(Jpsi_1_VtxProb->at(cand->GetId()));
            hJpsi2_vProb->Fill(Jpsi_2_VtxProb->at(cand->GetId()));
            hUps_vProb->Fill(Ups_VtxProb->at(cand->GetId()));
            hPri_vProb->Fill(Pri_VtxProb->at(cand->GetId()));
        }

        // Draw the selected candidates passing the cut.
        for(auto& cand : SelectedCands_cut){
            // Fill mass histograms.
            hJpsi1_cut->Fill(Jpsi_1_mass->at(cand->GetId()));
            hJpsi2_cut->Fill(Jpsi_2_mass->at(cand->GetId()));
            hUps_cut->Fill(Ups_mass->at(cand->GetId()));
            hPri_cut->Fill(Pri_mass->at(cand->GetId()));
            // Fill pT histograms.
            hJpsi1_pT_cut->Fill(Jpsi_1_pt->at(cand->GetId()));
            hJpsi2_pT_cut->Fill(Jpsi_2_pt->at(cand->GetId()));
            hUps_pT_cut->Fill(Ups_pt->at(cand->GetId()));
            hPri_pT_cut->Fill(Pri_pt->at(cand->GetId()));
            // Fill eta histograms.
            hJpsi1_eta_cut->Fill(Jpsi_1_eta->at(cand->GetId()));
            hJpsi2_eta_cut->Fill(Jpsi_2_eta->at(cand->GetId()));
            hUps_eta_cut->Fill(Ups_eta->at(cand->GetId()));
            hPri_eta_cut->Fill(Pri_eta->at(cand->GetId()));
            // Fill vertex probability histograms.
            hJpsi1_vProb_cut->Fill(Jpsi_1_VtxProb->at(cand->GetId()));
            hJpsi2_vProb_cut->Fill(Jpsi_2_VtxProb->at(cand->GetId()));
            hUps_vProb_cut->Fill(Ups_VtxProb->at(cand->GetId()));
            hPri_vProb_cut->Fill(Pri_VtxProb->at(cand->GetId()));
        }


        // Marker
        #ifdef SHOW_DEBUG
        puts(">>>>> End of event <<<<<");
        #endif
    }
    // Display the histograms.
    // Mass histograms.
    TCanvas* c1 = new TCanvas("c1", "c1", 800, 600);
    c1->Divide(2,2);
    c1->cd(1); hJpsi1->Draw();
    c1->cd(2); hJpsi2->Draw();
    c1->cd(3); hUps->Draw();
    c1->cd(4); hPri->Draw();
    // Save png file.
    c1->SaveAs("mass_raw_0Bv1.png");

    // pT histograms.
    TCanvas* c3 = new TCanvas("c3", "c3", 800, 600);
    c3->Divide(2,2);
    c3->cd(1); hJpsi1_pT->Draw();
    c3->cd(2); hJpsi2_pT->Draw();
    c3->cd(3); hUps_pT->Draw();
    c3->cd(4); hPri_pT->Draw();
    // Save png file.
    c3->SaveAs("pT_raw_0Bv1.png");

    // eta histograms.
    TCanvas* c4 = new TCanvas("c4", "c4", 800, 600);
    c4->Divide(2,2);
    c4->cd(1); hJpsi1_eta->Draw();
    c4->cd(2); hJpsi2_eta->Draw();
    c4->cd(3); hUps_eta->Draw();
    c4->cd(4); hPri_eta->Draw();
    // Save png file.
    c4->SaveAs("eta_raw_0Bv1.png");

    // vertex probability histograms.
    TCanvas* c5 = new TCanvas("c5", "c5", 800, 600);
    c5->Divide(2,2);
    c5->cd(1); hJpsi1_vProb->Draw();
    c5->cd(2); hJpsi2_vProb->Draw();
    c5->cd(3); hUps_vProb->Draw();
    c5->cd(4); hPri_vProb->Draw();
    // Save png file.
    c5->SaveAs("vProb_raw_0Bv1.png");

    // Display the histograms passing the cut.
    TCanvas* c2 = new TCanvas("c2", "c2", 800, 600);
    c2->Divide(2,2);
    c2->cd(1); hJpsi1_cut->Draw();
    c2->cd(2); hJpsi2_cut->Draw();
    c2->cd(3); hUps_cut->Draw();
    c2->cd(4); hPri_cut->Draw();
    // Save png file.
    c2->SaveAs("mass_cut_0Bv1.png");

    // pT histograms.
    TCanvas* c6 = new TCanvas("c6", "c6", 800, 600);
    c6->Divide(2,2);
    c6->cd(1); hJpsi1_pT_cut->Draw();
    c6->cd(2); hJpsi2_pT_cut->Draw();
    c6->cd(3); hUps_pT_cut->Draw();
    c6->cd(4); hPri_pT_cut->Draw();
    // Save png file.
    c6->SaveAs("pT_cut_0Bv1.png");


    // eta histograms.
    TCanvas* c7 = new TCanvas("c7", "c7", 800, 600);
    c7->Divide(2,2);
    c7->cd(1); hJpsi1_eta_cut->Draw();
    c7->cd(2); hJpsi2_eta_cut->Draw();
    c7->cd(3); hUps_eta_cut->Draw();
    c7->cd(4); hPri_eta_cut->Draw();
    // Save png file.
    c7->SaveAs("eta_cut_0Bv1.png");

    // vertex probability histograms.
    TCanvas* c8 = new TCanvas("c8", "c8", 800, 600);
    c8->Divide(2,2);
    c8->cd(1); hJpsi1_vProb_cut->Draw();
    c8->cd(2); hJpsi2_vProb_cut->Draw();
    c8->cd(3); hUps_vProb_cut->Draw();
    c8->cd(4); hPri_vProb_cut->Draw();
    // Save png file.
    c8->SaveAs("vProb_cut_0Bv1.png");
}
