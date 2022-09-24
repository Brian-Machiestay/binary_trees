#include "binary_trees.h"
void level_order_print(binary_tree_t *tree, void (*func)(int), size_t height);
size_t binary_height(const binary_tree_t *tree);
/**
 * binary_height - computes the tree height recursively
 * @tree: the root of the tree
 * Return: the height of the binary tree
 */
size_t binary_height(const binary_tree_t *tree)
{
	size_t lefheight;
	size_t rightheight;

	if (!tree)
		return (0);
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
	if (!tree)
		return (0);
	return (binary_height(tree) - 1);
}
/**
 * level_order_print - print level order
 * @tree: the root node
 * @func: the function to apply
 * @height: the height of the tree
 */
void level_order_print(binary_tree_t *tree, void (*func)(int), size_t height)
{
	if (!tree)
		return;
	if (height == 0)
		func(tree->n);
	else
	{
		level_order_print(tree->left, func, height - 1);
		level_order_print(tree->right, func, height - 1);
	}
}
/**
 * binary_tree_levelorder - traverses a tree in level order
 * @tree: the root node
 * @func: the function to apply
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height;
	size_t i;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	for (i = 0; i <= height; i++)
	{
		level_order_print((binary_tree_t *)tree, func, i);
	}
}
