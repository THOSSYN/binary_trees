#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is pointer to the root node
 * Return: 0 if tree is empty
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height, r_height, l_path, r_path;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height == r_height)
	{
		l_path = binary_tree_is_perfect(tree->left);
		r_path = binary_tree_is_perfect(tree->right);
		return (l_path && r_path);
	}

	return (0);
}
