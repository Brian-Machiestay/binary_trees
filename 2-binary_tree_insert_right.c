#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left child of another node
 * @parent: the node whose left to set
 * @value: the value of the new node
 * Return: a pointer to the new node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *temp = NULL;

	if (!parent)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	if (!parent->right)
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
		return (newNode);
	}
	if (parent->right)
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
		newNode->right = temp;
		return (newNode);
	}
	return (newNode);
}
