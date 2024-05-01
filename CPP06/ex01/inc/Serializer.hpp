#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

class Serializer
{
public:
    Serializer();
    ~Serializer();
    void *serialize(Data *data);
    Data *deserialize(void *raw);
};

#endif