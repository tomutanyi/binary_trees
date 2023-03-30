#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node .
 * @parent: a pointer to the node .
 * @value: value is the value to store .
 * Return: a pointer to the created node .
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
