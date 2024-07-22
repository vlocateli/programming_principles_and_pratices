#include "../include/std_lib_facilities.h"
class X
{
    public:
    int m;
    int mf( int v )
    {
        int old = m;
        m       = v;
        return old;
    }
};

/*struct Date{
	int y,m,d;
	Date(int y,int m,int d);
	void add_day(int n);
};

*/

class Date{
	public:
	Date(int year,int month,int day);
	void add_day(int n);
	int month_(){return month;}
	int day_(){return day;}
	int year_(){return year;}
	private:
	int year,month,day;
	bool is_valid();
};


int main()
{
	Date d {2011,20,12};
	d.add_day(10);

}


Date::Date(int year,int month,int day)
	:year{year}
	,month{month}
	,day{day}
{	 	
	if(!is_valid()){
		throw Invalid{} ;
	}	
}


void Date::add_day(int n)
{
	this->day+=n;
}

bool Date::is_valid()
{
	if(month < 1 || 12 < month){
		return false;
	}
}

void f(int x,int y)
{
	try{
		Date dxy(2004,x,y);
		dxy.add_day(2);
	}
	catch(Date::Invalid){
		error("invalid date\n");
	}
}
