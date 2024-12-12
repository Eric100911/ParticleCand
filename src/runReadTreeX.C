#include "../src/ParticleCand.C"

void runReadTreeX(){
    TChain *chain = new TChain("mkcands/X_data","");
    chain->Add("/home/storage0/users/chiwang/storage2/CMS-Analysis/JJP/test_JJP.root");
    ReadTree myReadTree(chain);
    myReadTree.Loop();
}
