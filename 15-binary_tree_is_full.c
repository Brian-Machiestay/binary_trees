#include "binary_trees.h"

/**
 * binary_tree_is_full - is the binary tree full
 * @tree: the root of the tree
 * Return: 1 if full 0 else
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (1);
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		return (1 && binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
