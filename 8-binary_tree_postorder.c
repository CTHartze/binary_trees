#include "binary_trees.h"

/**
 * binary_tree_postorder - Function traverses a binary tree using post-order.
 * @tree: refers to pointer to root node to traverse.
 * @func: refers to pointer to function to call.
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
