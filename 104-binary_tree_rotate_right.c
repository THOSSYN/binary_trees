#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on
 * a binary tree
 * @tree: is the pointer to root node
 * Return: pointer to the new root node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL)
		return (tree);

	binary_tree_t *new_head = tree->left;

	tree->left = new_head->right;
	if (new_head->right)
	{
		new_head->right->parent = tree;
	}

	new_head->right = tree;
	new_head->parent = tree->parent;
	tree->parent = new_head;

	return (new_head);
}
