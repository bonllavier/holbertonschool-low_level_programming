#include "binary_trees.h"
/**
 *binary_tree_balance - check balance
 *@tree: tree.
 *Return: nothing.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (height_2(tree->left) - height_2(tree->right));
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
