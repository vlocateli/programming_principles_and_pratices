#include "../include/std_lib_facilities.h"
enum class Month{
	jan = 1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};

Month int_to_month(int x)
{
	if(x<int(Month::jan) || int(Month::dec)<x){
		error("bad month\n");
	}
	return Month(x);
}
void f(int m){
	Month mm = int_to_month(m);
}

int main()
{
	enum Month{
		jan = 1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
	};
	Month m = feb;
	Month m2 = Month::feb;
}

