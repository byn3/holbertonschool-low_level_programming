#include "binary_trees.h"

/**
* binary_tree_postorder - prints the postorder traversal
* @tree: a pointer to the parent
* @func: a void int func
*
* Return: NONE IT IS VOID
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
