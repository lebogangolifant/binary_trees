#include "binary_trees.h"

/**
 * bst_insert_recursive - Recursive function to insert a value into a BST
 * @tree: Double pointer to the root node of the BST
 * @value: Value to insert
 * @parent: Pointer to the parent node
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
 */

bst_t *bst_insert_recursive(bst_t **tree, int value, bst_t *parent)
{
	bst_t *new_node;

	if (*tree == NULL)
	{
		new_node = binary_tree_node((binary_tree_t *)parent, value);
		if (new_node == NULL)
			return (NULL);

		*tree = new_node;
		return (new_node);
	}

	if (value < (*tree)->n)
		return (bst_insert_recursive(&((*tree)->left), value, *tree));

	if (value > (*tree)->n)
		return (bst_insert_recursive(&((*tree)->right), value, *tree));

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

	return (bst_insert_recursive(tree, value, NULL));
}
