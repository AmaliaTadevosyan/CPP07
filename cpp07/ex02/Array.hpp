#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exeception>
#include <Array.tpp>

template <typename T>
class Array 
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& &other);
        Array& operator=(const Array& other);
        ~Array();

        T& operator[](unsigned int index);
        unsigned int size() const;

    private: T* data;
    unsigned int _size;
}

T& Array::operator[](unsigned int index)
{
    if (index >= _szie)
        throw std::cout_of_range("Index out of range");
    return data[index];
}

unsigned int Array::size() const
{
    return _size;
}



#endif