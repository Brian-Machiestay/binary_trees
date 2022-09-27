#include "binary_trees.h"
/**
 * array_to_bst - inserts a node into a bst
 * @array: the array to convert
 * @size: the size of the array
 * Return: the root of the tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t n;
	bst_t *tree = NULL;

	for (n = 0; n < size; n++)
	{
		bst_insert(&tree, array[n]);
	}
	return (tree);
}
