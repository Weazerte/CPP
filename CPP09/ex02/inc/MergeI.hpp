#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <deque>

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