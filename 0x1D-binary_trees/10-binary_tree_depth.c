#include "binary_trees.h"
/**
 *binary_tree_depth - depth
 *@tree: tree.
 *Return: nothing.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
}
