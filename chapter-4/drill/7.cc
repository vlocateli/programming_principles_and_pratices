#include <cfloat>
#include <iostream>
#include <string>
using f64 = double;
int main(void) {
    f64 smallest{DBL_MAX};
    f64 biggest{DBL_MIN};
    f64 input, converted_unit;
    std::string unit;
    f64 sum{0};
    while (std::cin >> input >> unit) {
	if (unit == "cm" || unit == " cm") {
	    std::cout << input << " cm" << '\n';
	    converted_unit = input;
		sum += input;
	}
	else if (unit == "y" || unit == "yard" || unit == "meter" ||
		unit == "km" || unit == "gallons") {
		std::cout << "Unit rejected " << unit << '\n';
	}
	else if (unit == "m" || unit == " m") {
	    converted_unit = input * 100;
	    std::cout << converted_unit << " cm\n";
		sum += converted_unit;
	} 
	else if (unit == "in" || unit == " in") {
	    converted_unit = input / 2.54;
	    std::cout << converted_unit << " cm" << '\n';
		sum += converted_unit;
	} 
	else if (unit == "ft" || unit == " ft") {
	    converted_unit = input / 30.48;
	    std::cout << converted_unit << "cm" << '\n';
		sum += converted_unit;
	}

	else {
	    std::cout << "Could not resolve unit " << unit << '\n';
	}
	if(converted_unit > biggest)
	{
		biggest = converted_unit;
	}
	
	if(converted_unit < smallest)
	{
		smallest = converted_unit;
	}
    }
	
	std::cout << "Sum = " << sum << '\n';
	std::cout << "Biggest  " << biggest << '\n';
	std::cout << "Smallest " << smallest << '\n';

}
