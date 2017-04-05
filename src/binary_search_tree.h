#ifndef __BINARY_SEARCH_TREE_H__
#define __BINARY_SEARCH_TREE_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct bst {
    int nb_values;
    int root;
    int avg_cost;
    int **bst;
} BST;

/**
 * Initializing a Tree with -1 values
 */
void initialize(BST *tree, int n);

/**
 * Function allocating memory for a 2D array
 * the data array is contigous
 */
int ** allocate2D(int nb_lines, int nb_columns);

/**
 * Function freeing memory previously allocated
 * with allocate2D
 */
void desallocate2D(int **array);

/**
 * Function printing the BST in command line
 */
void print_BST_line(BST *tree);

#endif /* end of include guard: __BINARY_SEARCH_TREE_H__ */