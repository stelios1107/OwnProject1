# Κάνοντας compile το <foo>_test.c με μια υλοποίηση <foo>.c του
# συγκεκριμένου τύπου, παράγουμε ένα tets για την υλοποίηση αυτή.

# Υλοποιήσεις μέσω Heap: ADTPriorityQueue
# Το Heap χρησιμοποιεί Vector, οπότε χρειαζόμαστε και μια υλοποίηση του ADTVector.
#
UsingHeap_ADTPriorityQueue_test_OBJS  = ADTPriorityQueue_test.o $(MODULES)/UsingHeap/ADTPriorityQueue.o $(MODULES)/UsingDynamicArray/ADTVector.o
# for the ADTRecTree
UsingLinkedTree_ADTRecTree_test_OBJS = ADTRecTree_test.o $(MODULES)/UsingLinkedTree/ADTRecTree.o
# for the ADTRecTree Alternative
UsingLinkedTree_ADTRecTreeAlt_test_OBJS = ADTRecTree_test.o $(MODULES)/UsingLinkedTree/ADTRecTree.o 
# for the ADTRecTree_utils
UsingLinkedTree_ADTRecTree_utils_test_OBJS = ADTRecTree_utils_test.o $(MODULES)/UsingLinkedTree/ADTRecTree_utils.o $(MODULES)/UsingLinkedTree/ADTRecTree.o 
# for the ADTCompTree
UsingLinkedTree_ADTCompTree_test_OBJS = ADTCompTree_test.o $(MODULES)/UsingADTRecTree/ADTCompTree.o $(MODULES)/UsingLinkedTree/ADTRecTree.o



# Ο βασικός κορμός του Makefile
include ../common.mk