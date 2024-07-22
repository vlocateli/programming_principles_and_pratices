#include "std_lib_facilities.h"

int main(void) {
    char currency;
    float value;
    std::cout << "Enter the value followed by the currency (k, p or y)";
    cin >> value >> currency;

    switch (currency) {
	case 'y':
	    value *= 109.27;
	    break;

	case 'k':
	    value *= 8.84;
	    break;

	case 'p':
	    value *= 0.72;
	    break;

	default:
	    std::cout << "Please enter a valid currency\n";
	    break;
    }
	std::cout << "value in " << currency << " " << value;
}
