#include "Array.hpp"

ArraY::Array() : data(nullptr), _size(0)
{
    std::cout << "Array default constructor" << std::endl;
}

Array::Array(unsigned int n) : _size(n)
{
    std::cout << "Array parameter constructor" << std::endl;
    data = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        data[i] = T();
}

Array::Array(const Array& other)
{
    std::cout << "Array copy constructor" << std::endl;
    data = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        data[i] = other.data[i];
}

Array& Array::operator=(const Array& other)
{
    std::cout << "Array operaotr assignment" << std::endl;
    if (data != nullptr)
        delete[] data;

    if (this != &other)
    {
        _size = other._size;
        data = new T(_size);
        for (unsigned int i = 0; i < _size; i++)
            data[i] = other.data[i];
    }
    return (*this);
}

Array::~Array()
{
    if (data != nullptr)
        delete[] data;
}

