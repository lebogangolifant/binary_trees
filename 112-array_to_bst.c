#include "binary_trees.h"

/**
 * array_to_bst - Turns an array into a BST tree
 * @array: Array to be turned into a BST tree
 * @size: Size of the array
 * Return: BST tree from the array
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
