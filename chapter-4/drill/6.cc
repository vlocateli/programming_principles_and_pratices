#include<iostream>
#include<cfloat>

using s32 = int32_t;
using f64 = double;

int main()
{

	f64 n;
	f64 smallest {DBL_MAX};
	f64 biggest {DBL_MIN};
	std::string option  {""};
	while(option != "|")
	{
		std::cout << "\nEnter a number\n";
		std::cin >> n ;
		std::cout << "\nType | to exit\n";
		std::cin >> option;
		if(option != "|"){
			std::cout << n << '\n';
		}
		if(n < smallest)
		{
			smallest = n;
			std::cout << "\nSmallest so far " << n << '\n';
		}
		if(n > biggest)
		{
			biggest = n;
			std::cout << "\nLargest so far " << n << '\n';
		}
	}
	std::cout << "Biggest = " << biggest << '\n';
	std::cout << "Smallest = " << smallest << '\n';
}




