include "header.h"
  

int leaf_sum(tree T){
    if (T==NULL)
        return 0;
    return 1+leaf_sum(T)
}

#include "header.h"
int tree_depth(tree T){
    if (T==NULL)
        return 0;
    if (T->left==NULL && T->right == NULL)
        return 1;
    if ( T->left==NULL)
        return 1+tree_depth(T->right);
    if (T->right==NULL)
        return 1+tree_depth(T->left);
    return max(tree_depth(T->left),tree_depth(T->right));
}

int tree_diameter(tree T){
    if (T==NULL)
        return 0;
    if (T->left==NULL && T->right == NULL)
        return 1;
    return 1+tree_depth(T->left)+tree_depth(T->right);
}
