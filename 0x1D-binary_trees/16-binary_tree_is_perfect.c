#include "binary_trees.h"
/**
 *binary_tree_is_perfect - it is perfect
 *@tree: tree.
 *Return: 0 - 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (height_2(tree->left) == height_2(tree->right))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 *height_2 - depth
 *@tree: tree.
 *Return: nothing.
 */
size_t height_2(const binary_tree_t *tree)
{
	size_t heightl = 0;
	size_t heightr = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		heightl = height_2(tree->left);
		heightr = height_2(tree->right);
		if (heightl > heightr)
		{
			return (heightl + 1);
		}
		else
		{
			return (heightr + 1);
		}
	}
}
