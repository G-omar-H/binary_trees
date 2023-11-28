#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree\
 * from left to right childs than root
 * @tree: pointer to root node
 * @func: function to call on each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
