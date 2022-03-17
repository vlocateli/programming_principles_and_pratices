#include "std_lib_facilities.h"
//Write a program to display Dear <first_name>
//Writing a letter
int main(void){
	string name;
	string friend_name;
	int age;
	char friend_sex;
	cin >> name;
	cout << "Dear," << name << '\n'; 
	cout << "How are you? I'm fine" << '\n';
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately? \n";
	cout << "Enter the friend's sex\n";
	cin >> friend_sex;
	if(friend_sex == 'm' || friend_sex == 'M'){
		cout << "Please ask him to call me\n";
	}
	if(friend_sex == 'f' || friend_sex == 'F'){
		cout << "Please ask her to call me\n";
	}
	cout << "Enter your age\n";
	cin >> age;
	cout << "\nI heard you just had a birthday and your age is" << age << '\n';
	if(age == 0 || age < 0 || age == 110 || age > 110){
		simple_error("you are kidding\n");
	}

	
}
