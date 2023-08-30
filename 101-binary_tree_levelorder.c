#include "binary_trees.h"
#include "queue.h"

/**
 * level_order_recursive - Recursively traverses the tree at a specific level
 * @tree: Pointer to the current node being considered
 * @func: Pointer to a function to call for each node's value
 * @level: The level being traversed
 * @target_level: The target level to stop the traversal
 */

void level_order_recursive(const binary_tree_t *tree, void (*func)(int),
		int level, int target_level);

/**
 * binary_tree_levelorder - Goes through a binary tree
 *                          using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	int height = binary_tree_height(tree);

	level_order_recursive(tree, func, 1, height + 1);
}

/**
 * level_order_recursive - Recursively traverses the tree at a specific level
 * @tree: Pointer to the current node being considered
 * @func: Pointer to a function to call for each node's value
 * @level: The level being traversed
 * @target_level: The target level to stop the traversal
 */

void level_order_recursive(const binary_tree_t *tree, void (*func)(int),
		int level, int target_level)
{
	if (tree == NULL)
		return;

	if (level == target_level)
		func(tree->n);

	level_order_recursive(tree->left, func, level + 1, target_level);
	level_order_recursive(tree->right, func, level + 1, target_level);
}

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

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
