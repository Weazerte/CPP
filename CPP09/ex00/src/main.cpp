
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include "../inc/BitcoinExchange.hpp"

int main(int ac, char **av)
{
    try {
        if (ac == 2){
        Bitcoin data;
        data.fillData();
        data.readAndFill(av[1]);
        }
    }
    catch (std::string e)
    {
        std::cout << e << std::endl;
    }
}
