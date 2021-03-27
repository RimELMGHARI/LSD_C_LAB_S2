#include "header.h"

void print_list(t_list l);
{
    t_list t=L;
    printf("[");
    while(t.next_node!=NULL)
    {
        printf("%d ",t.value);
        t=t.next_node;
    }
    printf("%d]",t.value);


}
