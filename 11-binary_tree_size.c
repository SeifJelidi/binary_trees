#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	s = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (s);
}
