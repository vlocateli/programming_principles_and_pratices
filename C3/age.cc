#include <iostream>
#include <string>

#include "std_lib_facilities.h"

using f64 = std::double_t;
using s32 = std::int32_t;
int main(void){
	s32 age;
	cout << "Enter your age\n";
	cin >> age;
	cout << age * 12 << " months\n";
}
