#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf .
 * @node: Ptr to the node to be checked .
 * Return: 1 if node is a leaf .
 * Otherwise - returns (0) .
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
