#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a tree in order
 * @func: the function to call for every node traversed
 * @tree: the root of the tree to delete
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
