#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree post order
 * @func: the function to call for every node traversed
 * @tree: the root of the tree to delete
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
