#include "binary_trees.h"

/**
 * tree_balance - The balance factor
 * @tree: the root of the tree
 * Return: the balance factor
 */
int tree_balance(const binary_tree_t *tree);
int tree_balance(const binary_tree_t *tree)
{
	size_t lefheight;
	size_t rightheight;

	if (!tree)
		return (0);
	lefheight = tree_balance(tree->left);
	rightheight = tree_balance(tree->right);
	return (lefheight - rightheight + 1);
}
/**
 * binary_tree_balance - The balance factor
 * @tree: the root of the tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (tree_balance(tree) - 1);
}
