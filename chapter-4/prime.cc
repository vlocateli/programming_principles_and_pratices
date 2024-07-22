#include<iostream>
#include<cmath>

using s32 = std::int32_t;


bool is_prime(s32 n)
{
	if(n % 2 == 0 && n != 2|| n == 0 || n == 1)
	{
		return false;
	}
	for(s32 i = 2;i<=std::sqrt(n);i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

s32 main(int argc,char **argv)
{
	try{
		if(argc != 2)
		{
			std::cerr << "ERROR\t Wrong number of arguments\n";
			std::cerr << "Expected 2 arguments " << "got " 
			<< argc << "\n";
			return 2;
		}
		s32 n = strtol(argv[1],nullptr,10);
		for(s32 i = 2;i<=n;i++)
		{
			if(is_prime(i))
				{
					std::cout << i << " is prime\n";	
				}
		}
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	catch(...)
	{
		std::cerr << "Unhandled exception\n";
	}
}
