#include "../include/std_lib_facilities.h"
int area( int lenght, int width )
{
    if( lenght <= 0 || width <= 0 )
    {
        error( "Non positive argument\n" );
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
void error_( string s )
{
    throw runtime_error( s );
}
double some_function()
{
    double d = 0;
    cin >> d;
    if( !cin )
    {
        error_( "couldn't read a double in 'some_function()'" );
    }
    return d;
}
int main()
{
    /*
    try
    {
        int x        = -1;
        int y        = 2;
        int z        = 4;
        int area1    = area( x, y );
        int area2    = area( 1, z );
        int area3    = framed_area( y, z );
        double ratio = double( area1 ) / area3;
        std::cout << area1 << '\n' << area2 << '\n' << area3 << '\n' << ratio << '\n';
        return 0;
    }
    catch( runtime_error &e )
    {
        cerr << "runtime error:" << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch( ... )
    {
        cerr << "Oops unknow exception\n";
        keep_window_open();
        return 2;
    }
    */
    // error("error on main:"," line 66\n");
    int x1  = narrow_cast< int >( 2.9 );
    int x2  = narrow_cast< int >( 2.0 );
    char c1 = narrow_cast< char >( 1066 );
    char c2 = narrow_cast< char >( 85 );
}

