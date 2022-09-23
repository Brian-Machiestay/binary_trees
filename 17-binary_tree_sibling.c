#include "binary_trees.h"

/**
 * binary_tree_sibling - the sibling node
 * @node: the node to return a sibling
 * Return: the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = node->parent;
	if (parent)
	{
		if (parent->left == node)
			return (parent->right);
		else
			return (parent->left);
	}
	return (NULL);
}
