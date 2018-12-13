#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a left child
* @parent: a pointer to the parent
* @value: the value we want in the new node
*
* Return: a pointer to the new node or NULL if fails
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = parent->right;
	new->left = NULL;
	if (new->right)
		new->right->parent = new;
	parent->right = new;
	return (new);
}
