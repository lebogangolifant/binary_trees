#include "binary_trees.h"

/**
 * array_to_bst - Convert an array to a Binary Search Tree (BST)
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * Return: Pointer to the root node of the BST, or NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root = NULL;

	for (; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);
}
