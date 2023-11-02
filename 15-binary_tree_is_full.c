#include "binary_trees.h"

/**
 * is_full_recursive - Function checks binary tree is full recursively.
 * @tree: refers to pointer to the root node to check.
 * Return: 0 if tree is not full, else 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Function checks if binary tree is full.
 * @tree: refers to pointer to root node to check.
 * Return: 0 if tree is NULL or not full, else 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
