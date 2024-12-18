//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Dec 17 22:30:41 2024 by ROOT version 6.24/06
// from TTree X_data/X(3872) Data
// found on file: ../../../TripleMeson-ntuple.root
//////////////////////////////////////////////////////////

#ifndef ReadTree_h
#define ReadTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class ReadTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<unsigned int> *TrigRes;
   vector<string>  *TrigNames;
   vector<string>  *MatchTriggerNames;
   vector<unsigned int> *L1TrigRes;
   UInt_t          evtNum;
   UInt_t          runNum;
   UInt_t          lumiNum;
   UInt_t          nGoodPrimVtx;
   Float16_t       priVtxX;
   Float16_t       priVtxY;
   Float16_t       priVtxZ;
   Float16_t       priVtxXE;
   Float16_t       priVtxYE;
   Float16_t       priVtxZE;
   Float16_t       priVtxChiNorm;
   Float16_t       priVtxChi;
   Float16_t       priVtxCL;
   vector<float>   *PriVtxXCorrX;
   vector<float>   *PriVtxXCorrY;
   vector<float>   *PriVtxXCorrZ;
   vector<double>  *PriVtxXCorrEX;
   vector<double>  *PriVtxXCorrEY;
   vector<double>  *PriVtxXCorrEZ;
   vector<float>   *PriVtxXCorrC2;
   vector<float>   *PriVtxXCorrCL;
   UInt_t          nMu;
   vector<float>   *muPx;
   vector<float>   *muPy;
   vector<float>   *muPz;
   vector<float>   *muD0;
   vector<float>   *muD0E;
   vector<float>   *muDz;
   vector<float>   *muChi2;
   vector<float>   *muGlChi2;
   vector<float>   *mufHits;
   vector<bool>    *muFirstBarrel;
   vector<bool>    *muFirstEndCap;
   vector<float>   *muDzVtx;
   vector<float>   *muDxyVtx;
   vector<int>     *muNDF;
   vector<int>     *muGlNDF;
   vector<int>     *muPhits;
   vector<int>     *muShits;
   vector<int>     *muGlMuHits;
   vector<int>     *muType;
   vector<int>     *muQual;
   vector<int>     *muTrack;
   vector<float>   *muCharge;
   vector<float>   *muIsoratio;
   vector<int>     *munMatchedSeg;
   vector<int>     *muIsGoodSoftMuonNewIlseMod;
   vector<int>     *muIsGoodSoftMuonNewIlse;
   vector<int>     *muIsGoodLooseMuonNew;
   vector<int>     *muIsGoodLooseMuon;
   vector<int>     *muIsGoodTightMuon;
   vector<int>     *muJpsiFilterRes;
   vector<int>     *muIsPatLooseMuon;
   vector<int>     *muIsPatTightMuon;
   vector<int>     *muIsPatSoftMuon;
   vector<int>     *muIsPatMediumMuon;
   vector<int>     *muIsJpsiTrigMatch;
   vector<int>     *muIsUpsTrigMatch;
   vector<float>   *muMVAMuonID;
   vector<float>   *musegmentCompatibility;
   vector<float>   *mupulldXdZ_pos_noArb;
   vector<float>   *mupulldYdZ_pos_noArb;
   vector<float>   *mupulldXdZ_pos_ArbDef;
   vector<float>   *mupulldYdZ_pos_ArbDef;
   vector<float>   *mupulldXdZ_pos_ArbST;
   vector<float>   *mupulldYdZ_pos_ArbST;
   vector<float>   *mupulldXdZ_pos_noArb_any;
   vector<float>   *mupulldYdZ_pos_noArb_any;
   vector<int>     *muUpsVrtxMatch;
   vector<int>     *muL3TriggerMatch;
   vector<float>   *Jpsi_1_mass;
   vector<float>   *Jpsi_1_massErr;
   vector<float>   *Jpsi_1_massDiff;
   vector<float>   *Jpsi_1_ctau;
   vector<float>   *Jpsi_1_ctauErr;
   vector<float>   *Jpsi_1_Chi2;
   vector<float>   *Jpsi_1_ndof;
   vector<float>   *Jpsi_1_VtxProb;
   vector<float>   *Jpsi_1_px;
   vector<float>   *Jpsi_1_py;
   vector<float>   *Jpsi_1_pz;
   vector<float>   *Jpsi_1_phi;
   vector<float>   *Jpsi_1_eta;
   vector<float>   *Jpsi_1_pt;
   vector<unsigned int> *Jpsi_1_mu_1_Idx;
   vector<unsigned int> *Jpsi_1_mu_2_Idx;
   vector<float>   *Jpsi_2_mass;
   vector<float>   *Jpsi_2_massErr;
   vector<float>   *Jpsi_2_massDiff;
   vector<float>   *Jpsi_2_ctau;
   vector<float>   *Jpsi_2_ctauErr;
   vector<float>   *Jpsi_2_Chi2;
   vector<float>   *Jpsi_2_ndof;
   vector<float>   *Jpsi_2_VtxProb;
   vector<float>   *Jpsi_2_px;
   vector<float>   *Jpsi_2_py;
   vector<float>   *Jpsi_2_pz;
   vector<float>   *Jpsi_2_phi;
   vector<float>   *Jpsi_2_eta;
   vector<float>   *Jpsi_2_pt;
   vector<unsigned int> *Jpsi_2_mu_1_Idx;
   vector<unsigned int> *Jpsi_2_mu_2_Idx;
   vector<float>   *Phi_mass;
   vector<float>   *Phi_massErr;
   vector<float>   *Phi_massDiff;
   vector<float>   *Phi_Chi2;
   vector<float>   *Phi_ndof;
   vector<float>   *Phi_VtxProb;
   vector<float>   *Phi_px;
   vector<float>   *Phi_py;
   vector<float>   *Phi_pz;
   vector<float>   *Phi_phi;
   vector<float>   *Phi_eta;
   vector<float>   *Phi_pt;
   vector<unsigned int> *Phi_K_1_Idx;
   vector<unsigned int> *Phi_K_2_Idx;
   vector<float>   *Pri_mass;
   vector<float>   *Pri_massErr;
   vector<float>   *Pri_ctau;
   vector<float>   *Pri_ctauErr;
   vector<float>   *Pri_Chi2;
   vector<float>   *Pri_ndof;
   vector<float>   *Pri_VtxProb;
   vector<float>   *Pri_px;
   vector<float>   *Pri_py;
   vector<float>   *Pri_pz;
   vector<float>   *Pri_phi;
   vector<float>   *Pri_eta;
   vector<float>   *Pri_pt;
   vector<float>   *Phi_K_1_px;
   vector<float>   *Phi_K_1_py;
   vector<float>   *Phi_K_1_pz;
   vector<float>   *Phi_K_1_phi;
   vector<float>   *Phi_K_1_eta;
   vector<float>   *Phi_K_1_pt;
   vector<float>   *Phi_K_2_px;
   vector<float>   *Phi_K_2_py;
   vector<float>   *Phi_K_2_pz;
   vector<float>   *Phi_K_2_phi;
   vector<float>   *Phi_K_2_eta;
   vector<float>   *Phi_K_2_pt;

   // List of branches
   TBranch        *b_TrigRes;   //!
   TBranch        *b_TrigNames;   //!
   TBranch        *b_MatchTriggerNames;   //!
   TBranch        *b_L1TrigRes;   //!
   TBranch        *b_evtNum;   //!
   TBranch        *b_runNum;   //!
   TBranch        *b_lumiNum;   //!
   TBranch        *b_nGoodPrimVtx;   //!
   TBranch        *b_priVtxX;
   TBranch        *b_priVtxY;
   TBranch        *b_priVtxZ;
   TBranch        *b_priVtxXE;
   TBranch        *b_priVtxYE;
   TBranch        *b_priVtxZE;
   TBranch        *b_priVtxChiNorm;
   TBranch        *b_priVtxChi;
   TBranch        *b_priVtxCL;
   TBranch        *b_PriVtxXCorrX;   //!
   TBranch        *b_PriVtxXCorrY;   //!
   TBranch        *b_PriVtxXCorrZ;   //!
   TBranch        *b_PriVtxXCorrEX;   //!
   TBranch        *b_PriVtxXCorrEY;   //!
   TBranch        *b_PriVtxXCorrEZ;   //!
   TBranch        *b_PriVtxXCorrC2;   //!
   TBranch        *b_PriVtxXCorrCL;   //!
   TBranch        *b_nMu;   //!
   TBranch        *b_muPx;   //!
   TBranch        *b_muPy;   //!
   TBranch        *b_muPz;   //!
   TBranch        *b_muD0;   //!
   TBranch        *b_muD0E;   //!
   TBranch        *b_muDz;   //!
   TBranch        *b_muChi2;   //!
   TBranch        *b_muGlChi2;   //!
   TBranch        *b_mufHits;   //!
   TBranch        *b_muFirstBarrel;   //!
   TBranch        *b_muFirstEndCap;   //!
   TBranch        *b_muDzVtx;   //!
   TBranch        *b_muDxyVtx;   //!
   TBranch        *b_muNDF;   //!
   TBranch        *b_muGlNDF;   //!
   TBranch        *b_muPhits;   //!
   TBranch        *b_muShits;   //!
   TBranch        *b_muGlMuHits;   //!
   TBranch        *b_muType;   //!
   TBranch        *b_muQual;   //!
   TBranch        *b_muTrack;   //!
   TBranch        *b_muCharge;   //!
   TBranch        *b_muIsoratio;   //!
   TBranch        *b_munMatchedSeg;   //!
   TBranch        *b_muIsGoodSoftMuonNewIlseMod;   //!
   TBranch        *b_muIsGoodSoftMuonNewIlse;   //!
   TBranch        *b_muIsGoodLooseMuonNew;   //!
   TBranch        *b_muIsGoodLooseMuon;   //!
   TBranch        *b_muIsGoodTightMuon;   //!
   TBranch        *b_muJpsiFilterRes;   //!
   TBranch        *b_muIsPatLooseMuon;   //!
   TBranch        *b_muIsPatTightMuon;   //!
   TBranch        *b_muIsPatSoftMuon;   //!
   TBranch        *b_muIsPatMediumMuon;   //!
   TBranch        *b_muIsJpsiTrigMatch;   //!
   TBranch        *b_muIsUpsTrigMatch;   //!
   TBranch        *b_muMVAMuonID;   //!
   TBranch        *b_musegmentCompatibility;   //!
   TBranch        *b_mupulldXdZ_pos_noArb;   //!
   TBranch        *b_mupulldYdZ_pos_noArb;   //!
   TBranch        *b_mupulldXdZ_pos_ArbDef;   //!
   TBranch        *b_mupulldYdZ_pos_ArbDef;   //!
   TBranch        *b_mupulldXdZ_pos_ArbST;   //!
   TBranch        *b_mupulldYdZ_pos_ArbST;   //!
   TBranch        *b_mupulldXdZ_pos_noArb_any;   //!
   TBranch        *b_mupulldYdZ_pos_noArb_any;   //!
   TBranch        *b_muUpsVrtxMatch;   //!
   TBranch        *b_muL3TriggerMatch;   //!
   TBranch        *b_Jpsi_1_mass;   //!
   TBranch        *b_Jpsi_1_massErr;   //!
   TBranch        *b_Jpsi_1_massDiff;   //!
   TBranch        *b_Jpsi_1_ctau;   //!
   TBranch        *b_Jpsi_1_ctauErr;   //!
   TBranch        *b_Jpsi_1_Chi2;   //!
   TBranch        *b_Jpsi_1_ndof;   //!
   TBranch        *b_Jpsi_1_VtxProb;   //!
   TBranch        *b_Jpsi_1_px;   //!
   TBranch        *b_Jpsi_1_py;   //!
   TBranch        *b_Jpsi_1_pz;   //!
   TBranch        *b_Jpsi_1_phi;   //!
   TBranch        *b_Jpsi_1_eta;   //!
   TBranch        *b_Jpsi_1_pt;   //!
   TBranch        *b_Jpsi_1_mu_1_Idx;   //!
   TBranch        *b_Jpsi_1_mu_2_Idx;   //!
   TBranch        *b_Jpsi_2_mass;   //!
   TBranch        *b_Jpsi_2_massErr;   //!
   TBranch        *b_Jpsi_2_massDiff;   //!
   TBranch        *b_Jpsi_2_ctau;   //!
   TBranch        *b_Jpsi_2_ctauErr;   //!
   TBranch        *b_Jpsi_2_Chi2;   //!
   TBranch        *b_Jpsi_2_ndof;   //!
   TBranch        *b_Jpsi_2_VtxProb;   //!
   TBranch        *b_Jpsi_2_px;   //!
   TBranch        *b_Jpsi_2_py;   //!
   TBranch        *b_Jpsi_2_pz;   //!
   TBranch        *b_Jpsi_2_phi;   //!
   TBranch        *b_Jpsi_2_eta;   //!
   TBranch        *b_Jpsi_2_pt;   //!
   TBranch        *b_Jpsi_2_mu_1_Idx;   //!
   TBranch        *b_Jpsi_2_mu_2_Idx;   //!
   TBranch        *b_Phi_mass;   //!
   TBranch        *b_Phi_massErr;   //!
   TBranch        *b_Phi_massDiff;   //!
   TBranch        *b_Phi_Chi2;   //!
   TBranch        *b_Phi_ndof;   //!
   TBranch        *b_Phi_VtxProb;   //!
   TBranch        *b_Phi_px;   //!
   TBranch        *b_Phi_py;   //!
   TBranch        *b_Phi_pz;   //!
   TBranch        *b_Phi_phi;   //!
   TBranch        *b_Phi_eta;   //!
   TBranch        *b_Phi_pt;   //!
   TBranch        *b_Phi_K_1_Idx;   //!
   TBranch        *b_Phi_K_2_Idx;   //!
   TBranch        *b_Pri_mass;   //!
   TBranch        *b_Pri_massErr;   //!
   TBranch        *b_Pri_ctau;   //!
   TBranch        *b_Pri_ctauErr;   //!
   TBranch        *b_Pri_Chi2;   //!
   TBranch        *b_Pri_ndof;   //!
   TBranch        *b_Pri_VtxProb;   //!
   TBranch        *b_Pri_px;   //!
   TBranch        *b_Pri_py;   //!
   TBranch        *b_Pri_pz;   //!
   TBranch        *b_Pri_phi;   //!
   TBranch        *b_Pri_eta;   //!
   TBranch        *b_Pri_pt;   //!
   TBranch        *b_Phi_K_1_px;   //!
   TBranch        *b_Phi_K_1_py;   //!
   TBranch        *b_Phi_K_1_pz;   //!
   TBranch        *b_Phi_K_1_phi;   //!
   TBranch        *b_Phi_K_1_eta;   //!
   TBranch        *b_Phi_K_1_pt;   //!
   TBranch        *b_Phi_K_2_px;   //!
   TBranch        *b_Phi_K_2_py;   //!
   TBranch        *b_Phi_K_2_pz;   //!
   TBranch        *b_Phi_K_2_phi;   //!
   TBranch        *b_Phi_K_2_eta;   //!
   TBranch        *b_Phi_K_2_pt;   //!

   ReadTree(TTree *tree=0);
   virtual ~ReadTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ReadTree_cxx
ReadTree::ReadTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../../TripleMeson-ntuple.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../../../TripleMeson-ntuple.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("../../../TripleMeson-ntuple.root:/mkcands");
      dir->GetObject("X_data",tree);

   }
   Init(tree);
}

ReadTree::~ReadTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ReadTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ReadTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ReadTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   TrigRes = 0;
   TrigNames = 0;
   MatchTriggerNames = 0;
   L1TrigRes = 0;
   PriVtxXCorrX = 0;
   PriVtxXCorrY = 0;
   PriVtxXCorrZ = 0;
   PriVtxXCorrEX = 0;
   PriVtxXCorrEY = 0;
   PriVtxXCorrEZ = 0;
   PriVtxXCorrC2 = 0;
   PriVtxXCorrCL = 0;
   muPx = 0;
   muPy = 0;
   muPz = 0;
   muD0 = 0;
   muD0E = 0;
   muDz = 0;
   muChi2 = 0;
   muGlChi2 = 0;
   mufHits = 0;
   muFirstBarrel = 0;
   muFirstEndCap = 0;
   muDzVtx = 0;
   muDxyVtx = 0;
   muNDF = 0;
   muGlNDF = 0;
   muPhits = 0;
   muShits = 0;
   muGlMuHits = 0;
   muType = 0;
   muQual = 0;
   muTrack = 0;
   muCharge = 0;
   muIsoratio = 0;
   munMatchedSeg = 0;
   muIsGoodSoftMuonNewIlseMod = 0;
   muIsGoodSoftMuonNewIlse = 0;
   muIsGoodLooseMuonNew = 0;
   muIsGoodLooseMuon = 0;
   muIsGoodTightMuon = 0;
   muJpsiFilterRes = 0;
   muIsPatLooseMuon = 0;
   muIsPatTightMuon = 0;
   muIsPatSoftMuon = 0;
   muIsPatMediumMuon = 0;
   muIsJpsiTrigMatch = 0;
   muIsUpsTrigMatch = 0;
   muMVAMuonID = 0;
   musegmentCompatibility = 0;
   mupulldXdZ_pos_noArb = 0;
   mupulldYdZ_pos_noArb = 0;
   mupulldXdZ_pos_ArbDef = 0;
   mupulldYdZ_pos_ArbDef = 0;
   mupulldXdZ_pos_ArbST = 0;
   mupulldYdZ_pos_ArbST = 0;
   mupulldXdZ_pos_noArb_any = 0;
   mupulldYdZ_pos_noArb_any = 0;
   muUpsVrtxMatch = 0;
   muL3TriggerMatch = 0;
   Jpsi_1_mass = 0;
   Jpsi_1_massErr = 0;
   Jpsi_1_massDiff = 0;
   Jpsi_1_ctau = 0;
   Jpsi_1_ctauErr = 0;
   Jpsi_1_Chi2 = 0;
   Jpsi_1_ndof = 0;
   Jpsi_1_VtxProb = 0;
   Jpsi_1_px = 0;
   Jpsi_1_py = 0;
   Jpsi_1_pz = 0;
   Jpsi_1_phi = 0;
   Jpsi_1_eta = 0;
   Jpsi_1_pt = 0;
   Jpsi_1_mu_1_Idx = 0;
   Jpsi_1_mu_2_Idx = 0;
   Jpsi_2_mass = 0;
   Jpsi_2_massErr = 0;
   Jpsi_2_massDiff = 0;
   Jpsi_2_ctau = 0;
   Jpsi_2_ctauErr = 0;
   Jpsi_2_Chi2 = 0;
   Jpsi_2_ndof = 0;
   Jpsi_2_VtxProb = 0;
   Jpsi_2_px = 0;
   Jpsi_2_py = 0;
   Jpsi_2_pz = 0;
   Jpsi_2_phi = 0;
   Jpsi_2_eta = 0;
   Jpsi_2_pt = 0;
   Jpsi_2_mu_1_Idx = 0;
   Jpsi_2_mu_2_Idx = 0;
   Phi_mass = 0;
   Phi_massErr = 0;
   Phi_massDiff = 0;
   Phi_Chi2 = 0;
   Phi_ndof = 0;
   Phi_VtxProb = 0;
   Phi_px = 0;
   Phi_py = 0;
   Phi_pz = 0;
   Phi_phi = 0;
   Phi_eta = 0;
   Phi_pt = 0;
   Phi_K_1_Idx = 0;
   Phi_K_2_Idx = 0;
   Pri_mass = 0;
   Pri_massErr = 0;
   Pri_ctau = 0;
   Pri_ctauErr = 0;
   Pri_Chi2 = 0;
   Pri_ndof = 0;
   Pri_VtxProb = 0;
   Pri_px = 0;
   Pri_py = 0;
   Pri_pz = 0;
   Pri_phi = 0;
   Pri_eta = 0;
   Pri_pt = 0;
   Phi_K_1_px = 0;
   Phi_K_1_py = 0;
   Phi_K_1_pz = 0;
   Phi_K_1_phi = 0;
   Phi_K_1_eta = 0;
   Phi_K_1_pt = 0;
   Phi_K_2_px = 0;
   Phi_K_2_py = 0;
   Phi_K_2_pz = 0;
   Phi_K_2_phi = 0;
   Phi_K_2_eta = 0;
   Phi_K_2_pt = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("TrigRes", &TrigRes, &b_TrigRes);
   fChain->SetBranchAddress("TrigNames", &TrigNames, &b_TrigNames);
   fChain->SetBranchAddress("MatchTriggerNames", &MatchTriggerNames, &b_MatchTriggerNames);
   fChain->SetBranchAddress("L1TrigRes", &L1TrigRes, &b_L1TrigRes);
   fChain->SetBranchAddress("evtNum", &evtNum, &b_evtNum);
   fChain->SetBranchAddress("runNum", &runNum, &b_runNum);
   fChain->SetBranchAddress("lumiNum", &lumiNum, &b_lumiNum);
   fChain->SetBranchAddress("nGoodPrimVtx", &nGoodPrimVtx, &b_nGoodPrimVtx);
   fChain->SetBranchAddress("priVtxX", &priVtxX, &b_priVtxX);
   fChain->SetBranchAddress("priVtxY", &priVtxY, &b_priVtxY);
   fChain->SetBranchAddress("priVtxZ", &priVtxZ, &b_priVtxZ);
   fChain->SetBranchAddress("priVtxXE", &priVtxXE, &b_priVtxXE);
   fChain->SetBranchAddress("priVtxYE", &priVtxYE, &b_priVtxYE);
   fChain->SetBranchAddress("priVtxZE", &priVtxZE, &b_priVtxZE);
   fChain->SetBranchAddress("priVtxChiNorm", &priVtxChiNorm, &b_priVtxChiNorm);
   fChain->SetBranchAddress("priVtxChi",     &priVtxChi,     &b_priVtxChi   );
   fChain->SetBranchAddress("PriVtxXCorrX", &PriVtxXCorrX, &b_PriVtxXCorrX);
   fChain->SetBranchAddress("PriVtxXCorrY", &PriVtxXCorrY, &b_PriVtxXCorrY);
   fChain->SetBranchAddress("PriVtxXCorrZ", &PriVtxXCorrZ, &b_PriVtxXCorrZ);
   fChain->SetBranchAddress("PriVtxXCorrEX", &PriVtxXCorrEX, &b_PriVtxXCorrEX);
   fChain->SetBranchAddress("PriVtxXCorrEY", &PriVtxXCorrEY, &b_PriVtxXCorrEY);
   fChain->SetBranchAddress("PriVtxXCorrEZ", &PriVtxXCorrEZ, &b_PriVtxXCorrEZ);
   fChain->SetBranchAddress("PriVtxXCorrC2", &PriVtxXCorrC2, &b_PriVtxXCorrC2);
   fChain->SetBranchAddress("PriVtxXCorrCL", &PriVtxXCorrCL, &b_PriVtxXCorrCL);
   fChain->SetBranchAddress("nMu", &nMu, &b_nMu);
   fChain->SetBranchAddress("muPx", &muPx, &b_muPx);
   fChain->SetBranchAddress("muPy", &muPy, &b_muPy);
   fChain->SetBranchAddress("muPz", &muPz, &b_muPz);
   fChain->SetBranchAddress("muD0", &muD0, &b_muD0);
   fChain->SetBranchAddress("muD0E", &muD0E, &b_muD0E);
   fChain->SetBranchAddress("muDz", &muDz, &b_muDz);
   fChain->SetBranchAddress("muChi2", &muChi2, &b_muChi2);
   fChain->SetBranchAddress("muGlChi2", &muGlChi2, &b_muGlChi2);
   fChain->SetBranchAddress("mufHits", &mufHits, &b_mufHits);
   fChain->SetBranchAddress("muFirstBarrel", &muFirstBarrel, &b_muFirstBarrel);
   fChain->SetBranchAddress("muFirstEndCap", &muFirstEndCap, &b_muFirstEndCap);
   fChain->SetBranchAddress("muDzVtx", &muDzVtx, &b_muDzVtx);
   fChain->SetBranchAddress("muDxyVtx", &muDxyVtx, &b_muDxyVtx);
   fChain->SetBranchAddress("muNDF", &muNDF, &b_muNDF);
   fChain->SetBranchAddress("muGlNDF", &muGlNDF, &b_muGlNDF);
   fChain->SetBranchAddress("muPhits", &muPhits, &b_muPhits);
   fChain->SetBranchAddress("muShits", &muShits, &b_muShits);
   fChain->SetBranchAddress("muGlMuHits", &muGlMuHits, &b_muGlMuHits);
   fChain->SetBranchAddress("muType", &muType, &b_muType);
   fChain->SetBranchAddress("muQual", &muQual, &b_muQual);
   fChain->SetBranchAddress("muTrack", &muTrack, &b_muTrack);
   fChain->SetBranchAddress("muCharge", &muCharge, &b_muCharge);
   fChain->SetBranchAddress("muIsoratio", &muIsoratio, &b_muIsoratio);
   fChain->SetBranchAddress("munMatchedSeg", &munMatchedSeg, &b_munMatchedSeg);
   fChain->SetBranchAddress("muIsGoodSoftMuonNewIlseMod", &muIsGoodSoftMuonNewIlseMod, &b_muIsGoodSoftMuonNewIlseMod);
   fChain->SetBranchAddress("muIsGoodSoftMuonNewIlse", &muIsGoodSoftMuonNewIlse, &b_muIsGoodSoftMuonNewIlse);
   fChain->SetBranchAddress("muIsGoodLooseMuonNew", &muIsGoodLooseMuonNew, &b_muIsGoodLooseMuonNew);
   fChain->SetBranchAddress("muIsGoodLooseMuon", &muIsGoodLooseMuon, &b_muIsGoodLooseMuon);
   fChain->SetBranchAddress("muIsGoodTightMuon", &muIsGoodTightMuon, &b_muIsGoodTightMuon);
   fChain->SetBranchAddress("muJpsiFilterRes", &muJpsiFilterRes, &b_muJpsiFilterRes);
   fChain->SetBranchAddress("muIsPatLooseMuon", &muIsPatLooseMuon, &b_muIsPatLooseMuon);
   fChain->SetBranchAddress("muIsPatTightMuon", &muIsPatTightMuon, &b_muIsPatTightMuon);
   fChain->SetBranchAddress("muIsPatSoftMuon", &muIsPatSoftMuon, &b_muIsPatSoftMuon);
   fChain->SetBranchAddress("muIsPatMediumMuon", &muIsPatMediumMuon, &b_muIsPatMediumMuon);
   fChain->SetBranchAddress("muIsJpsiTrigMatch", &muIsJpsiTrigMatch, &b_muIsJpsiTrigMatch);
   fChain->SetBranchAddress("muIsUpsTrigMatch", &muIsUpsTrigMatch, &b_muIsUpsTrigMatch);
   fChain->SetBranchAddress("muMVAMuonID", &muMVAMuonID, &b_muMVAMuonID);
   fChain->SetBranchAddress("musegmentCompatibility", &musegmentCompatibility, &b_musegmentCompatibility);
   fChain->SetBranchAddress("mupulldXdZ_pos_noArb", &mupulldXdZ_pos_noArb, &b_mupulldXdZ_pos_noArb);
   fChain->SetBranchAddress("mupulldYdZ_pos_noArb", &mupulldYdZ_pos_noArb, &b_mupulldYdZ_pos_noArb);
   fChain->SetBranchAddress("mupulldXdZ_pos_ArbDef", &mupulldXdZ_pos_ArbDef, &b_mupulldXdZ_pos_ArbDef);
   fChain->SetBranchAddress("mupulldYdZ_pos_ArbDef", &mupulldYdZ_pos_ArbDef, &b_mupulldYdZ_pos_ArbDef);
   fChain->SetBranchAddress("mupulldXdZ_pos_ArbST", &mupulldXdZ_pos_ArbST, &b_mupulldXdZ_pos_ArbST);
   fChain->SetBranchAddress("mupulldYdZ_pos_ArbST", &mupulldYdZ_pos_ArbST, &b_mupulldYdZ_pos_ArbST);
   fChain->SetBranchAddress("mupulldXdZ_pos_noArb_any", &mupulldXdZ_pos_noArb_any, &b_mupulldXdZ_pos_noArb_any);
   fChain->SetBranchAddress("mupulldYdZ_pos_noArb_any", &mupulldYdZ_pos_noArb_any, &b_mupulldYdZ_pos_noArb_any);
   fChain->SetBranchAddress("muUpsVrtxMatch", &muUpsVrtxMatch, &b_muUpsVrtxMatch);
   fChain->SetBranchAddress("muL3TriggerMatch", &muL3TriggerMatch, &b_muL3TriggerMatch);
   fChain->SetBranchAddress("Jpsi_1_mass", &Jpsi_1_mass, &b_Jpsi_1_mass);
   fChain->SetBranchAddress("Jpsi_1_massErr", &Jpsi_1_massErr, &b_Jpsi_1_massErr);
   fChain->SetBranchAddress("Jpsi_1_massDiff", &Jpsi_1_massDiff, &b_Jpsi_1_massDiff);
   fChain->SetBranchAddress("Jpsi_1_ctau", &Jpsi_1_ctau, &b_Jpsi_1_ctau);
   fChain->SetBranchAddress("Jpsi_1_ctauErr", &Jpsi_1_ctauErr, &b_Jpsi_1_ctauErr);
   fChain->SetBranchAddress("Jpsi_1_Chi2", &Jpsi_1_Chi2, &b_Jpsi_1_Chi2);
   fChain->SetBranchAddress("Jpsi_1_ndof", &Jpsi_1_ndof, &b_Jpsi_1_ndof);
   fChain->SetBranchAddress("Jpsi_1_VtxProb", &Jpsi_1_VtxProb, &b_Jpsi_1_VtxProb);
   fChain->SetBranchAddress("Jpsi_1_px", &Jpsi_1_px, &b_Jpsi_1_px);
   fChain->SetBranchAddress("Jpsi_1_py", &Jpsi_1_py, &b_Jpsi_1_py);
   fChain->SetBranchAddress("Jpsi_1_pz", &Jpsi_1_pz, &b_Jpsi_1_pz);
   fChain->SetBranchAddress("Jpsi_1_phi", &Jpsi_1_phi, &b_Jpsi_1_phi);
   fChain->SetBranchAddress("Jpsi_1_eta", &Jpsi_1_eta, &b_Jpsi_1_eta);
   fChain->SetBranchAddress("Jpsi_1_pt", &Jpsi_1_pt, &b_Jpsi_1_pt);
   fChain->SetBranchAddress("Jpsi_1_mu_1_Idx", &Jpsi_1_mu_1_Idx, &b_Jpsi_1_mu_1_Idx);
   fChain->SetBranchAddress("Jpsi_1_mu_2_Idx", &Jpsi_1_mu_2_Idx, &b_Jpsi_1_mu_2_Idx);
   fChain->SetBranchAddress("Jpsi_2_mass", &Jpsi_2_mass, &b_Jpsi_2_mass);
   fChain->SetBranchAddress("Jpsi_2_massErr", &Jpsi_2_massErr, &b_Jpsi_2_massErr);
   fChain->SetBranchAddress("Jpsi_2_massDiff", &Jpsi_2_massDiff, &b_Jpsi_2_massDiff);
   fChain->SetBranchAddress("Jpsi_2_ctau", &Jpsi_2_ctau, &b_Jpsi_2_ctau);
   fChain->SetBranchAddress("Jpsi_2_ctauErr", &Jpsi_2_ctauErr, &b_Jpsi_2_ctauErr);
   fChain->SetBranchAddress("Jpsi_2_Chi2", &Jpsi_2_Chi2, &b_Jpsi_2_Chi2);
   fChain->SetBranchAddress("Jpsi_2_ndof", &Jpsi_2_ndof, &b_Jpsi_2_ndof);
   fChain->SetBranchAddress("Jpsi_2_VtxProb", &Jpsi_2_VtxProb, &b_Jpsi_2_VtxProb);
   fChain->SetBranchAddress("Jpsi_2_px", &Jpsi_2_px, &b_Jpsi_2_px);
   fChain->SetBranchAddress("Jpsi_2_py", &Jpsi_2_py, &b_Jpsi_2_py);
   fChain->SetBranchAddress("Jpsi_2_pz", &Jpsi_2_pz, &b_Jpsi_2_pz);
   fChain->SetBranchAddress("Jpsi_2_phi", &Jpsi_2_phi, &b_Jpsi_2_phi);
   fChain->SetBranchAddress("Jpsi_2_eta", &Jpsi_2_eta, &b_Jpsi_2_eta);
   fChain->SetBranchAddress("Jpsi_2_pt", &Jpsi_2_pt, &b_Jpsi_2_pt);
   fChain->SetBranchAddress("Jpsi_2_mu_1_Idx", &Jpsi_2_mu_1_Idx, &b_Jpsi_2_mu_1_Idx);
   fChain->SetBranchAddress("Jpsi_2_mu_2_Idx", &Jpsi_2_mu_2_Idx, &b_Jpsi_2_mu_2_Idx);
   fChain->SetBranchAddress("Phi_mass", &Phi_mass, &b_Phi_mass);
   fChain->SetBranchAddress("Phi_massErr", &Phi_massErr, &b_Phi_massErr);
   fChain->SetBranchAddress("Phi_massDiff", &Phi_massDiff, &b_Phi_massDiff);
   fChain->SetBranchAddress("Phi_Chi2", &Phi_Chi2, &b_Phi_Chi2);
   fChain->SetBranchAddress("Phi_ndof", &Phi_ndof, &b_Phi_ndof);
   fChain->SetBranchAddress("Phi_VtxProb", &Phi_VtxProb, &b_Phi_VtxProb);
   fChain->SetBranchAddress("Phi_px", &Phi_px, &b_Phi_px);
   fChain->SetBranchAddress("Phi_py", &Phi_py, &b_Phi_py);
   fChain->SetBranchAddress("Phi_pz", &Phi_pz, &b_Phi_pz);
   fChain->SetBranchAddress("Phi_phi", &Phi_phi, &b_Phi_phi);
   fChain->SetBranchAddress("Phi_eta", &Phi_eta, &b_Phi_eta);
   fChain->SetBranchAddress("Phi_pt", &Phi_pt, &b_Phi_pt);
   fChain->SetBranchAddress("Phi_K_1_Idx", &Phi_K_1_Idx, &b_Phi_K_1_Idx);
   fChain->SetBranchAddress("Phi_K_2_Idx", &Phi_K_2_Idx, &b_Phi_K_2_Idx);
   fChain->SetBranchAddress("Pri_mass", &Pri_mass, &b_Pri_mass);
   fChain->SetBranchAddress("Pri_massErr", &Pri_massErr, &b_Pri_massErr);
   fChain->SetBranchAddress("Pri_ctau", &Pri_ctau, &b_Pri_ctau);
   fChain->SetBranchAddress("Pri_ctauErr", &Pri_ctauErr, &b_Pri_ctauErr);
   fChain->SetBranchAddress("Pri_Chi2", &Pri_Chi2, &b_Pri_Chi2);
   fChain->SetBranchAddress("Pri_ndof", &Pri_ndof, &b_Pri_ndof);
   fChain->SetBranchAddress("Pri_VtxProb", &Pri_VtxProb, &b_Pri_VtxProb);
   fChain->SetBranchAddress("Pri_px", &Pri_px, &b_Pri_px);
   fChain->SetBranchAddress("Pri_py", &Pri_py, &b_Pri_py);
   fChain->SetBranchAddress("Pri_pz", &Pri_pz, &b_Pri_pz);
   fChain->SetBranchAddress("Pri_phi", &Pri_phi, &b_Pri_phi);
   fChain->SetBranchAddress("Pri_eta", &Pri_eta, &b_Pri_eta);
   fChain->SetBranchAddress("Pri_pt", &Pri_pt, &b_Pri_pt);
   fChain->SetBranchAddress("Phi_K_1_px", &Phi_K_1_px, &b_Phi_K_1_px);
   fChain->SetBranchAddress("Phi_K_1_py", &Phi_K_1_py, &b_Phi_K_1_py);
   fChain->SetBranchAddress("Phi_K_1_pz", &Phi_K_1_pz, &b_Phi_K_1_pz);
   fChain->SetBranchAddress("Phi_K_1_phi", &Phi_K_1_phi, &b_Phi_K_1_phi);
   fChain->SetBranchAddress("Phi_K_1_eta", &Phi_K_1_eta, &b_Phi_K_1_eta);
   fChain->SetBranchAddress("Phi_K_1_pt", &Phi_K_1_pt, &b_Phi_K_1_pt);
   fChain->SetBranchAddress("Phi_K_2_px", &Phi_K_2_px, &b_Phi_K_2_px);
   fChain->SetBranchAddress("Phi_K_2_py", &Phi_K_2_py, &b_Phi_K_2_py);
   fChain->SetBranchAddress("Phi_K_2_pz", &Phi_K_2_pz, &b_Phi_K_2_pz);
   fChain->SetBranchAddress("Phi_K_2_phi", &Phi_K_2_phi, &b_Phi_K_2_phi);
   fChain->SetBranchAddress("Phi_K_2_eta", &Phi_K_2_eta, &b_Phi_K_2_eta);
   fChain->SetBranchAddress("Phi_K_2_pt", &Phi_K_2_pt, &b_Phi_K_2_pt);
   Notify();
}

Bool_t ReadTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ReadTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ReadTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ReadTree_cxx
