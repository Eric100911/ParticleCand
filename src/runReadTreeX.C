#include "../src/ParticleCand.C"
#include "../src/ReadTree.C"

void runReadTreeX(){
    TChain *chain = new TChain("mkcands/X_data","");
    // chain->Add("/home/storage0/users/chiwang/storage2/CMS-Analysis/JJP/Analysis/MultiCandChecker/TripleMeson-ntuple.root");
    chain->Add("/home/storage0/users/chiwang/storage2/CMS-Analysis/JJP/TripleMeson-ntuple.root");
    ReadTree myReadTree(chain);
    myReadTree.Loop();
}
