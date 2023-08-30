#include "binary_trees.h"

/**
 * createQueue - creates a queue
 * Return: pointer to newly created queue
 */
Queue *createQueue(void)
{
        Queue *queue = (Queue *)malloc(sizeof(Queue));
        if (queue)
        {
                queue->front = queue->rear = NULL;
        }
        return queue;
}

/**
 * enqueue - Function to enqueue an element
 * @queue: pointer to queue
 * @data: is the value to enqueue
 */

void enqueue(Queue *queue, int data)
{
        QueueNode *newNode = (QueueNode *)malloc(sizeof(QueueNode));
        if (newNode)
        {
                newNode->data = data;
                newNode->next = NULL;
                if (queue->rear)
                {
                        queue->rear->next = newNode;
                        queue->rear = newNode;
                }
                else
                {
                        queue->front = queue->rear = newNode;
                }
        }
}

/**
 * dequeue - Function to dequeue an element
 * @queue: pointer to queue
 * Return: -1 if queue is empty
 */
int dequeue(Queue *queue)
{
        if (queue->front)
        {
                int data = queue->front->data;
                QueueNode *temp = queue->front;
                queue->front = queue->front->next;
                if (queue->front == NULL)
                {
                        queue->rear = NULL;
                }
                free(temp);
                return data;
        }
        return -1;
}

/**
 * isEmpty - Function to check if the queue is empty
 * @queue: pointer to queue
 * Return: 1 or 0
 */
int isEmpty(Queue *queue)
{
        return queue->front == NULL;
}

/**
 * freeQueue - Function to free the memory of the queue
 * @queue: pointer to queue
 * Return: nothing
 */

void freeQueue(Queue *queue)
{
        while (!isEmpty(queue))
        {
                dequeue(queue);
        }
        free(queue);
}
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
