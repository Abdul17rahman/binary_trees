#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a tree
*
* @tree: Pointer to the root node
*
* Return: height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (left_height > right_height ? left_height : right_height);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* binary_tree_balance - calculates the blc factor of a tree
*
* @tree: Pointer to the root node
*
* Return: factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, full;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (tree->left == NULL || tree->right == NULL)
	{
		full = binary_tree_height(tree);
		if (tree->left)
			return (full);
		else
			return (left - full);
	}

	return (left - right);
}
