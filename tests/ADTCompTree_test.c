#include "../include/acutest.h"
#include "../include/ADTCompTree.h"

// Test case for comptree_rectree_create
void rectree_create_test_case(void) {
    CompTree leftTree = NULL; 
    CompTree rightTree = NULL; 
    CompTree mainTree = comptree_rectree_create(NULL, leftTree, rightTree);
    TEST_CHECK(mainTree != NULL);
    comptree_rectree_destroy(mainTree);
}

// Test case for comptree_rectree_size
void rectree_size_test_case(void) {
    CompTree sizeTree = comptree_rectree_create(NULL, NULL, NULL);
    TEST_CHECK(comptree_rectree_size(sizeTree) == 1);
    comptree_rectree_destroy(sizeTree);
}

// Test case for comptree_rectree_destroy
void rectree_destroy_test_case(void) {
    CompTree destroyTree = comptree_rectree_create(NULL, NULL, NULL);
    comptree_rectree_destroy(destroyTree);
    destroyTree = NULL;
    TEST_CHECK(destroyTree == NULL);
}

// Test case for comptree_rectree_value
void rectree_value_test_case(void) {
    CompTree valueTree = comptree_rectree_create((Pointer) 1, NULL, NULL);
    TEST_CHECK(comptree_rectree_value(valueTree) == (Pointer) 1);
    comptree_rectree_destroy(valueTree);
}

// Test case for comptree_rectree_left
void rectree_left_test_case(void) {
    CompTree leftTree = comptree_rectree_create(NULL, NULL, NULL);
    TEST_CHECK(comptree_rectree_left(leftTree) == NULL);
    comptree_rectree_destroy(leftTree);
}

// Test case for comptree_rectree_right
void rectree_right_test_case(void) {
    CompTree rightTree = comptree_rectree_create(NULL, NULL, NULL);
    TEST_CHECK(comptree_rectree_right(rightTree) == NULL);
    comptree_rectree_destroy(rightTree);
}

TEST_LIST = {
    {"rectree_create_test_case", rectree_create_test_case},
    {"rectree_size_test_case", rectree_size_test_case},
    {"rectree_destroy_test_case", rectree_destroy_test_case},
    {"rectree_value_test_case", rectree_value_test_case},
    {"rectree_left_test_case", rectree_left_test_case},
    {"rectree_right_test_case", rectree_right_test_case},
    {NULL, NULL} // End the list with NULL
};
