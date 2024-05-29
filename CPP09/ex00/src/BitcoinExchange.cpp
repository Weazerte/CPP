#include "../inc/BitcoinExchange.hpp"

Bitcoin::Bitcoin() {

}

Bitcoin::~Bitcoin() {

}

Bitcoin::Bitcoin(const Bitcoin &src) {
    for (std::map<std::string, std::string>::const_iterator it = src.dateToData.begin(); it != src.dateToData.end(); it++) {
        this->dateToData[it->first] = it->second;
    }
}

Bitcoin& Bitcoin::operator=(const Bitcoin &src) {
    if (this != &src)
        return *this;
    return *this;
}

bool Bitcoin::parseDate(std::string& date) {
    for(int i = 0; date[i]; i++) {
        std::cout << date << std::endl;
        if ((i == 4 || i == 7) && date[i] == '-')
            continue;
        else if (std::isdigit(date[i]))
            continue;
        else{
            std::cout << date[i] << std::endl;
            return false;
        }
    }
    return true;
}

void Bitcoin::fillData() {
    std::fstream fin;
    fin.open("data.csv", std::ios::in);
    if (!fin.is_open())
        throw Bitcoin::NoSuchFileException("data.csv");
    std::string line;
    fin >> line;
    for (line; fin >> line;) {
        size_t pos = line.find(",");
        dataCsv[line.substr(0, pos)] = line.substr(pos + 1);
    }
    fin.close();
}

void Bitcoin::readAndfill(std::string fileName) {
        std::fstream fin;
        fin.open(fileName.c_str(), std::ios::in);
        if (!fin.is_open())
            throw Bitcoin::NoSuchFileException(fileName);
        size_t pos;
        std::string line;
        fin >> line;
        if (line != "date | valeur")
            throw Bitcoin::BadInputException();
        for (line; fin >> line;) { 
            size_t pos = line.find("|");
            if (pos == std::string::npos) {
                throw Bitcoin::NoSeparatorException(line);
                continue;
                
            }
            std::string valuestr = line.substr(pos + 1);
            dateToData[line.substr(0, pos)] = valuestr;
        }
        fin.close();
}

void Bitcoin::convert() {
    int year;
    int month;
    int day;
    int value;
    for (std::map<std::string, std::string>::iterator it = dateToData.begin(); it != dateToData.end(), it++) {
        try{
            if (it->first.empty())
                throw Bitcoin::BadInputException(it->first + "|" + it->second);
            if (it->second.empty())
                throw Bitcoin::BadInputException(it->first + "|" + it->second);
            if (dataCsv.find(it->first) != dataCsv.end())
                std::cout << it->first << " => " << 
        }
        catch (std::exception &e) {
            e.what();
        }
    }
}


const char *Bitcoin::DateUsageException::what(void) const throw() {
    return "Usage : YYYY/MM/DD";
}

const char *Bitcoin::ValueUsageException::what(void) const throw() {
    return "Value has to be between 0 and 1000";
}
