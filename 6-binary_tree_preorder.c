#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree iin preorder
 * @func: the function to call for every node traversed
 * @tree: the root of the tree to delete
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
