#include "../inc/Pars.hpp"

Pars::Pars(){}

Pars::Pars(Pars const &src){
    *this = src;
}

Pars & Pars::operator=(Pars const &src){

}

Pars::Pars(std::string input){
    if (wrongInput(input))
        throw std::ErrorExcption();
    std::vector<char, std::vector<std::string, std::string>> signToDigit;
    int i = 0;
    while (input[i]){
        
        i++;
    }
}

Pars::~Pars(){}