#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 * @tree: is pointer to root node of the tree
 * Return: 0 if tree is empty
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_path = 0, r_path = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l_path = (1 + binary_tree_balance(tree->left));
	if (tree->right)
		r_path = (1 + binary_tree_balance(tree->right));
	return (l_path - r_path);
}
