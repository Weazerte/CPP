#include "../inc/MergeI.hpp"

MergeInsert::MergeInsert(){}

MergeInsert::MergeInsert(MergeInsert const &src){
    *this = src;
}

MergeInsert & MergeInsert::operator=(MergeInsert const &src){
    if (this != &src)
        return *this;
    return *this;
}

MergeInsert::~MergeInsert(){}


void MergeInsert::mergeInsert() {
    int size = numbersV.size() / 2;
    int oddOrEven = numbersV.size() % 2;
    

    
}