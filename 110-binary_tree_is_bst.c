#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is valid
 * @tree: is the pointer to root node
 * Return: 0 if tree is NULL
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*we check for bst rule violation*/
	if (tree->left != NULL && tree->left->n >= tree->n)
		return (0);
	if (tree->right != NULL && tree->right->n <= tree->n)
		return (0);

	/*we traverse to check if all node satisfy bst rules*/
	int is_bst_left = binary_tree_is_bst(tree->left);
	int is_bst_right = binary_tree_is_bst(tree->right);

	return (is_bst_left && is_bst_right);
}
