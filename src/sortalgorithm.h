#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H

#include "container.h"

class SortAlgorithm {
    private:
    public:
        SortAlgorithm() {};
        ~SortAlgorithm() {};
        virtual void sort(Container *) {} = 0;
};

#endif
