#include "binary_trees.h"

/**
* binary_tree_node - Creates a new binary tree node
*
* @parent: Pointer to the parent node
* @value: value of the node
*
* Return: Null for failure and pointer for success
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
