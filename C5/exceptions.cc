#include "../include/std_lib_facilities.h"

class Bad_area{};
/*
 * calculate the area of a rectangle
 * pre-conditions: length and width are positive
 * post-condition: return a positive value that is the area
*/ 
int area( int lenght, int width )
{
	if(lenght<=0 || width<=0)
	{
		throw Bad_area{};
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

int main()
{
	try
	{
		int x = -1;
		int y = 2;
		int z = 4;
		int area1 = area(x,y);
		int area2 = framed_area(1,z);
		int area3 = framed_area(y,z);
		double ratio = (double) area1 / area3;
	}
	catch(Bad_area){
		cerr << "Oops! bad arguments to area()\n";
	}
}


