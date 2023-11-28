#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert child node to the left side of the parent
 * @parent: parent node
 * @value: value of the new node
 * Return: pointer to the new node, NULL if faile
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
