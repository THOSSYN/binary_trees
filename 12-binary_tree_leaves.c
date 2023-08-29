#include "binary_trees.h"

/**
 * binary_tree_leaves - checks if a node is leaf
 * @tree: is pointer to root node
 * Return: number of leaves in a tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leafs, r_leafs;

	if (tree == NULL)
		return (0);

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	l_leafs = binary_tree_leaves(tree->left);
	r_leafs = binary_tree_leaves(tree->right);
	return (l_leafs + r_leafs);
}
