/******************************************************************************
 * [Name of the file]
 *      ParticleCand.C
 * [Purpose]
 *      Implement the class ParticleCand.
 * [Author]
 *      Eric Wang
 * [Date]
 *      20241211
 * [Note]
 * 
******************************************************************************/

#ifndef ParticleCand_C
#define ParticleCand_C

#include "../interface/ParticleCand.h"
#include <algorithm>

void ParticleCand::AddParticle(const PartType& arg_Type,
                               const PartIdxList_t& arg_IdxList){
    // Check if the particle type is already in the list
    auto it = std::find(m_TypeList.begin(), m_TypeList.end(), arg_Type);
    if(it != m_TypeList.end()){
        // If there is, merge the list and sort.
        auto idx = std::distance(m_TypeList.begin(), it);
        m_IdxList[idx]->insert(m_IdxList[idx]->end(), arg_IdxList.begin(), arg_IdxList.end());
        // Preserve the order.
        std::sort(m_IdxList[idx]->begin(), m_IdxList[idx]->end());
    }
    else{
        // If not, insert the particle type and the list.
        m_TypeList.push_back(arg_Type);
        m_IdxList.push_back(std::make_shared<PartIdxList_t>(arg_IdxList));
        // Sort the list to make set.
        std::sort(m_IdxList.back()->begin(), m_IdxList.back()->end());
    }
}

bool ParticleCand::Overlap(const ParticleCand& arg_Cand) const{
    // Utilize the static function to compare two candidates.
    return Overlap(*this, arg_Cand);
}

bool ParticleCand::Overlap(const ParticleCand& arg_Cand1,
                           const ParticleCand& arg_Cand2 ){
    // The particle types are ordered in m_TypeList.
    // Use a two-pointer method to look for the same particle type.
    auto it1 = arg_Cand1.m_TypeList.begin();
    auto it2 = arg_Cand2.m_TypeList.begin();
    while(it1 != arg_Cand1.m_TypeList.end() && it2 != arg_Cand2.m_TypeList.end()){
        if(*it1 == *it2){
            // If the particle type is the same, compare the indices.
            if(Overlap(arg_Cand1.m_IdxList[std::distance(arg_Cand1.m_TypeList.begin(), it1)],
                       arg_Cand2.m_IdxList[std::distance(arg_Cand2.m_TypeList.begin(), it2)])){
                return true;
            }
            // Move to the next particle type.
            ++it1;
            ++it2;
        }
        else if(*it1 < *it2){
            // If the particle type in arg_Cand1 is smaller, move to the next one.
            ++it1;
        }
        else{
            // If the particle type in arg_Cand2 is smaller, move to the next one.
            ++it2;
        }
    }
    // If no same particle type is found, return false.
    return false;
}

bool ParticleCand::Overlap(const PartIdxSet_ptr& arg_Set1,
                           const PartIdxSet_ptr& arg_Set2 ){
    // Use a two-pointer method to compare two sets.
    auto it1 = arg_Set1->begin();
    auto it2 = arg_Set2->begin();
    while(it1 != arg_Set1->end() && it2 != arg_Set2->end()){
        if(*it1 == *it2){
            // If the indices are the same, return true.
            return true;
        }
        else if(*it1 < *it2){
            // If the index in arg_Set1 is smaller, move to the next one.
            ++it1;
        }
        else{
            // If the index in arg_Set2 is smaller, move to the next one.
            ++it2;
        }
    }
    // If no same index is found, return false.
    return false;
}


#endif