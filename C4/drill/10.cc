#include <cfloat>
#include <iostream>
#include <string>
#include<vector>
using f64 = double;
using s32 = int32_t;
int main(void) {
	s32 size{0};
	std::cout << "Type the size of the vector\n";
	std::cin >> size;
	std::vector<f64>v(size);
	f64 smallest{DBL_MAX};
	f64 biggest{DBL_MIN};
	f64 input;
	f64 converted_unit{0};
	std::string unit;
	f64 sum{0};
	f64 number_of_values{0};
	std::cout << "Type a number followed by a unit\nCtrl+d to exit\n";
	while(std::cin >> input >> unit)
	{
		if (unit == "cm" || unit == " cm") {
			converted_unit = input / 100;
			std::cout << converted_unit << "m\n";
			sum+= converted_unit;
			v.push_back(converted_unit);
		} else if (unit == "y" || unit == "yard" || unit == "meter" ||
			   unit == "km" || unit == "gallons") {
			std::cout << "Unit rejected " << unit << '\n';
		} else if (unit == "m" || unit == " m") {
			converted_unit = input;
			std::cout << converted_unit << "m"<< '\n';
			sum+= converted_unit;
			v.push_back(converted_unit);
		} else if (unit == "in" || unit == " in") {
			converted_unit = input / 39.37;
			std::cout << converted_unit << "m" << '\n';
			sum+= converted_unit;
			v.push_back(converted_unit);
		} else if (unit == "ft" || unit == " ft") {
			converted_unit = input / 3.281;
			sum+= converted_unit;
			std::cout << converted_unit << "m" << '\n';
			v.push_back(converted_unit);
		}

		else {
			std::cout << "Could not resolve unit " << unit << '\n';
		}
		if(input > biggest)
		{
			biggest = converted_unit;
		}
		
		if(input < smallest)
		{
			smallest = converted_unit;
		}
		number_of_values++;
		std::cout << "Type a number followed by a unit\nCtrl+d to exit\n";
	}
	std::cout << "Sum = " << sum << "m" << '\n';
	std::cout << "Biggest  " << biggest << '\n';
	std::cout << "Smallest " << smallest << '\n';
	std::cout << "Number of values = " << number_of_values << '\n';
	std::cout << "[ ";
	for(f64 element : v)
	{
		if(element != 0){
			std::cout << element << " ";
		}
	}
	std::cout << "]\n";
}
