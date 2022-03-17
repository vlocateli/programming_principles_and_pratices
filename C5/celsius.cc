#include"../include/std_lib_facilities.h"

/*
 * calculates the temperature in fahrenheit
 * author: victor locateli
 * date: 26/08/2021
 *
*/ 
double ctof(double celsius){
	double fahrenheit = celsius * (9.0/5) + 32; 
	return fahrenheit; 
}
/* calculates the temperature in celsius
 * author: victor locateli
 * date: 26/08/2021
*/ 
double ftoc(double fahrenheit){
	double celsius = (fahrenheit - 32) * 5.0/9;
	return celsius;
}
int main()
{
	cout << ftoc(100);
	cout << '\n';
	cout << ctof(32);
}
