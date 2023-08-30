#include "binary_trees.h"

/**
 * linked_node - Creates a linked list of nodes at a certain level.
 * @head: Pointer to the head of the linked list.
 * @tree: Node to store in the linked list.
 * @level: Depth level of the node.
 *
 * This function creates a linked list of nodes by traversing the tree
 * recursively in a level-order manner.
 */

void linked_node(link_t **head, const binary_tree_t *tree, size_t level)
{
	if (tree == NULL)
		return;

	link_t *new = malloc(sizeof(link_t));

	if (new == NULL)
		return;

	new->n = level;
	new->node = tree;
	new->next = *head;
	*head = new;

	linked_node(head, tree->right, level + 1);
	linked_node(head, tree->left, level + 1);
}

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to call for each node's value.
 *
 * This function traverses a binary tree using a level-order traversal
 * approach, calling the provided function for each node's value.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	link_t *head = NULL;

	linked_node(&head, tree, 0);

	while (head != NULL)
	{
		if (head->n == 0)
			func(head->node->n);

		link_t *temp = head;

		head = head->next;
		free(temp);
	}
}
