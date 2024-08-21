#include "calculator.h"
#include <iostream>
using namespace std;
calculator::calculator()
{
	cout << "\t ****** Welcome to the calculator ****** \n";
}

double calculator::add(double n1,double n2)
{
	return n1 + n2;
}

double calculator::mul(double n1 , double n2)
{
	return n1 * n2;
}

double calculator::sub(double n1, double n2)
{
	return n1 - n2;
}
double calculator::div(double n1, double n2)
{
	if (n2 == 0)
	{
		cout << "Division By Zero" << endl;
		return INFINITY;
	}
	else {
		return n1 / n2;
	}
}
calculator::~calculator()
{
	cout << "\nCome again \n";
}


