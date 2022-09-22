#include "binary_trees.h"

/**
 * binary_tree_is_leaf - inserts a node as the left child of another node
 * @node: check if node is a leaf
 * Return: 1 if a leaf and 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
