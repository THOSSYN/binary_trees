#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of
 * another node
 * @parent: is the root node
 * @value: is the data of the node
 * Return: pointer to the created node or NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = newnode;
		return (newnode);
	}
	newnode->left = parent->left;
	parent->left = newnode;
	newnode->parent = parent;

	return (newnode);
}
