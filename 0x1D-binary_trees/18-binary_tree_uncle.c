#include "binary_trees.h"
/**
 *binary_tree_uncle - find th uncle node
 *@node: node.
 *Return: size the add between depths
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		if (node->parent != NULL && node->parent->parent != NULL)
		{
			if (node->parent->parent->left == node->parent)
			{
				return (node->parent->parent->right);
			}
			else
			{
				return (node->parent->parent->left);
			}
		}
		else
		{
			return (NULL);
		}
	}
}
