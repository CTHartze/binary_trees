#include "binary_trees.h"

/**
 * binary_tree_is_root - Function checks if a node is a root node.
 * @node: refers to pointer to node to check.
 * Return: 1 if the node is a root node, else 0 if not.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
