#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree\
 * from root to left then right childs
 * @tree: pointer to the root node
 * @func: function to call on each node's value
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
