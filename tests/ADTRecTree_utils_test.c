#include "../include/acutest.h"
#include "../include/ADTRecTree_utils.h"
#include "../include/ADTRecTree.h"

void test_rectree_get_subtree(void)
{
    
    RecTree tree = rectree_create((void*)0, NULL, NULL);
    RecTree tree1 = rectree_create((void*)1, NULL, NULL);
    RecTree tree2 = rectree_create((void*)2, NULL, NULL);
    RecTree tree3 = rectree_create((void*)3, NULL, NULL);
    RecTree tree4 = rectree_create((void*)4, NULL, NULL);
    RecTree tree5 = rectree_create((void*)5, NULL, NULL);
    RecTree tree6 = rectree_create((void*)6, NULL, NULL);
    tree->left = tree1;
    tree->right = tree2;
    tree2->left = tree3;
    tree2->right = tree4;
    tree3->left = tree5;
    tree3->right = tree6;
    TEST_CHECK(rectree_get_subtree(tree, 0) == tree);
    TEST_CHECK(rectree_get_subtree(tree, 1) == tree1);
    TEST_CHECK(rectree_get_subtree(tree, 2) == tree2);
    TEST_CHECK(rectree_get_subtree(tree, 7) == NULL);
    TEST_CHECK(rectree_get_subtree(tree, 9) == NULL);
    TEST_CHECK(rectree_get_subtree(tree, 10) == NULL);
    TEST_CHECK(rectree_get_subtree(tree, 11) == NULL);
    TEST_CHECK(rectree_get_subtree(tree, 13) == NULL);

    rectree_destroy(tree);
}

// test rectree_replace_subtree
void test_rectree_replace_subtree(void)
{
    RecTree tree = rectree_create((void*)0, NULL, NULL);
    RecTree tree1 = rectree_create((void*)1, NULL, NULL);
    RecTree tree2 = rectree_create((void*)2, NULL, NULL);
    RecTree tree3 = rectree_create((void*)3, NULL, NULL);
    RecTree tree4 = rectree_create((void*)4, NULL, NULL);
    RecTree tree5 = rectree_create((void*)5, NULL, NULL);
    RecTree tree6 = rectree_create((void*)6, NULL, NULL);
    RecTree tree7 = rectree_create((void*)7, NULL, NULL);
    RecTree tree8 = rectree_create((void*)8, NULL, NULL);
    RecTree tree9 = rectree_create((void*)9, NULL, NULL);
    RecTree tree10 = rectree_create((void*)10, NULL, NULL);
    RecTree tree11 = rectree_create((void*)11, NULL, NULL);
    RecTree tree12 = rectree_create((void*)12, NULL, NULL);
    RecTree tree13 = rectree_create((void*)13, NULL, NULL);
    RecTree tree14 = rectree_create((void*)14, NULL, NULL);
    RecTree tree15 = rectree_create((void*)15, NULL, NULL);
    tree->left = tree1;
    tree->right = tree2;
    tree2->left = tree3;
    tree2->right = tree4;
    tree3->left = tree5;
    tree3->right = tree6;
    tree4->left = tree7;
    tree4->right = tree8;
    tree5->left = tree9;
    tree5->right = tree10;
    tree6->left = tree11;
    tree6->right = tree12;
    tree7->left = tree13;
    tree7->right = tree14;
    tree8->left = tree15;
    tree8->right = NULL;
    RecTree t = rectree_replace_subtree(tree, 0, tree15);
    TEST_CHECK(t == tree15);

     t = rectree_replace_subtree(tree13, 0, tree11);
    TEST_CHECK(t == tree11);

    rectree_destroy(tree);
}

TEST_LIST = {
    {"rectree_get_subtree", test_rectree_get_subtree},
    {"rectree_replace_subtree", test_rectree_replace_subtree},
    {NULL, NULL}
};