#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(void)
{
	cout << "Please enter two names";
	string first;
	string second;
	cin >> first >> second;
	if(first == second){
		cout << "Thats the same name";
	}

	if(first < second){
		cout << "first is alphabetically before " << second << '\n';

	}

	if(first > second){
		cout << "first is alphabetically after " << second << '\n';
	}
}
