#ifndef VECTOR_H
#define VECTOR_H
#include "container.h"


class Vector : public Container:
	private:
		int size;
		int capacity;

	public:
		vector();
		~vector();
		int at(int);
		void swap(int, int);
		void insert(int) {} = 0;
		void print() {} = 0;
		int size() {} = 0;
		void set_sort(SortAlgorithm*);
		void sort();
	
