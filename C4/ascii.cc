#include "std_lib_facilities.h"

/*
 * Prints the value of ascii letter and it's corresponding in decimal value 
 *
 * Author: Victor Locateli
 *
*/ 

int main(void) {
	char letter = 'A';
	int i = 0;
	while(i < 26){
		std::cout << char(letter+i) << "\t" << (int) (letter+i) << '\n';
		i++;
	}
	std::cout << '\n';
	letter = 'a';
	for(i = 0;i<26;i++){
		std::cout << char(letter+i) << "\t" << (int) (letter+i) << '\n';
	}
	
	letter = '0';
	std::cout << '\n';
	for(i = 0;i<10;i++){
		std::cout << char(letter+i) << '\t' << (int) (letter+i) << '\n';
	}
	

}

