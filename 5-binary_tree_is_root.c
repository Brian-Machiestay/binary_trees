#include "binary_trees.h"

/**
 * binary_tree_is_root - inserts a node as the left child of another node
 * @node: the root of the tree to delete
 * Return: 1 if node is root 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
