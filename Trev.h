#pragma once

#include <iostream>
#include <cmath>
using namespace std;

class Trev
{
	double first;
	double second;
public:

	Trev();
	
	int getFirst() const;
	void setFirst(double i);
	void setSevond(double i);
	void hipotenuse();
};