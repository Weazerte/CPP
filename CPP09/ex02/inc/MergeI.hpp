#pragma once 

#include <algorithm>
#include <iostream>
#include <deque>
#include <vector>
#include <ctime>
#include <sstream>
#include <cstddef>


#define START(x) x + 1
#define BEFOR  "\e[0;31m"
#define AFTER  "\e[0;32m"
#define MAG "\e[0;35m"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class MergeInsert {

private:
    std::vector<int> numbersV;
    std::deque<int> numbersD;

public:
    MergeInsert();
    MergeInsert(std::string input);
    MergeInsert(MergeInsert const & src);
    MergeInsert & operator=(MergeInsert const & src);
    ~MergeInsert();

    

};