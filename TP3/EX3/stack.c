// Include the necessary libraries
# include <stdlib.h>
# include <stdio.h>
# include <limits.h> // Contains INT_MIN definition


// The stack struct
typedef struct	s_stack
{
	int data;
	struct s_stack	*next;
}t_stack;

/* ********** */
/*     STACK FUNCTIONS        */

t_stack                	*new_stack(int data);
int			is_empty(t_stack *head);
void                 	push(t_stack **head, int data);
int			pop(t_stack **head);
int              	stack_len(t_stack *head);
int			peek_stack(t_stack *head);
void			print_stack(t_stack *head);
/* ********** */

t_stack *new_stack(int data)
{
	t_stack *P=(t_stack *)malloc(sizeof(t_stack));
	P->data=data;
	P->next=NULL;
	return P;
}

int is_empty(t_stack *head)
{
	if (head==NULL)
		return 1;
	return 0;
}

void push(t_stack **head, int data)
{
	if(is_empty(*head)==1)
		new_stack(data);
	else
	{
		t_stack *C=new_stack(data);
    		C->next=*head;
    		*head=C;
	}
}

int pop(t_stack **head)
	
{
	int s;
	if (is_empty(*head)==1)
		return INT_MIN;
	else 
	{
		t_stack *temp=*head;
		*head=(*head)->next;
		int s= temp->data;
		free(temp);
	}
	return s;
}

int peek_stack(t_stack *head)
{
	
	if (is_empty(head)==1)
		return INT_MIN;
	return head->data;		
}

int stack_len(t_stack *head)
{
	int len=0;
	if(is_empty(head)==1)
		return 0;
	else
	{
		t_stack *temp=head;
		while (temp!=NULL)
		{
			len++;
			temp=temp->next;		
		}	
	}
}

void show_stack(t_stack *P)
{
    t_stack *temp=P;
    while(temp!=NULL)
    {
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    if(temp!=NULL)
        printf("%d\n",temp->data);
}

int main()
{
	t_stack *head=new_stack(0);
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	pop(&head);
	show_stack(head);
	int s=peek_stack(head);
	int l=stack_len(head);
	printf("%d \n",s);
	printf("%d",l);
	return 0;
}
