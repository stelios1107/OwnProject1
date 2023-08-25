#include "../include/acutest.h"
#include "../include/ADTRecTree.h"

void tree_creation_test(void) {
    RecTree sampleTree = rectree_create(NULL, NULL, NULL);
    TEST_ASSERT(rectree_size(sampleTree) == 1);
    TEST_ASSERT(rectree_value(sampleTree) == NULL);
    TEST_ASSERT(rectree_left(sampleTree) == NULL);
    TEST_ASSERT(rectree_right(sampleTree) == NULL);
    rectree_destroy(sampleTree);
}

void size_test(void) {
    RecTree sampleTree = rectree_create(NULL, NULL, NULL);
    TEST_ASSERT(rectree_size(sampleTree) == 1);
    rectree_destroy(sampleTree);

    sampleTree = rectree_create(NULL, rectree_create(NULL, NULL, NULL), NULL);
    TEST_ASSERT(rectree_size(sampleTree) == 2);
    rectree_destroy(sampleTree);

    sampleTree = rectree_create(NULL, rectree_create(NULL, NULL, NULL), rectree_create(NULL, NULL, NULL));
    TEST_ASSERT(rectree_size(sampleTree) == 3);
    rectree_destroy(sampleTree);
}

void tree_destruction_test(void) {
    RecTree sampleTree = rectree_create(NULL, NULL, NULL);
    rectree_destroy(sampleTree);

    sampleTree = rectree_create(NULL, rectree_create(NULL, NULL, NULL), NULL);
    rectree_destroy(sampleTree);

    sampleTree = rectree_create(NULL, rectree_create(NULL, NULL, NULL), rectree_create(NULL, NULL, NULL));
    rectree_destroy(sampleTree);
}

void value_test(void) {
    RecTree sampleTree = rectree_create("root", NULL, NULL);
    TEST_ASSERT(rectree_value(sampleTree) == sampleTree->value);
    rectree_destroy(sampleTree);
}

void left_child_test(void) {
    RecTree sampleTree = rectree_create(NULL, rectree_create("left", NULL, NULL), NULL);
    TEST_ASSERT(rectree_value(rectree_left(sampleTree)) == sampleTree->left->value);
    rectree_destroy(sampleTree);
}

void right_child_test(void) {
    RecTree sampleTree = rectree_create(NULL, NULL, rectree_create("right", NULL, NULL));
    TEST_ASSERT(rectree_value(rectree_right(sampleTree)) == sampleTree->right->value);
    rectree_destroy(sampleTree);
}


TEST_LIST = {
    {"test of rectree_create", tree_creation_test},
    {"test of rectree_size", size_test},
    {"test of rectree_destroy", tree_destruction_test},
    {"test of rectree_value", value_test},
    {"test of rectree_left", left_child_test},
    {"test of rectree_right", right_child_test},
    {NULL, NULL} // End list with NULL
};
