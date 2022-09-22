#include "binary_trees.h"

/**
 * binary_height - computes the tree height recursively
 * @tree: the root of the tree
 * Return: the height of the binary tree
 */
size_t binary_height(const binary_tree_t *tree);
size_t binary_height(const binary_tree_t *tree)
{
	size_t lefheight;
	size_t rightheight;

	if (!tree)
		return 0;
	lefheight = binary_height(tree->left);
	rightheight = binary_height(tree->right);
	if (lefheight < rightheight)
		return (rightheight + 1);
	return (lefheight + 1);
}

/**
 * binary_tree_height - computes the height of this tree
 * @tree: the node whose height to search
 * Return: the true height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (binary_height(tree) - 1);
}
