#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is root
 * @node: is the node to check
 * Return: 1 if it is root node or 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	 if (node == NULL)
		 return (0);
	return (node != NULL && node->parent == NULL);
}
