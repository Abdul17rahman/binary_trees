#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if tree is full
*
* @tree: Pointer to the root node
*
* Return: 1 if leaf and 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
