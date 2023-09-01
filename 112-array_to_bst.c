#include "binary_trees.h"

/**
 * array_to_bst - builds a binary search tree from an array
 * @array: is the array containing the element to insert
 * @size: is the size of the array
 * Return: pointer to created node or NULL
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		bst_insert(&tree, array[i]);
	}
	return (tree);
}
