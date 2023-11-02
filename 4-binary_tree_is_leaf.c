#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function checks if a node is a leaf node.
 * @node: refers to pointer to the node to check.
 * Return: 1 if the node is a leaf node, else 0 if not.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
