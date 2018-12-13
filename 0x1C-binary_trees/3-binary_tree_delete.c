#include "binary_trees.h"

/**
* binary_tree_delete - frees an entire tree
* @parent: a pointer to the parent
*
* Return: None it is voiderino
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
