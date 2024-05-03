#pragma once

#include <iostream>

class Array {
    private:
        unsigned int _size;
        int *_array;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const & src);
        ~Array();

        Array & operator=(Array const & src);
        int & operator[](unsigned int i);
        int operator[](unsigned int i) const;
        unsigned int size() const;

        class OutOfLimitsException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
}