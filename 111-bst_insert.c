#include "binary_trees.h"
bst_t *insert(bst_t **tree, bst_t *parent, int value);
/**
 * insert - inserts a node into a bst
 * @tree: the root node
 * @value: the value of the node to insert
 * @parent: the parent of this node
 * Return: the node inserted
 */
bst_t *insert(bst_t **tree, binary_tree_t *parent, int value)
{
	if (!*tree)
	{
		return (*tree = binary_tree_node(parent, value));
	}
	if (value < (*tree)->n)
	{
		((*tree)->left = insert(&((*tree)->left),
					(binary_tree_t *)*tree, value));
	}
	else if (value > (*tree)->n)
	{
		((*tree)->right = insert(&((*tree)->right),
					 (binary_tree_t *)*tree, value));
	}
	return (*tree);
}
/**
 * bst_insert - inserts a node into a bst
 * @tree: the root node
 * @value: the value of the new node
 * Return: the address of the new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!*tree)
		return (*tree = binary_tree_node(NULL, value));
	return (insert(tree, NULL, value));
}
