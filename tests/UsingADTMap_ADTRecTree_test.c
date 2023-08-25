#include "../include/acutest.h"
#include "../include/ADTRecTree.h"

void check_create(void) {
    RecTree binaryTree = rectree_create(NULL, NULL, NULL);
    TEST_ASSERT(rectree_size(binaryTree) == 1);
    TEST_ASSERT(rectree_value(binaryTree) == NULL);
    TEST_ASSERT(rectree_left(binaryTree) == NULL);
    TEST_ASSERT(rectree_right(binaryTree) == NULL);
    rectree_destroy(binaryTree);
}

void check_value(void) {
    RecTree binaryTree = rectree_create("root", NULL, NULL);
    TEST_ASSERT(rectree_value(binaryTree) == binaryTree->value);
    rectree_destroy(binaryTree);
}

void check_left(void) {
    RecTree binaryTree = rectree_create(NULL, rectree_create("left", NULL, NULL), NULL);
    TEST_ASSERT(rectree_value(rectree_left(binaryTree)) == binaryTree->left->value);
    rectree_destroy(binaryTree);
}

void check_right(void) {
    RecTree binaryTree = rectree_create(NULL, NULL, rectree_create("right", NULL, NULL));
    TEST_ASSERT(rectree_value(rectree_right(binaryTree)) == binaryTree->right->value);
    rectree_destroy(binaryTree);
}

void check_size(void) {
    RecTree binaryTree = rectree_create(NULL, NULL, NULL);
    TEST_ASSERT(rectree_size(binaryTree) == 1);
    rectree_destroy(binaryTree);

    binaryTree = rectree_create(NULL, rectree_create(NULL, NULL, NULL), NULL);
    TEST_ASSERT(rectree_size(binaryTree) == 2);
    rectree_destroy(binaryTree);

    binaryTree = rectree_create(NULL, rectree_create(NULL, NULL, NULL), rectree_create(NULL, NULL, NULL));
    TEST_ASSERT(rectree_size(binaryTree) == 3);
    rectree_destroy(binaryTree);
}

void check_destroy(void) {
    RecTree binaryTree = rectree_create(NULL, NULL, NULL);
    rectree_destroy(binaryTree);

    binaryTree = rectree_create(NULL, rectree_create(NULL, NULL, NULL), NULL);
    rectree_destroy(binaryTree);

    binaryTree = rectree_create(NULL, rectree_create(NULL, NULL, NULL), rectree_create(NULL, NULL, NULL));
    rectree_destroy(binaryTree);
}

TEST_LIST = {
    {"rectree_create", check_create},
    {"rectree_value", check_value},
    {"rectree_left", check_left},
    {"rectree_right", check_right},
    {"rectree_size", check_size},
    {"rectree_destroy", check_destroy},
    {NULL, NULL} // End list with NULL
};
