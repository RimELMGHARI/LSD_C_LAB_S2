#include "header.h"

list array_to_list(int length);
{
    int T[length];
    t_list L;

    if(length==0)
        return L;

    L=create_node(T[0]);
    for (int i = 1; i < length ; i++)
    {
        add_node(T[i],L);
    }
    return L;
}
