#include "binary_trees.h"

/**
* binary_tree_preorder - prints the preorder traversal
* @tree: a pointer to the parent
* @func: a void int func
*
* Return: NONE IT IS VOID
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
