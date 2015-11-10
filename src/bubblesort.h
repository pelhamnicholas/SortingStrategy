#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "container.h"

class BubbleSort : public SortAlgorithm {
    private:

    public:
        BubbleSort() {};
        ~BubbleSort() {};
        void sort(Container *);
};

#endif
