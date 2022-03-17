#include "../include/std_lib_facilities.h"

int calculate_sum(vector<int> &v,int N){
	int sum = 0;
	if(N > v.size() - 1){
		throw("N bigger thand vector.size()");
	}
	for(int i = 0;i<N;i++){
		sum+= v[i];
	}
	return sum;
}

int main()
{
	vector<int> v(4);
	for(int j = 0;j<v.size();j++){
		v[j] = j;
	}
	try{
		cout << calculate_sum(v,3);
	
	}
	catch(char const*){
		cerr<< "Oops, N is bigger than the vector\n";
	}
}

