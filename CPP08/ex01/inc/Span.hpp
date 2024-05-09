#pragma once 

#include <iostream>
#include <vector>

class Span {
    public :
        Span(unsigned int n);
        Span(Span const &other);
        Span &operator=(Span const &other);
        ~Span();
        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;
        void fill(void);
    private :
        Span();
        unsigned int _n;
        std::vector<unsigned int> _numbers;

};