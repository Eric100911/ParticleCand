#define ReadTree_cxx
#include "../interface/ReadTree.h"
#include "../src/ParticleCand.C"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

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
        std::vector<ParticleCand> CandList;
        ParticleCand tempCand;
        ParticleCand::PartIdxList_t tempList;

        // Loop over all candidates.
        nCands = Jpsi_1_mass->size();
        for (Long64_t iCand=0; iCand<nCands; iCand++) {
            // Exclude failed fitting.
            if(Pri_mass->at(iCand) <= 0.0) continue;
            // Register the candidate final state particles.
            tempList.push_back(Jpsi_1_mu_1_Idx->at(iCand));
            tempList.push_back(Jpsi_1_mu_2_Idx->at(iCand));
            tempList.push_back(Jpsi_2_mu_1_Idx->at(iCand));
            tempList.push_back(Jpsi_2_mu_2_Idx->at(iCand));
            tempList.push_back(Ups_mu_1_Idx->at(iCand));
            tempList.push_back(Ups_mu_2_Idx->at(iCand));
            tempCand.AddParticle(ParticleCand::PartType::Muon, tempList);
            
            // Print out the overlaps.
            for(auto& cand : CandList){
                if(tempCand.Overlap(cand)){
                    std::cout << "Overlap found!" << std::endl;
                    
                }
            }

            // Add the current one into the candidate list.
            CandList.push_back(tempCand);
            tempCand.Clear();
            tempList.clear();

        }
    }
}