#include "../include/std_lib_facilities.h"
#include <cmath>

/*
 * This program calculates the area of an hexagon
 * version 0.0.1
 * Author: Victor Locateli
 * Date: 26/08/2021
 *
 *
 */

double hexagon( double l )
{	double result = 0;
	if(l < 0){
		throw::invalid_argument("No negative values to hexagon\n");
	}
	result = ( 3 * ( pow( l, 2 ) ) * sqrt( 3 ) ) / 2;	

	return result;
}
int main()
{
	try{
		cout << hexagon(-2);
	
	}catch(std::invalid_argument){
		cout << "Oops! Invalid argument\n";
	}
}
