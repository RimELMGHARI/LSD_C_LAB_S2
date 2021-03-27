#include "header.h"

void remove_node(node *p; t_list *t);
{
    while (*t.next_node !=p)
    {
        *t=*t.next_node;
        if  (*t.next_node== p)
        {
            free(*t);
            *t=
        }
        else
        {
            liste l = *t;
            liste l1 = *t;
            while(l.next_node != p)
                {
                l1 = l;
                l = l.next_node;
                }
            l1.next_node = l;
            free(l);
        }
    }
}

