#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a left child
* @parent: a pointer to the parent
* @value: the value we want in the new node
*
* Return: a pointer to the new node or NULL if fails
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new || !parent)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	new->right = NULL;
	if (new->left)
		new->left->parent = new;
	parent->left = new;
	return (new);
}
