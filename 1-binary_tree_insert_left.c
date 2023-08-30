#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts tree node on the left
*
* @parent: Pointer to the parent node
* @value: value of the node
*
* Return: Null for failure and pointer for success
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
