#include "header.h"

void add_node(int x,t_list * L)
{
   t_list c=(node *)malloc(sizeof(node));
   c.value= x;
   c.next_node= NULL;
    if(*L==NULL)
        L = C;
    else
    {
        liste t = *L;
        while(t->next_node != NULL)
            t = t->next_node;
    }
}

