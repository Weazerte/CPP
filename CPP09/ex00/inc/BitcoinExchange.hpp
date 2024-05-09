#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>

class Bitcoin {
    private :
        std::map<std::string, std::string> dateToData;
    
    public:
        Bitcoin();
        ~Bitcoin();
        Bitcoin(const Bitcoin &src);
        Bitcoin &operator=(const Bitcoin &src);

        void readAndPars(std::string fileName);
        bool parseDate(std::string& date);

        class GlobalUsageException : public std::exception {
            public: 
                virtual const char *what() const throw();
        };

        class DateUsageException : public std::exception {
            public: 
                virtual const char *what() const throw();
        };
};