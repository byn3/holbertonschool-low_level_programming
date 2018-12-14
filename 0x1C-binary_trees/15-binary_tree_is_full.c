#include "binary_trees.h"

/**
* binary_tree_is_full - checks to see if this is a full tree
* @tree: a pointer to the tree
*
* Return: an int
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	return (0);
}
