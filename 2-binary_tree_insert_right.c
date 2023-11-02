#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function insert node as right-child
 *                            of another node in a binary tree.
 * @parent: pointer is used to set new node.
 * @value: refers to the value to store in new node.
 * Return: NULL if an error occurs or parent is NULL,
 *         else a pointer to the new node.
 *
 * Description: If the parent node already has a right-child,
 * the new node will replace the old right-child and it will
 * will be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
