#include "binary_trees.h"

/**
 * bst_search - search an element in the bst
 * @tree: pointer to the root node
 * @value: value to search for
 * Return: NULL if nothing is found
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL || tree->n == value)
		return ((bst_t *)tree);

	if (tree->n > value)
	{
		return (bst_search(tree->left, value));
	}
	else
	{
		return (bst_search(tree->right, value));
	}
}
