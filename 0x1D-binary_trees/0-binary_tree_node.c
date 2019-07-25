#include "binary_trees.h"
/**
 * binary_tree_node - create new node
 *@parent: parent of the actual node
 *@value: value to be inserted
 * Return: direction of the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
