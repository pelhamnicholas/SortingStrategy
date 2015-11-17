#include "vector.h"
#inclue <iostream>
#include <vector>

using namespace std;


vector::vector()
{}

vector::~vector()
{}

int vector::at(int x)
{
	return integer_vector.at(x);
}

void vector::swap(int x, int y)
{
	int temp = 0;
	temp = integer_vector.at(x);
	integer_vector.at(x) = integer_vector.at(y);
	integer_vector.at(y) = temp;
}

void vector::insert(int x)
{
	integer_vector.insert(x);
}

void vector::print(int x)
{
  cout << "vector: [";
  
	for(int i = 0; i < integer_vector.size(); i++)
	{
		cout << integer_vector.at(i) << " ";
	}
 
  cout << "]" << endl;
}

int vector::size()
{
	return integer_vector.size();
}

void vector::set_sort(SortAlgorithm* sortAlgorithm)
{
  sortAlgo = sortAlgorithm;
}

void vector::sort()
{
  sortAlgo->sort(this);
}
