#include "../inc/Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

void *Serializer::serialize(Data *data){
    char *raw = new char[sizeof(Data)];
    Data *d = reinterpret_cast<Data *>(raw);

    d->s1 = data->s1;
    d->n = data->n;
    d->s2 = data->s2;

    return raw;
}

Data *Serializer::deserialize(void *raw){
    Data *data = reinterpret_cast<Data *>(raw);

    return data;
}