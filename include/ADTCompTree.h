#ifndef __ADT_COMP_TREE__H
#define __ADT_COMP_TREE__H


#pragma once // #include το πολύ μία φορά

#include "common_types.h"

#define REC_TREE_EMPTY (RecTree)0


typedef struct comp_tree* CompTree;

//  Ένα δέντρο είναι pointer σε αυτό το struct
struct comp_tree {
    // Το περιεχόμενο του κόμβου
    Pointer value;

    // Τα αριστερά και δεξιά παιδιά
    CompTree left, right;
};

// Δημιουργεί και επιστρέφει ένα νέο δέντρο, με τιμή (στη ρίζα) value και υποδέντρα left και right.

CompTree comptree_rectree_create(Pointer value, CompTree left, CompTree right);

// Επιστρέφει τον αριθμό στοιχείων που περιέχει το δέντρο (0 για κενά δέντρα).

int comptree_rectree_size(CompTree tree);

// Ελευθερώνει τη μνήμη που δεσμεύει το δέντρο tree (ΔΕΝ καταστρέφει τα υποδέντρα του).

void comptree_rectree_destroy(CompTree tree);

// Επιστρέφουν την τιμή (στη ρίζα), το αριστερό και το δεξί υποδέντρο του δέντρου tree.

Pointer comptree_rectree_value(CompTree tree);
CompTree comptree_rectree_left(CompTree tree);
CompTree comptree_rectree_right(CompTree tree);

#endif