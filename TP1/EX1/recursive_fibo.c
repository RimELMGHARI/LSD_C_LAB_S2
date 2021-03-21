#include "header.h"


int recursive_fibo(int n)
{
    if (n==0)
    {
        return 0;
    }

    if (n==1)
    {
        return 1;
    }

    return(recursive_fibo(n-2)+ recursive_fibo(n-1));
}


int main()
{
    int n;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("fib(%d)=%d",n ,recursive_fibo(n));
    return 0;
}

}
