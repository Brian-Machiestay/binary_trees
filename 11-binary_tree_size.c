#include "binary_trees.h"

/**
 * binary_tree_size - computes te size of a tree
 * @tree: the root of the tree to delete
 * Return: the size of a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}
