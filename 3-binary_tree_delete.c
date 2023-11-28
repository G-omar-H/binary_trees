#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary tree
 * @tree: pointer to root node
 * Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp = tree;

	if (!tree)
		return;
	if (temp->right)
		binary_tree_delete(temp->right);
	if (temp->left)
		binary_tree_delete(temp->left);
	free(temp);
}
