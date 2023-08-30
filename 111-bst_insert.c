#include "binary_trees.h"

/**
 * bst_insert_recursive - Recursively inserts a value into a BST
 * @tree: Double pointer to the root node of the BST
 * @value: Value to be inserted
 * @parent: Parent node of the current subtree
 * @is_left: Flag indicating if the insertion should be to the left
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
 */

bst_t *bst_insert_recursive(bst_t **tree, int value,
		bst_t *parent, int is_left)
{
	if (*tree == NULL)
	{
		*tree = (bst_t *)binary_tree_node
			((binary_tree_t *)parent, value);
		return (*tree);
	}
	if (value < (*tree)->n)
		return (bst_insert_recursive
				(&((*tree)->left), value, *tree, 1));
	else if (value > (*tree)->n)
		return (bst_insert_recursive
				(&((*tree)->right), value, *tree, 0));
	return (NULL);
}

/**
 * bst_insert - Inserts a value into a Binary Search Tree
 * @tree: Double pointer to the root node of the BST
 * @value: Value to be inserted
 *
 * Return: Pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);
	return (bst_insert_recursive(tree, value, NULL, 0));
}
