#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is pointer to the root node
 * Return: 0 if tree is empty
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_path, r_path;

	if (tree == NULL)
		return (0);

	l_path = binary_tree_is_perfect(tree->left);
	r_path = binary_tree_is_perfect(tree->right);

	return ((tree->left != NULL && tree->right != NULL) &&
			(tree->left == NULL && tree->right == NULL && l_path == r_path));
}
