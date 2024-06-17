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
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"

class PmergeMe
{

public:

    PmergeMe();
    ~PmergeMe();
    PmergeMe& operator=(const PmergeMe& other);
    PmergeMe(const PmergeMe& other);

    static void mergeInsertSortVector(std::vector<int> &container, int start, int end);
    static void mergeSortVector(std::vector<int> &container, int start, int mid, int end);
    static void insertSortVector(std::vector<int> &container, int start, int end);

    static void mergeInsertSortDeque(std::deque<int> &container, int start, int end);
    static void mergeSortDeque(std::deque<int> &container, int start, int mid, int end);
    static void insertSortDeque(std::deque<int> &container, int start, int end);

    static void runVector(std::vector<int> &container);
    static void runDeque(std::deque<int> &container);
};

void print(std::vector<int> &, std::deque<int> &);
void caluclateTime(std::vector<int> &, std::deque <int> &, double &, double &);
int midPoint(int start, int end);