#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h> 

typedef struct Data
{
    std::string s1;
    int n;
    std::string s2;
} Data;

class Serializer
{
public:
    Serializer();
    ~Serializer();
    uintptr_t *serialize(Data *data);
    Data *deserialize(uintptr_t *raw);
};

#endif