#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree .
 * @tree: Pointer to the root node .
 * @func: Ptr to a function .
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
