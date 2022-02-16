#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a tree
 * @tree: the tree in question
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lleaves, rleaves;

	if (tree == NULL)
		return (0);

	/* if tree/node is a leaf return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lleaves = binary_tree_leaves(tree->left);
	rleaves = binary_tree_leaves(tree->right);
	return (lleaves + rleaves);
}
