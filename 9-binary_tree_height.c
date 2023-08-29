#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is the pointer to the root node
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		if (left_height > right_height)
		{
			return (1 + left_height);
		}
		else
			return (1 + right_height);
	}
}