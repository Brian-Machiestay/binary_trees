#include "binary_trees.h"

/**
 * binary_tree_nodes - count the no. of nodes with at least 1 child
 * @tree: the node of the tree
 * Return: the number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftnodes = 0;
	size_t rightnodes = 0;

	if (!tree)
		return (0);
	if (tree->right || tree->left)
	{
		rightnodes = (1 + binary_tree_nodes(tree->right) +
			      binary_tree_nodes(tree->right));
	}
	return (leftnodes + rightnodes);
}
