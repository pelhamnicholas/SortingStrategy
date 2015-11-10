#include "bubblesort.h"

void BubbleSort::sort(Container * container) {
    int swaps;
    do {
        swaps = 0;
        for (int i = 0; i < container->size(); ++i) {
            if (container->at(i) > container->at(i+1)) {
                swaps++;
                container->swap(i, i+1);
            }
        }
    } while (swaps > 0);
}
