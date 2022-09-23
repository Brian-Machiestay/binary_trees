#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves
 * @tree: the node of the tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftleaves;
	size_t rightleaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leftleaves = binary_tree_leaves(tree->left);
	rightleaves = binary_tree_leaves(tree->right);
	return (leftleaves + rightleaves);
}
