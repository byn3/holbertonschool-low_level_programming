#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a node is a root
* @node: a pointer to the parent
*
* Return: returns 1 if true,, a root, or 0 if false or not a leaf
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent)
			return (0);
		return (1);
	}
	return (0);
}
