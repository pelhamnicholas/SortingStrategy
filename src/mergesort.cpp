#include "mergesort.h"

void MergeSort::merge_help(int left, int left_end, int right, int right_end, int numbers) {
    while(left != left_end)
    {
      if(left < right || right == right_end)
      {
        numbers = left;
        left++;
      }
      else
      {
        numbers = right;
        right++;
      }
    }
    
    while (right != right_end)
    {
      numbers = right;
      right++;
      numbers++;
    }
}

void MergeSort::sort(Container* container) {
    if(container->size() <=1)
    {
      return;
    }
    
    unsigned middle = container->size() / 2;
    vector<int> left (container->begin(), container->begin() + middle);
    vector<int> right (container->begin() + middle, container->end());
    
    sort(left);
    sort(right);
    
    merge_help(left.begin(), left.end(), right.begin(), right.end(), container->begin());
    
    }
}