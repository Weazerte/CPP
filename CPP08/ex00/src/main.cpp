#include "../inc/EasyFind.hpp"
#include <vector>
#include <set>
#include <cmath>

int main()
{
    std::vector<int> oddNumbers;
    for (int i = 1; i < 10; i += 2)
        oddNumbers.push_back(i);
    std::set<int> evenNumbers;
    for (int i = 0; i < 10; i += 2)
        evenNumbers.insert(i);
    for (int i = 0; i < 5; i++){
    int random;
        random = rand() % 10;
        std::cout << "Random number: " << random << std::endl;
        try{
            ::easyfind(oddNumbers, random);
        }
        catch (std::exception &e)
        {
            std::cout << "Value not found in the oddNumbers container" << std::endl;
        }
        try{
            ::easyfind(evenNumbers, random);
        }
        catch (std::exception &e)
        {
            std::cout << "Value not found in the evenNumbers container" << std::endl;
        }
    }

}