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
* printLevel - prints the tree and recursess down to that level
* @tree: a tree node given
* @d: the level we want
* @func: the function poiniter
*
* Return: Returns nothing it is void
*/

void printLevel(const binary_tree_t *tree, int d, void (*func)(int))
{
	if (!tree)
		return;
	if (d == 1)
		func(tree->n);
	else
	{
		printLevel(tree->left, d - 1, func);
		printLevel(tree->right, d - 1, func);
	}
}

/**
* binary_tree_levelorder - the level order traversal of a tree
* @tree: a tree node given
* @func: a function we are given
*
* Return: Returns nothing it is void
*/


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level;
	int i;

	if (!tree || !func)
		return;

	level = binary_tree_height(tree);
	for (i = 1; i <= level + 1; i++)
		printLevel(tree, i, func);
}
