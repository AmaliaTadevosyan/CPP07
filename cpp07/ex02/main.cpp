#include "Array.hpp"

int main() {
    // Create an array of integers with 5 elements
    Array<int> intArray(5);

    // Initialize and access elements
    for (unsigned int i = 0; i < intArray.size(); i++) {
        intArray[i] = i * 10;
    }

    // Copy the array and modify the original
    Array<int> intArrayCopy = intArray;
    intArray[2] = 999;

    // Print the contents of both arrays
    std::cout << "Original array elements: ";
    for (unsigned int i = 0; i < intArray.size(); i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Copied array elements: ";
    for (unsigned int i = 0; i < intArrayCopy.size(); i++) {
        std::cout << intArrayCopy[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}