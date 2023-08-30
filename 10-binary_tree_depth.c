#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a tree
*
* @tree: Pointer to the node
*
* Return: depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	depth = binary_tree_depth(tree->parent);

	return (1 + depth);
}
