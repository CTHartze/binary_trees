#include "binary_trees.h"

/**
 * binary_tree_sibling - Function finds the sibling node in a binary tree.
 * @node: Refers to pointer to node to find.
 * Return: NULL if node is NULL or there is no sibling, else
 * a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
