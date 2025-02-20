#include "../inc/Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

uintptr_t *Serializer::serialize(Data *data){
    return (reinterpret_cast<uintptr_t *>(data));
}

Data *Serializer::deserialize(uintptr_t *raw){
    return (reinterpret_cast<Data *>(raw));
}