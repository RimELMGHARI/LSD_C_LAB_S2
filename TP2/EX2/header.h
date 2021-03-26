#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

int struct node
{
    int value;
    struct node *next_node;
}
typedef struct node node;
typedef struct node *t_list;

node create_node(node n);
void add_node(node n); //add to the end of the list
list array_to_list(array t);
void print_list(list l);
void remove_node(*node *p);

#endif
