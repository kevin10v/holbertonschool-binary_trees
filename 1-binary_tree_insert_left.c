#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: value to insert in the new node
 *
 * Return: pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
