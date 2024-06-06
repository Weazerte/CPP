
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include "../inc/BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2){
        Bitcoin data;

        try {
            data.fillData();
            data.readAndFill(av[1]);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}