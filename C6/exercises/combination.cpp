#include <cstdio>
#include <cstdlib>
#include <iostream>

using s64 = int64_t;
using s32 = int32_t;


s64 rec_factorial( s64 n )
{
    if( n == 0 || n == 1 )
    {
        return 1;
    }

    return n * rec_factorial( n - 1 );
}

s64 iter_factorial( s64 n )
{
    s64 result{ 1 }, i{ 1 };
    for( ; i <= n; i++ )
    {
        result *= i;
    }

    return result;
}
s64 permutation( s64 n, s64 k )
{
    s64 result{ 1 };
    return result = iter_factorial( n ) / ( iter_factorial( n - k ) );
}
s64 combination( s64 n, s64 k )
{
    s64 result{ 1 };
    result = iter_factorial( n ) / ( iter_factorial( n - k ) * iter_factorial( k ) );
    return result;
}
s32 main( int argc, char **argv )
{
    try
    {
        if( argc != 4 )
        {
            std::cerr << "Usage: factorial -opt <n> <k>\n";
            std::cerr << "-c : Calculate combination\n";
            std::cerr << "-p : Calculate permutation\n";
            return 1;
        }
        std::string option = argv[1];
        if( option == "-c" )
        {
            int n = strtol( argv[2], nullptr, 10 );
            int k = strtol( argv[3], nullptr, 10 );
            if( n < 0 || k < 0 )
            {
                throw std::invalid_argument( "n or k less than zero\n" );
                return -1;
            }
            std::cout << combination( n, k ) << "\n";
        }

        if( option == "-p" )
        {
            int n = strtol( argv[2], nullptr, 10 );
            int k = strtol( argv[3], nullptr, 10 );
            if( n < 0 || k < 0 )
            {
                throw std::invalid_argument( "n or k less than zero\n" );
                return -2;
            }
            std::cout << permutation( n, k ) << "\n";
        }
    }
    catch( std::exception &e )
    {
        std::cerr << e.what() << "\n";
    }
    catch( ... )
    {
        std::cerr << "Unhandled exception\n";
    }
}
