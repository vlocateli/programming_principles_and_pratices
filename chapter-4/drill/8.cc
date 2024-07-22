#include <cfloat>
#include <iostream>
#include <string>
using f64 = double;
int main(void) {
	f64 smallest{DBL_MAX};
	f64 biggest{DBL_MIN};
	f64 input;
	f64 converted_unit;
	std::string unit;
	f64 sum{0};
	f64 number_of_values{0};
	while(std::cin >> input >> unit)
	{
		if (unit == "cm" || unit == " cm") {
			converted_unit = input / 100;
			std::cout << converted_unit << "m\n";
			sum+= converted_unit;
		} else if (unit == "y" || unit == "yard" || unit == "meter" ||
			   unit == "km" || unit == "gallons") {
			std::cout << "Unit rejected " << unit << '\n';
		} else if (unit == "m" || unit == " m") {
			converted_unit = input;
			std::cout << converted_unit << "m"<< '\n';
			sum+= converted_unit;
		} else if (unit == "in" || unit == " in") {
			converted_unit = input / 39.37;
			std::cout << converted_unit << "m" << '\n';
			sum+= converted_unit;
		} else if (unit == "ft" || unit == " ft") {
			converted_unit = input / 3.281;
			sum+= converted_unit;
			std::cout << converted_unit << "m" << '\n';
		}

		else {
			std::cout << "Could not resolve unit " << unit << '\n';
		}
		if(converted_unit > biggest)
		{
			biggest = input;
		}
		
		if(converted_unit < smallest)
		{
			smallest = input;
		}
	}
	std::cout << "Sum = " << sum << "m" << '\n';
	std::cout << "Biggest  " << biggest << '\n';
	std::cout << "Smallest " << smallest << '\n';
}

