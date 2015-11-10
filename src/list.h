#ifndef LIST_H
#define LIST_H

#include <list>
#include <iostream>
#include "container.h"

using namespace std;

class List : public Container {
    private:
        list<int> integer_list;

    public:
        List();
        ~List() {};
        int at(int);
        void swap(int, int);
        void insert(int);
        void print();
        int size();
        void set_sort(SortAlgorithm *);
        void sort();
};

#endif
