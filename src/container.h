#ifndef CONTAINER_H
#define CONATAINER_H

#include "sortalgorithm.h"

class Container {
    private:

    public:
        int at(int ) {} = 0;
        void swap(int , int) {} = 0;
        void insert(int) {} = 0;
        void print() {} = 0;
        int size() {} = 0;
        void set_sort(SortAlgorithm *) {} = 0;
        void sort() {} = 0;
};

#endif
