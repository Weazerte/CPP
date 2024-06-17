#include "../inc/BitcoinExchange.hpp"

Bitcoin::Bitcoin() {

}

Bitcoin::~Bitcoin() {

}

Bitcoin::Bitcoin(const Bitcoin &src) {
	*this = src;
}

Bitcoin& Bitcoin::operator=(const Bitcoin &src) {
    if (this != &src)
        return *this;
    return *this;
}


int Bitcoin::isLeapYear(int year)
{
	// todo : how?
	bool ReturnValue = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? true : false;
	return (ReturnValue);
}
void Bitcoin::checkDate(int year, int month, int day)
{
	if (month < 1 || month > 12 || day < 1)
		throw(std::string) "invalid date";
	int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month == 2 && (isLeapYear(year) == true))
		months[1] = 29;
	(day > months[month - 1]) ? throw(std::string) "invalid day" : 0;
	if (year < 2009 || (year == 2009 && month == 1 && day < 2))
	{
		throw(std::string) "min year : (2009-01-02)";
	}
}

void Bitcoin::checkValues(float value)
{
	if (value > 1000)
		throw(std::string) "too large number.";
	if (value < 0)
		throw(std::string) "not a positive a number.";
}

void Bitcoin::fillData() {
    std::fstream fin;
    fin.open("data.csv", std::ios::in);
    if (!fin.is_open())
        throw (std::string)"data.csv : file not found";
    std::string line;
	if (!std::getline(fin, line)) {
        throw std::runtime_error("data.csv : empty file");
    }
    while (std::getline(fin, line)) {
        size_t pos = line.find(",");
        if (pos != std::string::npos) {
            btcData.insert(std::make_pair(line.substr(0, pos), std::atof(line.substr(pos + 1).c_str())));
        }
    }
    fin.close();
}

void Bitcoin::readAndFill(std::string fileName)
{
	int year;
	int month;
	int day;
	float value;
	char extra;

	std::string line;
	std::ifstream file(fileName.c_str());
	if (!file.is_open())
		throw(std::string) "cannot open file";
	// std::cout << line << std::endl;
	getline(file, line);
	if (line.empty())
		throw (std::string) "Error : Empty file";
	if (line != "date | value")
		throw(std::string) "Invalid first line in data file. Expected 'date | value'.";
	bool firstLine = true;
	while (getline(file, line))
	{
		if (firstLine)
			firstLine = false;
		if (line.length() < 14)
		{
			std::cout << "Error : bad input => " << line << std::endl;
			continue;
		}
		else if (sscanf((line.c_str()), "%d-%d-%d | %f%c", &year, &month, &day,
						&value, &extra) == 4)
		{
			if (std::isspace(line[13]) || line[11] != '|' || line[line.length() - 1] == '.')
			{

				std::cout << "Error : bad input => " << line << std::endl;
				continue;
			}
			try
			{
				checkValues(value);
				checkDate(year, month, day);
			}
			catch (std::string error)
			{
				std::cout << "Error: " << error << std::endl;
				continue;
			}
		}
		else
		{
			std::cout << "Error : bad input => " << line << std::endl;
			continue;
		}
		size_t pos;

		pos = line.find(' ');
		LineData.date = line.substr(0, pos);
		LineData.value = value;
		findDateAndCalculate();
	}
	if (firstLine)
		throw(std::string) "file is empty";
}

void Bitcoin::findDateAndCalculate()
{
	std::map<std::string, float>::iterator it;
	it = this->btcData.lower_bound(LineData.date);
	if (it == this->btcData.end())
	{
		it--;
		std::cout << LineData.date << " => " << LineData.value << " = " << LineData.value * (*it).second << std::endl;
		return;
	}
	if (it == this->btcData.begin())
	{
		std::cerr << "cannot find any closer data" << std::endl;
		return;
	}
	else
	{
		if ((*it).first != LineData.date)
			it--;
		std::cout << LineData.date << " => " << LineData.value << " = " << (float)(LineData.value * (*it).second) << std::endl;
	}
}
