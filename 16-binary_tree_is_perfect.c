#include "binary_trees.h"

/**
 * tree_balance - The balance factor
 * @tree: the root of the tree
 * Return: the balance factor
 */
int tree_balance(const binary_tree_t *tree);
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
#include "binary_trees.h"

#include "binary_trees.h"

/**
 * tree_is_full - is the binary tree full
 * @tree: the root of the tree
 * Return: 1 if full 0 else
 */
int tree_is_full(const binary_tree_t *tree);
int tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (1);
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		return (1 && tree_is_full(tree->left) &&
			tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_full - is the binary tree full
 * @tree: the root of the tree
 * Return: 1 if full 0 else
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_is_full(tree));
}
/**
 * binary_tree_is_perfect - is the tree perfect
 * @tree: the root node
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;
	int balance_factor;

	if (!tree)
		return (0);
	left = tree_balance(tree->left);
	right = tree_balance(tree->right);
	balance_factor = left - right;
	if (balance_factor == 0 && (binary_tree_is_full(tree) == 1))
		return (1);
	return (0);
}
