#include "mergeSort.hpp"

#include <deque>
#include <limits>
#include <iostream>

MergeSort::MergeSort(std::vector<float> &array)
{
    mergeSort(array, 0, array.size() - 1);
}

void MergeSort::mergeSort(std::vector<float> &array, unsigned int p, unsigned int r)
{
    if (p < r)
    {
        unsigned int q = (p + r) / 2;
        mergeSort(array, p, q);
        mergeSort(array, q + 1, r);
        merge(array, p, q, r);
    }
}

void MergeSort::merge(std::vector<float> &array, unsigned int p, unsigned int q, unsigned int r)
{
    std::deque<float> left(&array[p], &array[q + 1]);
    std::deque<float> right(&array[q + 1], &array[r + 1]);
    left.push_back(std::numeric_limits<float>::max());
    right.push_back(std::numeric_limits<float>::max());

    for (int idx = p; idx <= r; ++idx)
    {
        if (left[0] <= right[0])
        {
            array[idx] = left[0];
            left.pop_front();
        }
        else
        {
            array[idx] = right[0];
            right.pop_front();
        }
    }
}