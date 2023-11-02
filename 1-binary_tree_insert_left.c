#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function inserts node as a left-child
 * of another in the binary tree.
 * @parent: pointer is used to set new node
 * @value: refers to value to store in new node.
 * Return: NULL if an error occurs or parent is NULL,
 * otherwise a pointer to the new node.
 *
 * Description: If parent node already has a left-child,
 * the new node must replace the old left-child and be set
 * as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
