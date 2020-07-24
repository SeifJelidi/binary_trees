#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of tree, or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	if (hl >= hr)
		return (hl + 1);
	return (hr + 1);
}
