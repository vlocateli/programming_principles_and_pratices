#include "sieve_of_eratosthenes.hh"
using s32 = int32_t;

// Name: Victor Locateli
// Print prime number up to N using the algorithm "Sieve of Eratosthenes"
// Date 3/2/2022

std::vector< bool > sieve_of_eratosthenes( s32 n )
{
    std::vector< bool > prime( n + 1, true );
    for( s32 p = 2; p * p <= n; p++ )
    {
        if( prime[p] == true )
        {
            for( s32 i = p * p; i <= n; i += p )
            {
                prime[i] = false;
            }
        }
    }

    return prime;
}
void print( std::vector< bool > prime, s32 n )
{
    for( s32 p = 2; p <= n; p++ )
    {
        if( prime[p] )
        {
            std::cout << GRN << p << " ";
        }
        else
        {
            std::cout << RED << p << " ";
        }
    }
    std::cout << "\n";
}
int main( int argc, char **argv )
{
    try
    {
        if( argc != 2 )
        {
            std::cerr << "Error\n Expected 3 arguments got " << argc << "\n";
            return 2;
        }

        s32 n                     = std::strtol( argv[1], NULL, 10 );
        std::vector< bool > prime = sieve_of_eratosthenes( n );
        print( prime, n );
    }
    catch( const std::exception &e )
    {
        std::cerr << e.what() << "\n";
    }

    catch( ... )
    {
        std::cerr << "Unhandled exception\n";
    }
}

