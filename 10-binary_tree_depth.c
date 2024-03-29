#include "binary_trees.h"

/**
 * binary_tree_depth - count node's depth
 * @tree: pointer to the pointer to count
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
