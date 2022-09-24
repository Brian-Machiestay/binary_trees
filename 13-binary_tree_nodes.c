#include "binary_trees.h"

/**
 * binary_tree_nodes - count the no. of nodes with at least 1 child
 * @tree: the node of the tree
 * Return: the number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (tree->right && tree->left)
	{
		return (1 + binary_tree_nodes(tree->right) +
			      binary_tree_nodes(tree->left));
	}
	else if (tree->right)
		return (1 + binary_tree_nodes(tree->right));
	else if (tree->left)
		return (1 + binary_tree_nodes(tree->left));
	return (0);
}
