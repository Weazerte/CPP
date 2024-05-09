
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

int main()
{
        std::fstream fin;
        fin.open("data.csv", std::ios::in);
        size_t pos;
        for (std::string line; fin >> line;) {
            pos = line.find(",");
            if (pos == std::string::npos)
                continue;
            std::string date = line.substr(0, pos);
            std::string valuestr = line.substr(pos + 1);
            std::cout << "date is : " << date << std::endl;
            std::cout << "value is : " << valuestr << std::endl;
        }
}