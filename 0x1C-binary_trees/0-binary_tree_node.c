#include "binary_trees.h"

/**
* binary_tree_node - creates a binart tree node
* @parent: a pointer to the parent
* @value: the value we want in the new node
*
* Return: a pointer to the new node or NULL if fails
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
