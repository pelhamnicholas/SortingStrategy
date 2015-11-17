#ifndef VECTOR_H
#define VECTOR_H
#include "container.h"

#include <iostream>
#include <vector>

using namespace std;

class Vector : public Container {
	private:
		vector<int> integer_vector;

	public:
		Vector();
		~Vector() {}; //destructor
		int at(int);
		void swap(int, int);
		void insert(int);
		void print();
		int size();
		void set_sort(SortAlgorithm*);
		void sort();
	
};

#endif
