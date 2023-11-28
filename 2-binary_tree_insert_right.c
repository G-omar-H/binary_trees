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

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new  == NULL)
		return (NULL);
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
