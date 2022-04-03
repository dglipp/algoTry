#include <vector> 

class MergeSort
{
    public:
        MergeSort(std::vector<float> & array);

    private:
        void mergeSort(std::vector<float> &array, unsigned int p, unsigned int r);
        void merge(std::vector<float> &array, unsigned int p, unsigned int q, unsigned int r);
};