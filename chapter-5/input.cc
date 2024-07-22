#include "../include/std_lib_facilities.h"

char ask_user( string question )
{
    cout << question << "?(yes or no)\n";
    string answer = " ";
    cin >> answer;
    if( answer == "y" || answer == "yes" )
    {
        return 'y';
    }
    if( answer == "n" || answer == "no" )
    {
        return 'n';
    }

    return 'b';
}

int area( int lenght, int width )
{
    if( lenght <= 0 || width <= 0 )
    {
        return -1;
    }
    return lenght * width;
}

int framed_area( int x, int y )
{
    constexpr int frame_width = 2;
    if( x - frame_width <= 0 || y - frame_width <= 0 )
    {
        error( "non-positive area() argument called by framed area()" );
    }
    return area( x - frame_width, y - frame_width );
}

int f(int x,int y)
{
	int area1 = area(x,y);
	if(area1 <= 0 )
	{
		error("non positive area\n");
	}
	int area2 = framed_area(10,20); // any value < 2 will give an error
	int area3 = framed_area(y,1);
	double ratio = double(area1)/area3;
	return 0;
}
int main()
{
	f(10,20);
}
