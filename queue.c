#include "binary_trees.h"
#include "queue.h"
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
