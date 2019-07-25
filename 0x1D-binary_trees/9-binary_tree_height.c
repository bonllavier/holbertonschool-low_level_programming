#include "binary_trees.h"
/**
 *binary_tree_height - height
 *@tree: tree.
 *Return: nothing.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightl = 0;
	size_t heightr = 0;
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		heightl = binary_tree_height(tree->left);
		heightr = binary_tree_height(tree->right);
		if (heightl > heightr)
		{
			return (heightl + 1);
		}
		else if (tree->left != NULL || tree->right != NULL)
		{
			return (heightr + 1);
		}
		else
		{
			return (height);
		}
	}
}
