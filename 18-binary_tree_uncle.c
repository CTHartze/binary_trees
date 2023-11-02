#include "binary_trees.h"

/**
 * binary_tree_uncle - Function finds the uncle node in a binary tree.
 * @node: refers to pointer to node to find.
 * Return: NULL if node is NULL or has no uncle, else
 * a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}