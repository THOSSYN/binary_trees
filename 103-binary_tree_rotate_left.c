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

	/*new_tree->right reference can be done away with in*/
	/*  rotation once attached to the right node*/
	/*cos new_tree->right needs to be free to take that left rotation*/
	/*that's why we quickly assign it to tree->right*/
	tree->right = new_tree->left;

	if (new_tree->left != NULL)
		new_tree->left->parent = tree;

	new_tree->left = tree;
	/*new tree parent should tree parent to retain reference to a parent*/
	new_tree->parent = tree->parent;
	tree->parent = new_tree;

	return (new_tree);
}
