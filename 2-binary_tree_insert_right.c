#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node at right of parent
 * @parent: pointer to parent node
 * @value: of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);
	new->n = value;
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
		new->parent = parent;
		parent->right = new;
		new->left = NULL;
		return (new);
	}
	parent->right = new;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
