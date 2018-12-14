#include "binary_trees.h"

/**
* binary_tree_leaves - prints how many leaves
* @tree: a pointer to the tree
*
* Return: an int
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && !(tree->right) || !(tree->left) && tree->right)
		return (1);
	return (0 + binary_tree_is_full(tree->left) + binary_tree_is_full(tree->right));
}
