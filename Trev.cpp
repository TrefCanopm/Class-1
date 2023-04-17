#include "Trev.h"

Trev::Trev() 
{
	first = 0;
	second = 0;
}

int Trev::getFirst() const 
{
return first;
};
void Trev::setFirst(double i)
{
	first = i;
};

void Trev:: setSevond(double i)
{
	second = i;
}

void Trev::hipotenuse()
{
	double i;
	i = sqrt(pow(first, 2) + pow(second, 2));
	cout << i << endl;
}