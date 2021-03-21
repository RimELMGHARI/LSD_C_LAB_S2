#include "header.h"

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name

static bool    is_prime_opt(int n)
{
    int i;
    for (i==2; i<=sqrt(abs(n)); i++)
    {
        if(n%i==0)
        { 
            return 0;
        }
    }
    return 1;
}

void    get_primes_opt(int n)
{  
    int i;
    if (n>=2)
    {
        printf("%d",2);
    }
    for(i==2; i< abs(n); i++)
    {
       
        if (i%2==1) and (is_prime(i)==1)
            {
                printf("%d",i);
            }
    }
}


