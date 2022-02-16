#include "binary_trees.h"

/**
 * binary_tree_size - gets size of tree recursively
 * @tree: the object in question
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int lsize, rsize;

		lsize = binary_tree_size(tree->left);
		rsize = binary_tree_size(tree->right);

		return (1 + lsize + rsize);
	}
	return (0);
}
