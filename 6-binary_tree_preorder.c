#include "binary_trees.h"

/**
 * binary_tree_preorder - Function traverses a binary tree using pre-order.
 * @tree: refers to pointer to root node to traverse.
 * @func: refers to pointer to function to call.
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
