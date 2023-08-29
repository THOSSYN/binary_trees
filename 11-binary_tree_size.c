#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is pointer to root node
 * Return: 0 if tree is empty
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_child, r_child;

	if (tree == NULL)
		return (0);

	l_child = binary_tree_size(tree->left);
	r_child = binary_tree_size(tree->right);

	return (l_child + r_child + 1);
}
