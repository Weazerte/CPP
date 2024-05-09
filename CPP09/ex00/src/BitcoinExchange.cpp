#include "../inc/BitcoinExchange.hpp"

Bitcoin::Bitcoin() {

}

Bitcoin::~Bitcoin() {

}

Bitcoin::Bitcoin(const Bitcoin &src) {

}

Bitcoin &Bitcoin::operator=(const Bitcoin &src) {

}

bool Bitcoin::parseDate() {

}

void Bitcoin::readAndPars(std::string fileName) {
        std::fstream fin;
        fin.open(fileName, std::ios::in);
        size_t pos;
        for (std::string line; fin >> line;) {
            pos = line.substr(",");
            if (pos == string::npos)
                throw Bitcoin::GlobalUsageException();
            std::string date = line.substr(0, pos);
            if (!parseDate(date))
                throw Bitcoin::DateUsageException();
            std::string valuestr = line.substr(pos + 1);
            float valueF = std::atof(valuestr.c_str());
            int valueI = std::atoi(valuestr.c_str());
            dateToData[valuestr] = date;
        }
        fin.close();
}

const char *Bitcoin::GlobalUsageException::what() const throw() {
    return "Invalid usage in file : Usage : YYYY-MM-DD,Value";
}

const char *Bitcoin::DateUsageException::what() const throw() {
    return "Usage : YYYY/MM/DD";
}

const char *Bitcoin::DateUsageException::what() const throw() {
    return "value has to be a float or a positiv int";
}
