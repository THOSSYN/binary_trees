#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using
 * pre-order traversal
 * @tree: is the pointer to the root node
 * @func: is the pointer to function to call for each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
