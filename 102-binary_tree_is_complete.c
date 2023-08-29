#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Size of the tree, 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left)
			+ binary_tree_size(tree->right));
}

/**
 * binary_tree_is_complete_recursive - Checks if a binary tree
 *                                     is complete (recursive helper).
 * @tree: Pointer to the root node of the tree to check.
 * @index: Current index of the node being checked.
 * @nodes_count: Total number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 if tree is not complete.
 */

int binary_tree_is_complete_recursive(const binary_tree_t *tree, size_t index,
		size_t nodes_count)
{
	if (tree == NULL)
		return (1);

	if (index >= nodes_count)
		return (0);

	return (binary_tree_is_complete_recursive(tree->left,
				2 * index + 1, nodes_count) &&
			binary_tree_is_complete_recursive
			(tree->right, 2 * index + 2, nodes_count));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 if tree is NULL or not complete.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_complete_recursive
			(tree, 0, binary_tree_size(tree)));
}
