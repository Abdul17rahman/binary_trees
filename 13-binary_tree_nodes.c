#include "binary_trees.h"

/**
* binary_tree_nodes - calculates the nodes in a tree
*
* @tree: Pointer to the root node
*
* Return: size
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + 1);
}
