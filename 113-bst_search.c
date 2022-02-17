#include "binary_trees.h"

/**
 * bst_search - searches for a vlaue in a bst
 * @tree: a bst to search
 * @value: the key to search
 * Return: a pointer to the found record or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *current;

	if (tree == NULL)
		return (NULL);
	current = (bst_t *)tree;

	while (current != NULL)
	{
		if (value == current->n)
			return (current);
		else if (value < current->n)
			current = current->left;
		else
			current = current->right;
	}
	return (current);
}
