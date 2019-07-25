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
	int totalsizel = 0;
	int totalsizer = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	sizel = height_2(tree->left);
	sizer = height_2(tree->right);
	totalsizel = binary_tree_size(tree->left);
	totalsizer = binary_tree_size(tree->right);
/*
 *	printf("%d l %d r \n",sizel, sizer);
 *	printf("%d ltotal %d rtotal \n",totalsizel, totalsizer);
 */
	if (sizel == sizer)
	{
		if (totalsizel == 0 && totalsizer == 0)
		{
			return (1);
		}
		else if ((totalsizel + 1) % 2 == 0 && (totalsizer + 1) % 2 == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
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
/**
 *binary_tree_size - depth
 *@tree: tree.
 *Return: size the add between depths
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t depthl = 0;
	size_t depthr = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		depthl = binary_tree_size(tree->left);
		depthr = binary_tree_size(tree->right);
		return ((depthl + depthr) + 1);
	}
}
