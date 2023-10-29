#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T, typename Func>
void    iter(T* arr, int length, Func func)
{
    for (int i = 0; i < length; i++)
        func(arr[i]);
}

template <typename T>
void    printElem(const T& elem)
{
    std::cout << elem << std::endl;
}


#endif