#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node
 * @parent: is the root of the tree
 * @value: is the data to be stored in the node
 * Return: pointer to created node or NULL if failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *created, *tmp;

	if (parent == NULL)
		return (NULL);

	created = NULL;
	created = binary_tree_node(created, value);
	if (!created)
		return (NULL);

	created->left = NULL;
	created->parent = parent;
	if (parent->right == NULL)
	{
		parent->right = created;
		return (created);
	}
	tmp = NULL;
	tmp = parent->right;
	parent->right = created;
	created->right = tmp;
	tmp->parent = created;

	return (created);
}
