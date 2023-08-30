#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
    if (first == NULL || second == NULL)
        return (NULL);

    if (first == second)
        return ((binary_tree_t *)first);

    if (binary_tree_depth(first) > binary_tree_depth(second))
        return (binary_trees_ancestor(first->parent, second));
    else if (binary_tree_depth(first) < binary_tree_depth(second))
        return (binary_trees_ancestor(first, second->parent));
    else
        return (binary_trees_ancestor(first->parent, second->parent));
}

#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node, 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
