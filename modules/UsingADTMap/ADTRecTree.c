#include "../../include/ADTCompTree.h"
#include "../../include/ADTRecTree.h"
#include <stdio.h>
#include <stdlib.h>

CompTree comptree_rectree_create(Pointer value, CompTree left, CompTree right){
    CompTree tree = (CompTree) malloc(sizeof(struct comp_tree));
    tree->value = value;
    tree->left = left;
    tree->right = right;
    return tree;
}

int comptree_rectree_size(CompTree tree){
    if(tree == NULL)
        return 0;
    return 1 + comptree_rectree_size(tree->left) + comptree_rectree_size(tree->right);
}

void comptree_rectree_destroy(CompTree tree) {
    if (tree == NULL) {
        return;
    }
    comptree_rectree_destroy(tree->left);
    comptree_rectree_destroy(tree->right);
    free(tree);

    tree = NULL;
}

Pointer comptree_rectree_value(CompTree tree) {
    if(tree == NULL)
        return NULL;
    return tree->value;
}
CompTree comptree_rectree_left(CompTree tree){
    if(tree == NULL)
        return NULL;
    return tree->left;
}

CompTree comptree_rectree_right(CompTree tree) {
    if(tree == NULL)
        return NULL;
    return tree->right;
}