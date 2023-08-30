#ifndef QUEUE_H
#define QUEUE_H

/**
 * QueueNode - is the pointer to the data structure
 * @data: is the value
 * @next: is pointer to next node
 */

typedef struct QueueNode {
    int data;
    struct QueueNode *next;
} QueueNode;

/**
 * Queue: is the queue data structure
 * @front: is the front of the queue
 * @rear: is the back of the queue
 */

typedef struct Queue {
    QueueNode *front;
    QueueNode *rear;
} Queue;

Queue *createQueue(void);
void enqueue(Queue *queue, int data);
int dequeue(Queue *queue);
int isEmpty(Queue *queue);
void freeQueue(Queue *queue);

#endif /* QUEUE_H */
