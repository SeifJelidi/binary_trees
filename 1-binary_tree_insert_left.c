#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node.
* @parent: a pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return: pointer to the new node, or NULL on failure
*/


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left)
	{
		my_node->left = parent->left;
		my_node->left->parent = my_node;
		parent->left = my_node;
		my_node->parent = parent;
	}
	else
	{
		parent->left = my_node;
		my_node->parent = parent;
	}

	return (my_node);
}
