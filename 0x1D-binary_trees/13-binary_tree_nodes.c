#include "binary_trees.h"
/**
 *binary_tree_nodes - count at least with one child
 *@tree: tree.
 *Return: nothing.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t heightl = 0;
	size_t heightr = 0;

	if (tree == NULL)
	{
		return (0);
	}
	heightl = binary_tree_nodes(tree->left);
	heightr = binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else
	{
		return (heightl + heightr + 1);
	}
}
