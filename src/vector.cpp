#include "vector.h"
vector::vector()
{
	size = 0;
	capacity = 0;
}

vector::~vector()
{

}

int vector::at(int x)
{
	return vector.at(x);
}

void vector::swap(int x, int y)
{
	int temp = 0;
	temp = vector.at(x);
	vector.at(x) = vector.at(y);
	vector.at(y) = temp;
}

void vector::insert(int x)
{
	vector.pushback(x);
}

void vector::print(int x)
{
	vector.sort();
	for(int i = 0; i < vector.size(); i++)
	{
		cout << vector.at(i) << endl;
	}
}

int vector::size()
{
	return vector.size();
}

void vector::set_sort(SortAlgorithm*)
{

}

void vector::sort()
{

}
