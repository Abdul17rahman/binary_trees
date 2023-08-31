#include "binary_trees.h"

/**
* binary_tree_sibling - Checks if a node is a sibling
*
* @node: Pointer to the node
*
* Return: pointer and 0 otherwise
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);
	else
		return (NULL);
}

/**
* binary_tree_uncle - Checks for uncles
*
* @node: Pointer to the node
*
* Return: pointer and 0 otherwise
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}
