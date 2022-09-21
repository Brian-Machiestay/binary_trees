#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: the node whose left to set
 * @value: the value of the new node
 * Return: a pointer to the new node or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left = newNode;
		return (newNode);
	}
	parent->left = newNode;
	return (newNode);
}
