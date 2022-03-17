#include"../include/std_lib_facilities.h"
#include<cmath>

double quad_formula_x1(double A,double B,double C){
	double delta = B*B - 4 * A * C;
	if(delta<0){
		throw("Error\nNo real roots\n");
	}
	double X = (-B +sqrt(delta)) / (2*A);
	return X;
}
double quad_formula_x2(double A,double B,double C){
	double delta = B*B - 4 * A * C;
	if(delta<0){
		throw("Error\nNo real roots\n");
	}
	double X = (-B - sqrt(delta)) / (2*A);
	return X;
}

int main()
{
	double a = 2;
	double b = 7;
	double c = 0;
	cout << quad_formula_x1(a,b,c) << '\n';
	cout << quad_formula_x2(a,b,c) << '\n';
}
