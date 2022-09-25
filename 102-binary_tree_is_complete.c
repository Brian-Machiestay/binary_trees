#include "binary_trees.h"
/**
 * binary_tree_is_complete - is complete
 * @tree: the root node
 * Return: 1 if complete 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree && ((!tree->right && tree->left) ||
		     (tree->right && !tree->left)))
		return (0);
	if (!tree)
		return (1);
	return (1 && binary_tree_is_complete(tree->left) &&
		 binary_tree_is_complete(tree->right));
}
