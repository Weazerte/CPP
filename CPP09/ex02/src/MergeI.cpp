#include "../inc/MergeI.hpp"

MergeInsert::MergeInsert(){}

MergeInsert::MergeInsert(std::string input){
    //pars and fill numbers
    for (int i = 0; input[i]; i++){
        while(input[i] && input[i] == ' ')
            i++;
        int j = i;
        while (std::isdigit(input[j]))
            j++;
        if (std::atoi(input.substr(i, j).c_str()) > 0) {
            numbersV.push_back(std::atoi(input.substr(i, j).c_str()));
            
        }
    }
}

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