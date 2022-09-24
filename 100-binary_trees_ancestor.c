#include "binary_trees.h"

/**
 * binary_trees_ancestor - the lowest common acestor
 * @first: the first node
 * @second: the second node
 * Return: the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *firstparent;
	const binary_tree_t *secondparent;

	if (!first || !second)
		return (NULL);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	else if (second->parent == first)
		return ((binary_tree_t *)first);
	firstparent = first;
	secondparent = second;
	while (firstparent)
	{
		while (secondparent)
		{
			if (firstparent == secondparent)
				return ((binary_tree_t *)firstparent);
			secondparent = secondparent->parent;
		}
		firstparent = firstparent->parent;
		secondparent = second;
	}
	return (NULL);
}
