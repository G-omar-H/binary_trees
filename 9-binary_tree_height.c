#include "binary_trees.h"

/**
 * binary_tree_height - count the height of a bianry tree
 * @tree: pointer to the root node
 * Return: height of the bianry tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		h += 1;
		binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		h += 1;
		binary_tree_height(tree->right);
	}
	return (h);
}
