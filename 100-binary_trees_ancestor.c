#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest common
 * ancestor of two nodes
 * @first: is the pointer to first none
 * @second: is pointer to second node
 * Return: pointer to the lowest common ancestor of
 * the two nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent->parent == second->parent->parent)
		return (first->parent->parent);
	if (second->parent == first->parent->parent)
		return (second->parent);
	if (first->parent == second->parent->parent)
		return (first->parent);
	return (NULL);
}
