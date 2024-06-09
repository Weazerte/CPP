#include "../inc/Pars.hpp"

int main(int ac, char **av) {

    if (ac == 2) {
        std::string input = av[1];
        Pars calculator;
        calculator.calculate(input);
    }
    else {
        std::cout << "usage : ./RPN \" expression \"" << std::endl;
        return 1;
    }
    return 0;
}