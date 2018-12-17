#include "binary_trees.h"

/**
* binary_tree_size - prints the size of a tree
* @tree: a pointer to the tree
*
* Return: an int
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
* isComplete - helper function that does logic to see if complete
* @tree: the tree we will check
* @index: the level we are checking, (index in an array size)
* @nodes: the number of total nodes we have
* Description: This function checks if the binary tree is complete or not
*
* Return: an int. 1 means not complete
*/
int isComplete(const binary_tree_t *tree,
				unsigned int index,
				unsigned int nodes)
{
	/* An empty tree is complete */
	if (tree == NULL)
		return (1);

	/* If index assigned to current node is more than */
	/* number of nodes in tree, then tree is not complete */
	if (index >= nodes)
		return (0);

	/* Recursion for left and right subtrees */
	return (isComplete(tree->left, 2 * index + 1, nodes) &
			isComplete(tree->right, 2 * index + 2, nodes));
}

/**
* binary_tree_is_complete - a function that checks if a tree is comeplete
* @tree: the node that we are checking if complete
*
* Return: it returns a 1 or 0. if tree not complete or nul lreturn 1 else 1
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int i = 0;
	int nodes = binary_tree_size(tree);

	if (isComplete(tree, i, nodes))
		return (1);
	return (0);
}
