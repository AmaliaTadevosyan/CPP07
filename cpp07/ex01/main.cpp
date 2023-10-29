#include "Iter.hpp"

int main() 
{
    // Test with an integer array
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Integer array: ";
    iter(intArray, intArrayLength, printElem<int>);
    std::cout << std::endl;

    // Test with a double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Double array: ";
    iter(doubleArray, doubleArrayLength, printElem<double>);
    std::cout << std::endl;

    // Test with a string array
    std::string strArray[] = {"Hello", "World", "C++", "Templates"};
    size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "String array: ";
    iter(strArray, strArrayLength, printElem<std::string>);
    std::cout << std::endl;

    return 0;
}