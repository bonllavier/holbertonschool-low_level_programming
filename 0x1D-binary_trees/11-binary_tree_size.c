#include "binary_trees.h"
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
