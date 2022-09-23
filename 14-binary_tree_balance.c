#include "binary_trees.h"

/**
 * tree_balance - The balance factor
 * @tree: the root of the tree
 * Return: the balance factor
 */
int tree_balance(const binary_tree_t *tree);
int balance(const binary_tree_t *tree);
int tree_balance(const binary_tree_t *tree)
{
	int lefheight;
	int rightheight;

	if (!tree)
		return (0);
	lefheight = tree_balance(tree->left);
	rightheight = tree_balance(tree->right);
	if (lefheight < rightheight)
		return (rightheight + 1);
	return (lefheight + 1);
}
/**
 * balance - The balance factor
 * @tree: the root of the tree
 * Return: the balance factor
 */
int balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_balance(tree));
}
/**
 * binary_tree_balance - balance factor
 * @tree: the root node of the tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (!tree)
		return (0);
	left = balance(tree->left);
	right = balance(tree->right);
	return (left - right);
}
