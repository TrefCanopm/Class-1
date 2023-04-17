#include <iostream>
#include <cmath>
#include "Trev.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");

	Trev trev;

	cout << "¬ведите значение катетов" << endl;
	double a, b;
	cin >> a >> b;
	trev.setFirst(a);
	trev.setSevond(b);
	trev.hipotenuse();
}