#include "binary_trees.h"
/**
 *binary_tree_is_leaf - find a leaf node
 *@node: head
 *Return: number of the leaf node.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
