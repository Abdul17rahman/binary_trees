#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts tree node on the right
*
* @parent: Pointer to the parent node
* @value: value of the node
*
* Return: Null for failure and pointer for success
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	newnode->right = parent->right;
	newnode->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
