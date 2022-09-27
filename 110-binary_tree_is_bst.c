#include "binary_trees.h"
/**
 * tree_is_bst - inserts a node into a bst
 * @t: the root node
 * @rt: the root value
 * Return: 0 if if not otherwise 1
 */
int tree_is_bst(const binary_tree_t *t, int rt)
{
	int left_is_def = 1;
	int right_is_def = 1;
	int left_one_null = 1;
	int right_one_null = 1;

	if (!t)
		return (1);
	if (t && t->left)
		left_is_def = t->left && ((t->left->n < t->n) &&
					  (t->left->n < rt));
	if (t && t->right)
		right_is_def = t->right && ((t->right->n > t->n) &&
					    (t->right->n > rt));
	left_one_null = !t->left && right_is_def;
	right_one_null = !t->right && left_is_def;
	if ((left_is_def && right_is_def) || (left_one_null || right_one_null))
		return (1);
	else if (t->left->n >= rt || t->right->n <= rt)
		return (0);
	return (1 && tree_is_bst(t->left, rt) && tree_is_bst(t->right, rt));
}

/**
 * binary_tree_is_bst - inserts a node into a bst
 * @tree: the root node
 * Return: 0 if otherwise 1
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int n;
	int left_tree;
	int right_tree;

	if (!tree)
		return (0);
	n = tree->n;
	left_tree = tree_is_bst(tree->left, n);
	right_tree = tree_is_bst(tree->right, n);
	return (left_tree && right_tree);
}
