#include "../inc/Serializer.hpp"

int main(){
    Serializer s;
    Data data;
    data.s1 = "Hello";
    data.n = 42;
    data.s2 = "World";

    uintptr_t *raw = s.serialize(&data);
    Data *d = s.deserialize(raw);

    std::cout << "s1: " << d->s1 << std::endl;
    std::cout << "n: " << d->n << std::endl;
    std::cout << "s2: " << d->s2 << std::endl;

    return 0;
}