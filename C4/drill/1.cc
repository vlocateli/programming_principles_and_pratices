#include<iostream>

using s32 = int32_t;
int main()
{
	s32 n1,n2;
	
	std::string option;
	while(option != "|")
	{
		std::cin >> n1 >> n2;
		std::cin >> option;
		if(option != "|"){
			std::cout << n1 << " " << n2 << '\n';
		}
	}
}
