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
	binary_tree_t *created;

	if (parent == NULL)
		return (NULL);

	created = malloc(sizeof(binary_tree_t));
	if (created == NULL)
		return (NULL);

	created->n = value;
	created->left = NULL;
	created->right = parent->right;
	parent->right = created;

	return (created);
}
