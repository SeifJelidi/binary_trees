#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int hl, hr;

	if (!tree)
		return (0);

	if (tree->left)
		hl = 1 + binary_tree_height(tree->left);
	else
		hl = 0;
	if (tree->right)
		hr = 1 + binary_tree_height(tree->right);
	else
		hr = 0;

	return (hl - hr);
}
