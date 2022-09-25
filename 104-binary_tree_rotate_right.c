#include "binary_trees.h"

/**
 * binary_tree_rotate_right - right rotation on binary tree
 * @tree: the root node
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newRoot;

	if (!tree)
		return (NULL);
	newRoot = tree->left;
	tree->left = newRoot->right;
	newRoot->right = tree;
	tree->parent = newRoot;
	newRoot->parent = NULL;
	return (newRoot);
}
