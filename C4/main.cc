#include "std_lib_facilities.h"
int square(int x);
void print_square(int v);
void write_sorry(void);
int main(void) {
	
	vector<double>v(12);
	
	for(long unsigned int i =0 ;i<v.size();i++){
		v[i] = i * i;
	}
	v.push_back(300);
	cout << v.size();
	cout << '\n';	
	for(int x:v){
		cout << x << '\n';
	}
}

int square(int x){
	int result = 0;
	for(int i = 0;i<x;i++){
		result += x;
	}

	return result;
}
void write_sorry(void){
cout << "Sorry\n";
}

void print_square(int v){
	cout << '\t' << v*v << '\n';
}

