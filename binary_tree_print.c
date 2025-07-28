#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define COUNT 10

/**
 * print_tree - Recursive function to print a binary tree
 * @tree: pointer to root
 * @space: space counter
 */
void print_tree(const binary_tree_t *tree, int space)
{
	int i;

	if (tree == NULL)
		return;

	space += COUNT;

	print_tree(tree->right, space);

	printf("\n");
	for (i = COUNT; i < space; i++)
		printf(" ");
	printf("(%d)\n", tree->n);

	print_tree(tree->left, space);
}

/**
 * binary_tree_print - prints a binary tree in 2D
 * @tree: pointer to the root node
 */
void binary_tree_print(const binary_tree_t *tree)
{
	print_tree(tree, 0);
}
