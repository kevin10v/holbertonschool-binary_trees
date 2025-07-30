#include "binary_trees.h"

/**
 * depth - Computes the depth of the leftmost leaf
 * @tree: pointer to the root node
 * Return: depth (number of levels)
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - Recursively checks if tree is perfect
 * @tree: pointer to root node
 * @d: depth of tree
 * @level: current level in tree
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	/* If it's a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	/* If one child is missing */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = depth(tree);
	return (is_perfect(tree, d, 0));
}
