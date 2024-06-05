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
        // void convert();

        class NoSeparatorException : public std::exception {
            private:
                std::string message;
            public:
                NoSeparatorException(const std::string& line) {
                    message = line + ": no separator";
                }

                virtual const char* what() const throw() {
                    return message.c_str();
                }

        };

        class NoSuchFileException : public std::exception {
        private:
            std::string message;
        public:
            NoSuchFileException(const std::string& fileName) {
                message = fileName + ": no such file";
            }

            virtual const char* what() const throw() {
                return message.c_str();
            }
        };

        class BadInputException : public std::exception {
            private:
                std::string message;
            public:
                BadInputException(const std::string& input) {
                    message = input + "Error : Bad input => ";
                }
                virtual const char* what() const throw() {
                    return message.c_str();
                }
        };
};