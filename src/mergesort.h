#ifndef MERGESORT_H
#define MERGESORT_H

#include "container.h"

class MergeSort : public SortAlgorithm {
    protected:
    int max(int, int);
    void merge_help(int, int, int, int, int);

    public:
        MergeSort() {};
        ~MergeSort() {};
        void sort(Container *);
};

#endif