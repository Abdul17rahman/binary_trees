#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a tree
*
* @tree: Pointer to the root node
*
* Return: size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
	{
		return (0);
	}
	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);

	return (left_nodes + right_nodes + 1);
}
