#include <iostream> 
#include <fstream> 
#include "triangle.h" 

using namespace std; 

triangle::triangle(int one, int two) 
{
	// set defaults 
	base = one; 
	height = two; 
	area = (base * height)/2; 
}

triangle::triangle(const triangle& temp)
{
	base = temp.base; 
	height = temp.height; 
	area = temp.area; 
	
}

triangle::~triangle() 
{
	base = 0; 
	height = 0; 
	area = 0.0; 
}

triangle& triangle::operator=(const triangle& temp)
{	
	if( this != &temp) 
	{
	base = temp.base; 
	height = temp.height; 
	area = temp.area;
	}

	return *this; 
}

bool triangle::operator==(const triangle& temp) const
{
	if( (base == temp.base) && (height == temp.height) )
	{
		return true; 
	}

	return false; 
}

triangle operator+(const triangle& one, const triangle& two)
{
	triangle t; 

	t.base = one.base + two.base;
	t.height = one.height + two.height;

	return t; 
}

ostream& operator<<(ostream&, triangle& temp)
{
	cout << endl << "base: " << temp.base << endl; 
	cout << "height: " << temp.height << endl; 
	cout << "area: " << (temp.base * temp.height)/2 << endl; 
}

ifstream& operator>>(ifstream&, triangle&)
{
	ifstream fin; 
	int num; 

	fin >> num;
}


