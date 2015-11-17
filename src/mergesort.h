#ifndef MERGESORT_H
#define MERGESORT_H

#include "container.h"
#include <vector>

class MergeSort : public SortAlgorithm {
    private:
    public:
        MergeSort() {};
        ~MergeSort() {};
        void sort(Container *);
        void merge_sort(Container *, int, int);
};

#endif
