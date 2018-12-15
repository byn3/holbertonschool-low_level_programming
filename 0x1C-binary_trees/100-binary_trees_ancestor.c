#include "binary_trees.h"

/**
* binary_tree_ancester - finds if 2 nodes share a ancestor
* @first: the first node given
* @second: the second node given
*
* Return: A pointer to the ancestor node
*/

binary_tree_t *binary_trees_ancestor(
			const binary_tree_t *first, const binary_tree_t *second)
{
	int i = 0;
	const binary_tree_t* array[3000];

	if (!first || !second)
		return (NULL);
	if (first->parent == NULL || second->parent == NULL)
		return (NULL);

	while (first)
	{
		array[i] = first;
		first = first->parent;
		i++;
	}
	array[i] = NULL;

	while (second)
	{
		i = 0;
		while (array[i])
		{
			if (second == (array[i]))
				return ((binary_tree_t *) array[i]);
			i++;
		}
		second = second->parent;
	}
	return (NULL);
}
