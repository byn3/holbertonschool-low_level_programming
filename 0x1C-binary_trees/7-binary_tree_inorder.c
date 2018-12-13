#include "binary_trees.h"

/**
* binary_tree_inorder - prints the preorder traversal
* @tree: a pointer to the parent
* @func: a void int func
*
* Return: NONE IT IS VOID
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
