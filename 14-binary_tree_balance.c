#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 * @tree: is pointer to root node of the tree
 * Return: 0 if tree is empty
 */

int max(int a, int b);
int height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = height(tree->left);
	right = height(tree->right);

	return (left - right);
}
int height(const binary_tree_t *tree)
{
         int l_path = 0, r_path = 0;

         if (tree == NULL)
                 return (0);

	 l_path = height(tree->left);
	 r_path = height(tree->right);
	 return (max(l_path, r_path) + 1);
}

int max(int a, int b)
{
	return ((a > b) ? a : b);
}
