#include "binary_trees.h"

/**
 * binary_tree_is_bst_recursive - Checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check.
 * @min: Minimum value allowed in the tree.
 * @max: Maximum value allowed in the tree.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */

int binary_tree_is_bst_recursive(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (binary_tree_is_bst_recursive(tree->left, min, tree->n) &&
			binary_tree_is_bst_recursive
			(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	return binary_tree_is_bst_recursive(tree, INT_MIN, INT_MAX);
}
