#include "binary_trees.h"

/**
* binary_tree_nodes - prints how many nodes with kids
* @tree: a pointer to the tree
*
* Return: an int
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* lol so immature size_t howBigTheD; */

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
