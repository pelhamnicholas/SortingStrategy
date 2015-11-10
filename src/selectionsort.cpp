#include "selectionsort.h"

void SelectionSort::sort(Container * container) {
    int min;

    for (int i = 0; i < container->size(); ++i) {
        min = i;
        for (int j = i+1; j < container->size(); ++j) {
            if (container->at(min) > container->at(j)) {
                min = j;
            }
        }
        if (min != i)
            container->swap(min, i);
    }
}
