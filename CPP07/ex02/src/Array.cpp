#include "../inc/Array.hpp"

Array::Array() : _size(0), _array(NULL) {}

Array::Array(unsigned int n) : _size(n), _array(new int[n]) {}

Array::Array(Array const & src) : _size(src._size), _array(new int[src._size]) {
    for (unsigned int i = 0; i < _size; i++) {
        _array[i] = src._array[i];
    }
}

Array::~Array() {
    delete[] _array;
}

Array & Array::operator=(Array const & src) {
    if (this != &src) {
        delete[] _array;
        _size = src._size;
        _array = new int[src._size];
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = src._array[i];
        }
    }
    return *this;
}

int Array::operator[](unsigned int i) const {
    if (i >= _size) {
        throw Array::OutOfLimitsException();
    }
    return _array[i];
}

unsigned int Array::size() const {
    return _size;
}

const char* Array::OutOfLimitsException::what() const throw() {
    return "Error: index out of limits";
}