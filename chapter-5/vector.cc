#include "../include/std_lib_facilities.h"

int main()
{
	try{
		vector<int>v;
		for(int x;cin>>x;){
			v.push_back(x);
		}
	
		for(int i = 0;i<=v.size();++i){
			cout << "v[" << i << "] " << v[i] << '\n';
		}
	}
	catch(Range_error &e)
	{
		std::cerr << "Range error occured\n" << e.what() << "\n";
	}
	//catch(const std::exception &exc)
	//{
	//	std::cerr << exc.what();
	//}
}
