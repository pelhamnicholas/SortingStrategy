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
		vector();
		~vector() {}; //destructor
		int at(int);
		void swap(int, int);
		void insert(int) {} = 0;
		void print() {} = 0;
		int size() {} = 0;
		void set_sort(SortAlgorithm*);
		void sort();
	
}