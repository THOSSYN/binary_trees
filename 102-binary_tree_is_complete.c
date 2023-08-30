#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: is pointer to the root node
 * Return: 0 if tree is empty
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int l_path = binary_tree_is_complete(tree->left);
	/*int r_path = binary_tree_is_complete(tree->right);*/

	if (tree->left != NULL && tree->right != NULL)
		return (1);
	if (l_path && tree->right->left == NULL && tree->right->right != NULL)
		return (0);
	return (0);
}
