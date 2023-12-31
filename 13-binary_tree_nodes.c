#include "binary_trees.h"

/**
 * binary_tree_nodes - Function counts nodes with at least 1 child.
 * @tree: refers to pointer to the root node to count.
 * Return: 0 if tree is NULL, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
