#include "binary_trees.h"
/**
 * search - searches for a value in bst
 * @tree: the root node
 * @value: the value to search
 * @thenode: the address of the node
 * Return: the node inserted
 */
bst_t *search(const bst_t *tree, int value, bst_t **thenode)
{
	if (!tree)
		return (NULL);
	if (value < tree->n)
		search(tree->left, value, thenode);
	else if (value > tree->n)
		search(tree->right, value, thenode);
	else if (value == tree->n)
		*thenode = (bst_t *)tree;
	return ((bst_t *)tree);
}

/**
 * bst_search - searches for a value in bst
 * @tree: the root node
 * @value: the value to search
 * Return: the address of th node
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *theNode = NULL;

	search(tree, value, &theNode);
	return (theNode);
}
