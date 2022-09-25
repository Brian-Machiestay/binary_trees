#include "binary_trees.h"

/**
 * binary_tree_rotate_left - left rotation on binary tree
 * @tree: the root node
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newRoot;

	newRoot = tree->right;
	tree->right = newRoot->left;
	newRoot->left = tree;
	tree->parent = newRoot;
	newRoot->parent = NULL;
	return (newRoot);
}
