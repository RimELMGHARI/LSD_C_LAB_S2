#include "header.h"

void affichageListe(list L)
{
    if(L==NULL)
        printf("[ ]");
    else
    {
        printf("[");
        list temp=L;
        while(temp->next!=NULL)
        {
            printf("%d, ",temp->data);
            temp=temp->next;
        }
        if(temp!=NULL)
            printf("%d",temp->data);
        printf("]\n");
    }
}
void ajoutDebut(int x,list * L)
{
    node * C=(node *)malloc(sizeof(node));
    C->data=x;
    C->next=*L;
    *L=C;
    return;
}
void ajoutFin(int x,list * L)
{
    list C=(list)malloc(sizeof(node));
    C->data=x;
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
}
void inserer(int x,list *L){
    if((*L) == NULL ){
		ajoutDebut(x,L);
        return ;
	}
    list temp=(*L);
    if (x<(temp->data)){
        ajoutDebut(x,L);
        return ;
    }
    while(temp->next!=NULL){
        if ((temp->data)<x && (temp->next->data)>x || temp->data==temp->next->data){
            list c = (list)malloc(sizeof(node));
			c -> data = x;
			c -> next = (temp)->next;
			temp->next = c;
			return;
        }
        temp=temp->next;
    }
    ajoutFin(x,L);
    return;
}
list recherche(int x,list L){
    list temp=L;

    while(temp!=NULL){
        if (x==temp->data)
            return temp;
        temp=temp->next;
    }
    return NULL;
}

list merge_liste(list L1,list L2){
  list temp1=L1;
  list temp2=L2;
  while (temp2!=NULL){
    inserer(temp2->data,&temp1);
    temp2=temp2->next;
  }
  list L=temp1;
  return L;
}

list remove_duplicated(list L){
    list T=NULL;
    list temp=L;
    while (temp!=NULL){
        if (recherche(temp->data,T)==NULL)
            ajoutFin(temp->data,&T);
        temp=temp->next;
    }
    return T;
}

list sort_list(list L){
    list temp=L;
    int a=0;
    int x=0;
    while(temp->next!=NULL){
        x=0;
        if (temp->data > temp->next->data){
            a=temp->data;
            temp->data=temp->next->data;
            temp->next->data=a;
            x=1;
        }
        if (x){
            temp=L;
        }
        else
            temp=temp->next;
    }
    return L;
}

