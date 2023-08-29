#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: Is pointer to the root node
 * Return: 0 if tree is empty
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_path, r_path;

	if (tree == NULL)
		return (0);

	l_path = binary_tree_is_full(tree->left);
	r_path = binary_tree_is_full(tree->right);

	return ((tree->left == NULL && tree->right == NULL) ||
			(tree->right != NULL && tree->left != NULL && l_path && r_path));
}
