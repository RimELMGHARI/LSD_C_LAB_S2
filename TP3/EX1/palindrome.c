
#include"header.h"
#include"fct.h"

/*
struct celluleDouble
{
    int element;
    struct celluleDouble * suivant;
    struct celluleDouble * precedent;
};
typedef struct celluleDouble celluleDouble;

struct listeDouble
{
    celluleDouble * debut;
    celluleDouble * fin;
    unsigned longueur;
};
typedef struct listeDouble listeDouble;

struct node 
{
    char value;
    struct node * next;

};
typedef struct node node;
typedef struct node * list;

void ajoutDebut(char x,list * L)
{
    node * C=(node *)malloc(sizeof(node));
    C->value=x;
    C->next=*L;
    *L=C;
    return;
}

void ajoutFin(char x,list * L)
{
    list C=(list)malloc(sizeof(node));
    C->value=x;
    C->next=NULL;
    if(*L==NULL)
        *L=C;
    else
    {
        list temp=*L;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=C;
    }
    return;
}


int testVide(list L)
{
    if(L==NULL)
        return 1;
    return 0;
}


unsigned length(list L)
{
    unsigned l=0;
    if(testVide(L)==0)
    {
        list temp=L;
        while(temp!=NULL)
        {
            l++;
            temp=temp->next;
        }
    }
    return l;
}

*/
list stringToList(char *arr)
{
	list L;
	int j=0;
	while (arr[0][j] !="\0")
	{
		ajoutFin(arr[0][j],*L);
		j++;
	}
	return L;	
}

list reverse(list L)
{
	list temp=NULL;
	int i;
	while (L->next!=NULL)
	{
		
		ajoutFin(L->value ,*temp);
		L=L->next;
	}
	return temp;
}

char Palindrome(list L)
{
	int i=0;
	unsigned n=length(L);
	
	if(n=1)
	{
		return TRUE; 
	}
	else if (L==reverse(L))
	{
		return TRUE;
	}
	return FALSE;
}



int main(int ac, char **av)
{
	printf("%d\n", ac);
	int i=0,j=0;
	while(i<ac)
	{
		while (av[i][j] !="\0")
		{
			printf("%c\n", av[i][j]);
			j++;
		}
		i++
	}
	return 0;	
}
