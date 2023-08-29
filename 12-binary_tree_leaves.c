#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leafs, r_leafs;

	if (tree == NULL)
		return 0;

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	l_leafs = binary_tree_leaves(tree->left);
	r_leafs = binary_tree_leaves(tree->right);
	return (l_leafs + r_leafs);
}
