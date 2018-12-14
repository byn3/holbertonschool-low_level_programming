#include "binary_trees.h"

/**
* binary_tree_size - prints the size of a tree
* @tree: a pointer to the tree
*
* Return: an int
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* lol so immature size_t howBigTheD; */

	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
