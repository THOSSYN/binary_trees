#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a binary tree
 * @tree: ispointer to root node
 * Return: 0 if failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	else
		return (1 + binary_tree_depth(tree->parent));
}
