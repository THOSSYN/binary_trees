#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is valid
 * @tree: is the pointer to root node
 * Return: 0 if tree is NULL
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_search_bst(tree, 0, 1000));
}

/**
 * binary_search_bst - helps determine the validity of a bst in tree
 * @tree: is pointer to root node
 * @min: is the min value that the left tree can have
 * @max: is the maximum value the right tree can have
 * Return: 1 or 0
 */
int binary_search_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (binary_search_bst(tree->left, min, tree->n) &&
			binary_search_bst(tree->right, tree->n, max));
}
