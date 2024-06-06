#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <exception>

class Bitcoin {
    private :
        struct
        {
            float	value;
            std::string date;
        } LineData;
        std::map<std::string, float> btcData;
        Bitcoin(const Bitcoin &src);
        Bitcoin &operator=(const Bitcoin &src);
    public:
        Bitcoin();
        ~Bitcoin();

        void readAndFill(std::string fileName);
        void checkDate(int year, int month, int day);
        int isLeapYear(int year);
        void fillData();
        void findDateAndCalculate();
        void checkValues(float value);

};