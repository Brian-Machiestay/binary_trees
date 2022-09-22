#include "binary_trees.h"

/**
 * binary_tree_delete - inserts a node as the left child of another node
 * @tree: the root of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *templeft;
	binary_tree_t *tempright;

	if (!tree)
		return;
	templeft = tree->left;
	tempright = tree->right;

	free(tree);
	binary_tree_delete(templeft);
	binary_tree_delete(tempright);
}
