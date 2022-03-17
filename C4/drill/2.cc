#include<iostream>
#include<climits>

using s32 = int32_t;


int main()
{

	s32 n1,n2;
	s32 smallest = INT_MAX;
	s32 biggest = INT_MIN;
	std::string option;
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
	}
	std::cout << "Biggest = " << biggest << '\n';
	std::cout << "Smallest = " << smallest << '\n';
	
}
