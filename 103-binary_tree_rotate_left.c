#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  performs a left-rotation on a binary tree
 * @tree: is pointer to root node
 * Return: pointer to new root node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	binary_tree_t *new_tree = tree->right;

	tree->right = new_tree->left;

	if (new_tree->left != NULL)
		new_tree->left->parent = tree;

	new_tree->left = tree;
	new_tree->parent = tree->parent;
	tree->parent = new_tree;

	return (new_tree);
}
