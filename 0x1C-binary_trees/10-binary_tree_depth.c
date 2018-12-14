#include "binary_trees.h"

/**
* binary_tree_depth - prints the depth of a node
* @tree: a pointer to the tree
*
* Return: an int
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* lol so immature size_t howBigTheD; */

	if (!tree || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
