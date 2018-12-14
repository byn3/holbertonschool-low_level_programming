#include "binary_trees.h"

/**
* binary_tree_leaves - prints how many leaves
* @tree: a pointer to the tree
*
* Return: an int
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* lol so immature size_t howBigTheD; */

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0 + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
