#ifndef CONTAINER_H
#define CONTAINER_H

class SortAlgorithm;

class Container {
    private:

    protected:
        SortAlgorithm * sortAlgo;

    public:
        Container() {};
        virtual ~Container() {};
        virtual int at(int ) = 0;
        virtual void swap(int , int) = 0;
        virtual void insert(int) = 0;
        virtual void print() = 0;
        virtual int size() = 0;
        virtual void set_sort(SortAlgorithm *) = 0;
        virtual void sort() = 0;
};

class SortAlgorithm {
    private:
    public:
        SortAlgorithm() {};
        ~SortAlgorithm() {};
        virtual void sort(Container *) = 0;
};

#endif
