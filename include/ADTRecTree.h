#ifndef ADTRECTREE_H
#define ADTRECTREE_H

///////////////////////////////////////////////////////////////////
//
// ADT RecTree
//
// Abstract αναδρομικό (recursive) δέντρο. Κάθε δέντρο περιέχει μια
// τιμή (στη ρίζα), και δύο υποδέντρα. Τα δέντρα είναι immutable,
// δεν μπορεί να αλλάξει ούτε η τιμή τους ούτε τα υποδέντρα τους.
//
///////////////////////////////////////////////////////////////////

#pragma once // #include το πολύ μία φορά

#include "common_types.h"

// Η παρακάτω σταθερά συμβολίζει ένα κενό δέντρο
#define REC_TREE_EMPTY (RecTree)0


//  Ένα δέντρο αναπαριστάται από τον τύπο RecTree. Ο χρήστης δε χρειάζεται να γνωρίζει το περιεχόμενο
// του τύπου αυτού, απλά χρησιμοποιεί τις συναρτήσεις rectree_<foo> που δέχονται και επιστρέφουν RecTree.
//
// Ο τύπος αυτός ορίζεται ως pointer στο "struct rec_tree" του οποίου το περιεχόμενο είναι άγνωστο
// (incomplete struct), και εξαρτάται από την υλοποίηση του ADT RecTree.
//
typedef struct rec_tree* RecTree;

//  Ένα δέντρο είναι pointer σε αυτό το struct
struct rec_tree {
    // Το περιεχόμενο του κόμβου
    Pointer value;

    // Τα αριστερά και δεξιά παιδιά
    RecTree left, right;
};


// Δημιουργεί και επιστρέφει ένα νέο δέντρο, με τιμή (στη ρίζα) value και υποδέντρα left και right.

RecTree rectree_create(Pointer value, RecTree left, RecTree right);

// Επιστρέφει τον αριθμό στοιχείων που περιέχει το δέντρο (0 για κενά δέντρα).

int rectree_size(RecTree tree);

// Ελευθερώνει τη μνήμη που δεσμεύει το δέντρο tree (ΔΕΝ καταστρέφει τα υποδέντρα του).

void rectree_destroy(RecTree tree);

// Επιστρέφουν την τιμή (στη ρίζα), το αριστερό και το δεξί υποδέντρο του δέντρου tree.

Pointer rectree_value(RecTree tree);
RecTree rectree_left(RecTree tree);
RecTree rectree_right(RecTree tree);

#endif