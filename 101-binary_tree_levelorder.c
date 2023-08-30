#include "binary_trees.h"
#include "queue.h"

/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal
 * @tree: is pointer to the root node
 * @func: is the pointer to function to call for each node
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current;
	size_t index;

	if (tree == NULL || func == NULL)
		return;

	Queue *q = createQueue();
	size_t MAX = 1000;
	const binary_tree_t *nodes[MAX];
	size_t end = 0;

	nodes[end++] = tree;
	enqueue(q, 0);

	while (!isEmpty(q))
	{
		index = dequeue(q);
		current = nodes[index];
		func(current->n);

		if (current->left != NULL)
		{
			nodes[end] = current->left;
			enqueue(q, end++);
		}
		if (current->right != NULL)
		{
			nodes[end] = current->right;
			enqueue(q, end++);
		}
	}
	freeQueue(q);
}
