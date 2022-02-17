#include "binary_trees.h"

/**
 * array_to_bst - builds a bst from an array
 * @array: the aray in question
 * @size: size of array
 * Return: a pointer to he created bst
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *tree;

	tree = NULL;

	i = 0;
	while (i < size)
	{
		bst_insert(&tree, array[i]);
		i += 1;
	}
	return (tree);
}
