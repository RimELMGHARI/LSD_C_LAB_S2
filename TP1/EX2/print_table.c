#include "header.h"

/*
** Note: iterating pointer array is the same as stack array.ok
*/
void    print_table(int *tab, int size)
{
    // iterate the array tab and print its elements
    int i;
    for(i=0; i<size; i++)
    {
    printf("T[%d] = %d \t",i,T[i]);
    }
}    
