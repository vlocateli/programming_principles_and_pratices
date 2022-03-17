#include<iostream>
#include<cfloat>

using s32 = int32_t;
using f64 = double;

int main()
{

	f64 n1,n2;
	f64 smallest {DBL_MAX};
	f64 biggest {DBL_MIN};
	std::string option = "";
	while(option != "|")
	{
		std::cin >> n1 >> n2;
		std::cin >> option;
		if(option != "|"){
			std::cout << n1 << " " << n2 << '\n';
		}
		if(n1 < smallest)
		{
			smallest = n1;
		}
		if(n2 < smallest)
		{
			smallest = n2;
		}
		if(n1 > biggest)
		{
			biggest = n1;
		}
		if(n2 > biggest)
		{
			biggest = n2;
		}
		if(n1 == n2)
		{
			std::cout << "The numbers are equal\n";
		}
	}
	std::cout << "Biggest = " << biggest << '\n';
	std::cout << "Smallest = " << smallest << '\n';
	
}


