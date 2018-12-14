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
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	return (0);
}

/**
* binary_tree_nodes - prints how many nodes with kids
* @tree: a pointer to the tree
*
* Return: an int
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}


/**
* binary_tree_is_perfect - checks to see if this is a perfect tree
* @tree: a pointer to the tree
*
* Return: an int
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	if (!(binary_tree_is_full(tree)))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (left == right)
		return (1);
	return (0);
}
