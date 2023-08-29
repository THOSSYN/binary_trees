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
	binary_tree_t *newnode, *tmp;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	newnode->n = value;
	newnode->right = NULL;
	newnode->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = newnode;
		return (newnode);
	}
	tmp = parent->left;
	parent->left = newnode;
	newnode->left = tmp;
	tmp->parent = newnode;

	return (newnode);
}
