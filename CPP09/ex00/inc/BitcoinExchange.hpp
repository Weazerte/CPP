#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>

class Bitcoin {
    private :
    std::map<std::string, std::string> dataCsv;
        std::map<std::string, std::string> dateToData;
    
    public:
        Bitcoin();
        ~Bitcoin();
        Bitcoin(const Bitcoin &src);
        Bitcoin &operator=(const Bitcoin &src);

        void readAndFill(std::string fileName);
        bool parseDate(std::string& date);
        void fillData();
        void convert();

        class NoSeparatorException : public std::exception {
            public:
                NoSeparatorException(const std::string& line) : message(line) {}

                virtual const char* what() const throw() {
                    std::string ret += message;
                    ret += ": no separator";
                    return ret.c_str();
                }

            private:
                std::string message;
        };

        class NoSuchFileException : public std::exception {
            public:
                NoSuchFileException(const std::string& fileName) : message(fileName) {}

                virtual const char* what() const throw() {
                    std::string ret += message;
                    ret += ": no such file";
                    return ret.c_str();
                }

            private:
                std::string message;
        };

        class BadInputException : public std::exception {
            public:
                BadInputException(const std::string& input) : message(input) {}

                virtual const char* what() const throw() {
                    std::string ret += "Error : Bad input => ";
                    ret += message;
                    return ret.c_str();
                }

            private:
                std::string message;
        };

        class DateUsageException : public std::exception {
            public: 
                virtual const char *what() const throw();
        };

        class ValueUsageException : public std::exception {
            public: 
                virtual const char *what() const throw();
        };
};