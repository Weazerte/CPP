#pragma once

#include <iostream>
#include <string>
#include <vector>

class Pars {
    private:
        
        Pars();
        Pars(Pars const &src);
        Pars & operator=(Pars const &src);
    public:
        Pars(std::string input);
        ~Pars();
};