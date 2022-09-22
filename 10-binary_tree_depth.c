#include "binary_trees.h"

/**
 * binary_tree_depth - tries the depth of a node
 * @tree: the root of the tree to delete
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp;
	size_t count = 0;

	if (!tree)
		return (0);
	temp = tree->parent;
	while (temp)
	{
		count++;
		temp = temp->parent;
	}
	return (count);
}
