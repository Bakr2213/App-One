#include<string>
using namespace std;
class calculator
{
private:
	double num1, num2;
public:
	
	calculator();
	static double add(double a,double b);
	static double mul(double a, double b);
	static double sub(double a, double b);
	static double div(double a, double b);
	~calculator();

};


