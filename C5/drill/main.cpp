#include <iostream>

int main() {

	try{
		//test code go here
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
	}
	catch(...)
	{
		std::cerr << "Unhandled exception\n";
	}

}
