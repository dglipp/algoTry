#include "mergeSort.hpp"

#include <iostream>

int main()
{
    std::vector<float> arr = {1.f, -3.f, 4.f, 6.f, 4.f, 2.f, 4.f, 6.f, 7.f, 1.f};

    for(auto el : arr)
    {
        std::cout << el << " ";
    }

    std::cout << "\nSORTED: ";
    MergeSort m{arr};

    for(auto el : arr)
    {
        std::cout << el << " ";
    }
}