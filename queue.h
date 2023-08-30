#ifndef QUEUE_H
#define QUEUE_H

#include <stddef.h>

/**
 * struct queue_node_s - Queue node structure
 *
 * @node: A pointer to the binary tree node
 * @next: A pointer to the next node in the queue
 */

struct queue_node_s
{
	const binary_tree_t *tree_node;
	struct queue_node_s *next;
};

typedef struct queue_node_s queue_node_t;

/**
 * struct queue_s - Queue structure
 *
 * @front: A pointer to the front of the queue
 * @rear: A pointer to the rear of the queue
 */

typedef struct
{
	queue_node_t *front;
	queue_node_t *rear;
} queue_t;

/* Function prototypes for queue operations */
queue_t *queue_create(void);
void queue_push(queue_t *queue, const binary_tree_t *tree_node);
const binary_tree_t *queue_pop(queue_t *queue);
int queue_is_empty(const queue_t *queue);
void queue_free(queue_t *queue);

#endif /* QUEUE_H */
