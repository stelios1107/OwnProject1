#include <stdio.h>
#include <stdlib.h>
#include "../../include/ADTRecTree.h"

RecTree rectree_get_subtree(RecTree tree, int pos)
{
    if (tree == NULL)
        return NULL;
    if (pos == 0)
        return tree;
    if (pos % 2 == 1)
        return rectree_get_subtree(tree->left, pos / 2);
    else
        return rectree_get_subtree(tree->right, pos / 2 - 1);
}

RecTree rectree_replace_subtree(RecTree tree, int pos, RecTree subtree)
{
    if (tree == NULL)
        return subtree;
    if (pos == 0)
        return subtree;
    if (pos % 2 == 1)
        tree->left = rectree_replace_subtree(tree->left, pos / 2, subtree);
    else
        tree->right = rectree_replace_subtree(tree->right, pos / 2 - 1, subtree);
    return tree;
}
