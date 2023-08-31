#include "binary_trees.h"

/**
 * binary_tree_is_avl - checks if a binary tree is
 * valid AVL tree
 * @tree: pointer to root node
 * Return: 1 if tree is valid AVL otherwise 0
 */

int balance_tree_height_avl(const binary_tree_t *tree);
int max(int a, int b);
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (balance_tree_height_avl(tree) != -1);
}

/**
 * balance_tree_height_avl - checks the height balance of subtrees
 * @tree: is pointer to the root node
 * Return: the -1 if tree is not balance
 */
int balance_tree_height_avl(const binary_tree_t *tree)
{
	int left_tree_hght, right_tree_hght;

	if (tree == NULL)
		return (0);

	left_tree_hght = balance_tree_height_avl(tree->left);
	if (left_tree_hght == -1)
		return (-1);

	right_tree_hght = balance_tree_height_avl(tree->right);
	if (right_tree_hght == -1)
		return (-1);

	if (abs(left_tree_hght - right_tree_hght) > 1)
		return (-1);

	return (max(left_tree_hght, right_tree_hght) + 1);
}

/**
 * max - calculate the maximum value between two values
 * @a: is the first value
 * @b: is the second value
 * Return: the max value
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}
