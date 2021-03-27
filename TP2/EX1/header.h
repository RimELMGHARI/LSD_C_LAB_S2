
#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct s_point
{
	int n;
	int m;
};
typedef struct s_point t_point;

int  **allocate_array(t_point t);
int** array_inputs(int **d,t_point t);
void position(t_point t);



#endif
