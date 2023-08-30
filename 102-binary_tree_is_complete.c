#include "binary_trees.h"

/**
 * _dequeue - Function that dequeues a node from the queue
 * @front: Pointer to the front index of the queue
 */

void _dequeue(size_t *front)
{
	(*front)++;
}

/**
 * binary_tree_is_complete - Function that checks if a binary tree is complete
 * @tree: Type pointer of node of the tree
 * Return: 1 if is complete 0 if it is not
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[1024];
	size_t front = 0, rear = 0;
	int flag = 0;

	if (tree == NULL)
		return (0);

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		if (queue[front]->left != NULL)
		{
			if (flag == 1)
				return (0);

			queue[rear++] = queue[front]->left;
		} else
			flag = 1;

		if (queue[front]->right != NULL)
		{
			if (flag == 1)
				return (0);

			queue[rear++] = queue[front]->right;
		} else
			flag = 1;

		_dequeue(&front);
	}
	return (1);
}
