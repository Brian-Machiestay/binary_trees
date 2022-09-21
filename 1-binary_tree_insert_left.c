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
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	if (parent->left != NULL)
	{
		printf("was here\n");
		temp = parent->left;
		printf("nothing happened 1\n");
		parent->left = newNode;
		printf("no p here too 2\n");
		newNode->left = temp;
		printf("no p 3\n");
		return (newNode);
	}
	parent->left = newNode;
	return (newNode);
}
