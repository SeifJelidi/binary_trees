#include "binary_trees.h"

/**
 * binary_tree_leaves - counting the leaves in a binary tree.
 * @tree: pointer to the root node of tree.
 * Return: number of leaves in the binary tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	s = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (s);
}
