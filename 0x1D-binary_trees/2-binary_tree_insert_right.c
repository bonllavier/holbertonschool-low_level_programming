#include "binary_trees.h"
/**
 *binary_tree_insert_right - insert right
 *@parent: head
 *@value: string.
 *Return: new pointer.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		free(node);
		return (0);
	}
	if (parent->right == NULL)
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		parent->right = node;
	}
	else
	{
		node->n = value;
		node->parent = parent;
		node->right = parent->right;
		node->left = NULL;
		parent->right->parent = node;
		parent->right = node;
	}
	return (node);
}
