#ifndef ADTRECTREE_UTILS_C
#define ADTRECTREE_UTILS_C

#include <stdio.h>
#include <stdlib.h>
#include "ADTRecTree.h"

RecTree rectree_get_subtree(RecTree tree, int pos);

RecTree rectree_replace_subtree(RecTree tree, int pos, RecTree subtree);

// Complexity:
// rectree_get_subtree: O(log n)
// rectree_replace_subtree: O(log n)
#endif