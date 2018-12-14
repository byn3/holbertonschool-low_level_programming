#include "binary_trees.h"

/**
* binary_tree_sibling - checks out the sibling
* @node: a pointer to the node
*
* Return: a tree
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
