#include<iostream>
#include<vector>
#include<stdlib.h>
#include<cstdlib>
#include<cstring>

std::vector<int> & fill(std::vector<int> &v)
{
	for(size_t i = 0;i<v.size();i++)
	{
		v[i] = 1  + rand() % 10;
	}
	return v;
}

int main(int argc,const char  *argv[])
{
	srand(time(nullptr));
	if(argc != 2)
	{
		std::cerr << "Usage: vector <size>\n";
		exit(1);
	}
	int64_t n = std::atoi(argv[1]);
	std::vector<int>v(n,0);
	fill(v);
	for(int element : v)
	{
		std::cout << element << " ";
	}
	std::cout << "\n";
}


