#include "binary_trees.h"

/**
 * binary_tree_node - Function creates binary tree node.
 * @parent: pointer used to set new node.
 * @value: value put in new node.
 *
 * Return: NULL on failure, otherwise
 *         a pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
