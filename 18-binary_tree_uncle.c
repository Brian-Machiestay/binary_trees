#include "binary_trees.h"

/**
 * binary_tree_uncle - the uncle node
 * @node: the node to return a sibling
 * Return: the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (!node)
		return (NULL);
	parent = node->parent;
	if (parent)
	{
		grandparent = parent->parent;
		if (grandparent)
		{
			if (grandparent->left == parent)
				return (grandparent->right);
			else
				return (grandparent->left);
		}
	}
	return (NULL);
}
