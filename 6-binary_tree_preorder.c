#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree .
 * @tree: Pointer to the root node .
 * @func: Pointer to a function .
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);

		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
