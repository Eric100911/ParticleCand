#define ReadTree_cxx
#include "../interface/ReadTree.h"
#include "../src/ParticleCand.C"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <memory>

void ReadTree::Loop()
{
//   In a ROOT session, you can do:
//      root> .L ReadTree.C
//      root> ReadTree t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
    if (fChain == 0) return;

    Long64_t nentries = fChain->GetEntriesFast();

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

        printf("\n>>>>> Begin new event %lld <<<<<\n", jentry);

        // Loop over all candidates.
        size_t nCands = Jpsi_1_mass->size();
        printf("number of candidate = %lld\n", nCands);
        for (Long64_t iCand=0; iCand < nCands; iCand++) {
            // Exclude failed fitting.
            if(Pri_mass->at(iCand) <= 0.0) continue;
            // Register the candidate final state muons.
            tempList.push_back(Jpsi_1_mu_1_Idx->at(iCand));
            tempList.push_back(Jpsi_1_mu_2_Idx->at(iCand));
            tempList.push_back(Jpsi_2_mu_1_Idx->at(iCand));
            tempList.push_back(Jpsi_2_mu_2_Idx->at(iCand));
            tempList.push_back(Ups_mu_1_Idx->at(iCand));
            tempList.push_back(Ups_mu_2_Idx->at(iCand));
            tempCand.AddParticle(ParticleCand::PartType::Muon, tempList);

            // Calculate Chi2 from massDiff and massErr of Jpsi and Ups.
            temp_massChi2 =   (Jpsi_1_massDiff->at(iCand) / Jpsi_1_massErr->at(iCand))
                            * (Jpsi_1_massDiff->at(iCand) / Jpsi_1_massErr->at(iCand))
                            + (Jpsi_2_massDiff->at(iCand) / Jpsi_2_massErr->at(iCand))
                            * (Jpsi_2_massDiff->at(iCand) / Jpsi_2_massErr->at(iCand))
                            + (Ups_massDiff->at(iCand) / Ups_massErr->at(iCand))
                            * (Ups_massDiff->at(iCand) / Ups_massErr->at(iCand));
            tempCand.SetScore(temp_massChi2);
            CandList.push_back(std::make_shared<ParticleCand>(tempCand));
            tempList.clear();
            tempCand.Clear();
        }
        // Sort all candidates for later use.
        printf("\n Overall valid candadates: %lld\n \n", CandList.size());
        std::sort(CandList.begin(), CandList.end(), [](const std::shared_ptr<ParticleCand>& a, 
                                                       const std::shared_ptr<ParticleCand>& b){
            return a->GetScore() < b->GetScore();
        });
        // Print out the sorted candidates.
        for(auto& cand : CandList){
            printf("%s\n", cand->ToString().c_str());
        }
        // Greedy algorithm to find a non-overlapping combination.
        std::vector<std::shared_ptr<ParticleCand> > SelectedCands;
        for(auto& cand : CandList){
            if(SelectedCands.empty()){
                SelectedCands.push_back(cand);
            }
            else{
                bool isOverlap = false;
                for(auto& selCand : SelectedCands){
                    if(cand->Overlap(*selCand)){
                        isOverlap = true;
                        break;
                    }
                }
                if(!isOverlap){
                    SelectedCands.push_back(cand);
                }
            }
        }
        // Print out the selected candidates with the highest score.
        printf("\n Selected candidates: %lld\n", SelectedCands.size());
        for(auto& cand : SelectedCands){
            printf("%.4f %s\n", cand->GetScore(), cand->ToString().c_str());
        }
        puts(">>>>> End of event <<<<<");
    }
}
