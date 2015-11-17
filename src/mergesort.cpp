#include "mergesort.h"

void MergeSort::sort(Container * container) {
    merge_sort(container, 0, container->size()-1);
}

void MergeSort::merge_sort(Container * container,
        int start, int end) {
    if (end - start < 1)
        return;

    int left = start;
    int mid = (end-start)/2+left;
    int right = (end-start)/2+1+left;

    merge_sort(container, start, mid);
    merge_sort(container, right, end);

    while (left <= mid && right <= end){
        if (container->at(left) <= container->at(right))
            left++;
        else {
            container->swap(left, right);
            left++;
            mid++;
            right++;
        }
    }
}
