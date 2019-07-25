#include "binary_trees.h"
/**
 *binary_tree_is_perfect - it is perfect
 *@tree: tree.
 *Return: 0 - 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int sizel = 0;
	int sizer = 0;

	if (tree == NULL)
	{
		return (0);
	}
	sizel = height_2(tree->left);
	sizer = height_2(tree->right);
/*
 *printf("%d l %d r \n",sizel, sizer);
*/
	if (sizel == sizer)
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
/*
 *	size_t heightl = 0;
 *	size_t heightr = 0;
*/

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + height_2(tree->left) + height_2(tree->right));
	}
	else
	{
		return (0);
	}
}
