#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree\
 * from left to root than right childs
 * @tree: pointer to root node
 * @func: function to call on each node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if(tree->right)
		binary_tree_inorder(tree->right, func);
}
