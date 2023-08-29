#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is pointer to the node we want to know sibling for
 * Return: NULL if node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
		return (NULL);

	if (node->parent->right == NULL || node->parent->left == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
