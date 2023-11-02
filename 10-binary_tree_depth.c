#include "binary_trees.h"

/**
 * binary_tree_depth - Function measures node depth in a binary tree.
 * @tree: refers to pointer to the node to measure.
 * Return: 0 if tree is NULL, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
