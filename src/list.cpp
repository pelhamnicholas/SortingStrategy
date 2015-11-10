#include "list.h"

List::List() {
}

int List::at(int i) {
    list<int>::iterator itr = integer_list.begin();
    for (int j = 0; j < i; ++i)
        itr++;
    return *itr;
}

void List::swap(int i, int j) {
    int temp;
    list<int>::iterator itr_1 = integer_list.begin();
    list<int>::iterator itr_2 = integer_list.begin();

    for (int k = 0; k < i; ++k)
        itr_1++;
    for (int k = 0; k < j; ++k)
        itr_2++;

    temp = *itr_1;
    *itr_1 = *itr_2;
    *itr_2 = temp;
}

void List::insert(int element) {
    integer_list.push_back(element);
}

void List::print() {
    cout << "List: [ ";

    for (list<int>::iterator i = integer_list.begin();
            i != integer_list.end(); ++i) {
        cout << *i << " ";
    }
    cout << "]" << endl;
}

int List::size() {
    return integer_list.size();
}

void List::set_sort(SortAlgorithm * sortAlgorithm) {
    sortAlgo = sortAlgorithm; 
}

void List::sort() {
    sortAlgo->sort(this);
}
