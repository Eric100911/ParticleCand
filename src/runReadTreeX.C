#include "../src/ParticleCand.C"
#include "../src/ReadTree.C"

//#define MINOR_EXAMPLE

void runReadTreeX(){
    TChain *chain = new TChain("mkcands/X_data","");
    // chain->Add("/home/storage0/users/chiwang/storage2/CMS-Analysis/JJP/Analysis/MultiCandChecker/TripleMeson-ntuple.root");
    // chain->Add("/home/storage0/users/chiwang/storage2/CMS-Analysis/JJP/TripleMeson-ntuple.root");
    #ifdef MINOR_EXAMPLE
    chain->Add("/home/storage0/users/chiwang/storage2/CMS-Analysis/JJP/Analysis/MultiCandChecker/JJU-ntuple.root");
    //chain->Add("/afs/cern.ch/user/c/chiw/cernbox/JpsiJpsiUps/rootNtuple/P_Run2024/P0_Run2024Cv1_0000.root");
    #else
    chain->Add("~/storage2/CMS-Analysis/JpsiJpsiUps/rootNtuple/P_Run2022/*.root");
    chain->Add("~/storage2/CMS-Analysis/JpsiJpsiUps/rootNtuple/P_Run2023/*.root");
    chain->Add("~/storage2/CMS-Analysis/JpsiJpsiUps/rootNtuple/P_Run2024/*.root");
    #endif
    ReadTree myReadTree(chain);
    myReadTree.Loop();
}
