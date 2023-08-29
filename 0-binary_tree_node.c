#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: is the root node of the binary tree
 * @value: is the data to be inserted
 * Return: pointer to the newnode or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = NULL;
	newnode->parent = parent;

	return (newnode);
}
