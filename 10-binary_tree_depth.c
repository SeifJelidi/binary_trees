#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: the depth of a node in tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *my_node = tree;
	size_t d = 0;

	if (!tree)
		return (0);
	while (my_node->parent)
	{
		my_node = my_node->parent;
		d++;
	}
	return (d);
}
