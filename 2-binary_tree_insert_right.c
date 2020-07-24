#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child..
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *my_node;

	if (!parent)
		return (NULL);
	my_node = malloc(sizeof(binary_tree_t));
	if (!my_node)
		return (NULL);

	my_node->n = value;
	my_node->left = NULL;
	my_node->right = NULL;

	if (parent->right)
	{
		my_node->right = parent->right;
		my_node->right->parent = my_node;
		parent->right = my_node;
	my_node->parent = parent;
	}
	else

	{
	parent->right = my_node;
	my_node->parent = parent;
	}
	return (my_node);
}
