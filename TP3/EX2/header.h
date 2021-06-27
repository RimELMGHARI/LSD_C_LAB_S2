#ifndef HEADER
#define HEADER

#include<stdio.h>
#include<stdlib.h>
#include>time.h>
struct node
{
  int data;
  struct node *next;
};
typedef struct node node;
typedef node * list;
void affichageListe(list L);
void ajoutDebut(int x,list * L);
void ajoutFin(int x,list * L);
void inserer(int x,list *L);
list recherche(int x,list L);
  
list sort_list(list L);
list merge_liste(list L1,list L2);
list remove_duplicated(list L);

#endif
