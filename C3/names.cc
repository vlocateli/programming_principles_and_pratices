#include<iostream>
#include<string>
#include<cmath>

using namespace std;
int main(void)
{
	cout << "Please enter your first and second name\n";
	string first;
	string second;
	cin >> first >> second;
	string name = first + ' ' + second;
	cout << "Hello," << name << '\n';
}
