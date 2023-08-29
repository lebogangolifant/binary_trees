#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node,
 *         or NULL if no common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	while (first != NULL)
	{
		binary_tree_t *temp = (binary_tree_t *)second;

		while (temp != NULL)
		{
			if (first == temp)
				return ((binary_tree_t *)first);
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
