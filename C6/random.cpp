#include<iostream>
#include<random>
#include<vector>

std::vector<int> &fill(std::vector<int> &vector)
{
	static auto constexpr range_from = 1;
	static auto constexpr range_to = 10;
	std::random_device rand_dev;
	std::mt19937 generator(rand_dev());
	std::uniform_int_distribution<int> distribution(range_from,range_to);
	for(size_t  i = 0;i<vector.size();i++)
	{
		vector[i] = distribution(generator);
	}
	return vector;
}
int main(const int argc, const char **argv)
{
	
	if(argc != 2)
	{
		std::cerr << "Usage: random [opt]\n";
		std::cerr << "size - The size of the vector\n";
		exit(1);
	}
	std::string argv_str = argv[1];
	size_t size = stoi(argv_str);
	std::vector<int> v(size,0);
	fill(v);
	for(size_t i = 0;i<v.size();i++)
	{
		std::cout << v[i] << " " ;
	}
	std::cout << "\n";
}

