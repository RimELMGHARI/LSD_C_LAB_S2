#include "header.h"

tree insert(tree T,int x){
    if (T==NULL)
        return T=faireArbre(x,NULL,NULL);
    if (x==T->value)
        return T;
    if (x<T->value){
        insert(T->left,x);
        return T;
    }
    if (x>T->value){
        insert(T->right,x);
        return T;
    }    
}


int max_depth(tree T){
    if (T==NULL)
        return 0;
    if(T->left==NULL && T->right==NULL)
        return 1;
    if (T->left==NULL)
        return;
}

int recherche(int x, tree T){
    if (T=NULL)
        return 0;
    if (T->value ==x)
        return 1;
    if (T->value>x)
        return recherche(x,T->left);
    if (T->value<x)
        return recherche(x,T->right);    
}

int tree_size(tree T){
    if (T==NULL)
        return 0;
    if (T->left==NULL && T->right==NULL)
        return 1;
    if (T->left==NULL)
        return 1+tree_size(T->right);
    if (T->right==NULL)
        return 1+tree_size(T->left);
    return 1+tree_size(T->left)+tree_size(T->right);
}
