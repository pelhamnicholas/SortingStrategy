#ifndef CONTAINER_H
#define CONATAINER_H

#include "sortalgorithm.h"

class Container {
    private:

    public:
        Container() {};
        ~Container() {};
        virtual int at(int ) {} = 0;
        virtual void swap(int , int) {} = 0;
        virtual void insert(int) {} = 0;
        virtual void print() {} = 0;
        virtual int size() {} = 0;
        virtual void set_sort(SortAlgorithm *) {} = 0;
        virtual void sort() {} = 0;
};

#endif
