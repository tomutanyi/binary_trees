#include "binary_trees.h"

/**
 *binary_tree_depth - Measures the depth of a node .
 *@tree: Ptr to the node .
 * Return: If tree is NULL, must return 0 .
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
