#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree, 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height
				? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 if tree is NULL or not perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	int nodes = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	while (height > 0)
	{
		nodes += 1 << height;
		height--;
	}
	return ((size_t)nodes == (size_t)
			(1 << (binary_tree_height(tree) + 1)) - 1);
}
