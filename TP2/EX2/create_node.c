#include "header.h"

node create_node(node n)
{
    node * c=(node *)malloc(sizeof(node));
    n.next_node= NULL;
    return n;
}
