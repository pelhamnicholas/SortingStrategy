#include "vector.h"
#include <iostream>
#include <vector>

using namespace std;


Vector::Vector()
{}

int Vector::at(int x)
{
	return integer_vector.at(x);
}

void Vector::swap(int x, int y)
{
	int temp = 0;
	temp = integer_vector.at(x);
	integer_vector.at(x) = integer_vector.at(y);
	integer_vector.at(y) = temp;
}

void Vector::insert(int x)
{
	integer_vector.push_back(x);
}

void Vector::print()
{
  cout << "vector: [";
  
	for(int i = 0; i < (int)integer_vector.size(); i++)
	{
		cout << integer_vector.at(i) << " ";
	}
 
  cout << "]" << endl;
}

int Vector::size()
{
	return integer_vector.size();
}

void Vector::set_sort(SortAlgorithm* sortAlgorithm)
{
  sortAlgo = sortAlgorithm;
}

void Vector::sort()
{
  sortAlgo->sort(this);
}
