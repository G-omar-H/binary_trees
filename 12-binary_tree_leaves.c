#include "binary_trees.h"

/**
 * binary_tree_leaves - count number of leaves on a binary tree
 * @tree: pointer to root node
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafs_count = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		leafs_count += 1;
	if (tree->left)
		leafs_count += binary_tree_leaves(tree->left);
	if (tree->right)
		leafs_count += binary_tree_leaves(tree->right);
	return (leafs_count);
}
