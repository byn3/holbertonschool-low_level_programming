#include "binary_trees.h"

/**
* binary_tree_height - prints the height of a node
* @tree: a pointer to the tree
*
* Return: an int
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftD, rightD;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	leftD = binary_tree_height(tree->left);
	rightD = binary_tree_height(tree->right);

	if (leftD > rightD)
		return (leftD + 1);
	else
		return (rightD + 1);
}

/**
* binary_tree_balance - prints how many leaves
* @tree: a pointer to the tree
*
* Return: an int
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree->left)
		left += 1;
	if (tree->right)
		right += 1;
	left += binary_tree_height(tree->left);
	right += binary_tree_height(tree->right);

	return (left - right);
}
