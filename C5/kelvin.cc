#include "../include/std_lib_facilities.h"

double ctok( double c )
{
    if( c  < -273.15 )
    {
		error("Invalid temperature\n");
	} 
    double k = c + 273.15;
    return k;
}
int main()
{
	try{
	cout << ctok( -273.8 );
	}
	catch(std::runtime_error){
		cout << "Oops! Bad temperature\n";
	}
}
