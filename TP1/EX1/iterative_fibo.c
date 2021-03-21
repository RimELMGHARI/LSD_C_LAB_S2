#include "header.h"

int iterative_fibo(int n)
{
    if (n==0)
    {
        return 0;
    }

    if (n==1)
    {
        return 1;
    }

    int f0=0;
    int f1=1;
    int fi;
    int i;
    if (n>=2)
    {
        for (i==2;i<=n;i++)
        {
          fi=f0+ f1;
          f0=f1;
          f1=fi ;
        }
    }

    return fi;
}
