#include "std_lib_facilities.h"

int main(void){
	constexpr double cm_per_inch  {2.54};
	double lenght {1};
	char unit {'a'};
	cout << "Please enter a lenght followed by a unit (c or i):\n";
	cin >> lenght >> unit;
	switch(unit){
		case 'i':
			cout << lenght << " in == " << cm_per_inch*lenght << "cm\n";
			break;
		
		case 'c':
			cout << lenght << "cm == " << lenght/cm_per_inch << "in\n";
			break;
		default:
			cout << "Sorry, I don't know a unit called " << unit << '\n';
			break;
	}
}
