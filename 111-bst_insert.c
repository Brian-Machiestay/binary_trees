#include "binary_trees.h"
bst_t *insert(bst_t **tree, binary_tree_t *parent, binary_tree_t *newNode);
/**
 * insert - inserts a node into a bst
 * @tree: the root node
 * @newNode: the newNode to insert
 * @parent: the parent of this node
 * Return: the node inserted
 */
bst_t *insert(bst_t **tree, binary_tree_t *parent, binary_tree_t *newNode)
{
	if (!tree)
		return (NULL);
	if (!*tree)
	{
		newNode->parent = parent;
		return (newNode);
	}
	if (newNode->n < (*tree)->n)
		(*tree)->left = insert(&((*tree)->left),
				       (binary_tree_t *)*tree, newNode);
	else if (newNode->n > (*tree)->n)
		(*tree)->right = insert(&((*tree)->right),
					(binary_tree_t *)*tree, newNode);
	else if (newNode->n == (*tree)->n)
		newNode->parent = newNode;
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
	binary_tree_t *newNode;

	newNode = binary_tree_node(NULL, value);
	if (!*tree)
		return (*tree = newNode);

	insert(tree, NULL, newNode);
	if (newNode->parent == newNode)
	{
		free(newNode);
		return (NULL);
	}
	return ((bst_t *)newNode);
}
