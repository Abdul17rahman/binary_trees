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
* binary_tree_is_perfect - Checks if tree is perfect
*
* @tree: Pointer to the root node
*
* Return: 1 if leaf and 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		if (tree->left && tree->right)
		{
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
		}
	}

	return (0);
}
