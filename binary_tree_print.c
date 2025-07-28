#include <stdio.h>
#include "binary_trees.h"

#define COUNT 10

void print_tree(const binary_tree_t *tree, int space);

/**
 * binary_tree_print - Prints a binary tree in 2D
 * @tree: Pointer to the root node
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (!tree)
		return;
	print_tree(tree, 0);
}

/**
 * print_tree - Helper function to recursively print tree
 * @tree: Current node
 * @space: Current indentation level
 */
void print_tree(const binary_tree_t *tree, int space)
{
	int i; /* 👈 deklarimi jashtë for-loop */

	if (!tree)
		return;

	space += COUNT;

	print_tree(tree->right, space);

	printf("\n");
	for (i = COUNT; i < space; i++)
		printf(" ");
	printf("%d\n", tree->n);

	print_tree(tree->left, space);
}
