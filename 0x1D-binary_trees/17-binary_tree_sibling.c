#include "binary_trees.h"
/**
 *binary_tree_sibling - depth
 *@node: node.
 *Return: node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		if (node->parent != NULL)
		{
			if (node->parent->left == node)
			{
				return (node->parent->right);
			}
			else
			{
				return (node->parent->left);
			}
		}
		else
		{
			return (NULL);
		}
	}
}
