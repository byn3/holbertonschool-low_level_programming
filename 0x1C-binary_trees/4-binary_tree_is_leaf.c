#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: a pointer to the parent
*
* Return: returns 1 if true,, a leaf, or 0 if false or not a leaf
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		if (node->left || node->right)
			return (0);
	return (1);
}
