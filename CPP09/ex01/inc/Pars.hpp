#pragma once

#include <iostream>
#include <string>
#include <stack>

class Pars {
    private:
        std::stack<double> numbers;

    public:
        Pars();
        Pars(Pars const &src);
        Pars & operator=(Pars const &src);
        ~Pars();
        void calculate(std::string input);
};