#include "binary_trees.h"

/**
 * height - gets height of a tree recursively:
 * is a helper to get height starting from 1
 * @tree: the tree in question
 * Return: height of tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	lh = 1 + height(tree->left);
	rh = 1 + height(tree->right);

	if (lh >= rh)
		return (lh);
	return (rh);
}

/**
 * binary_tree_height - gets height of binary tree
 * @tree: the tree in question
 * Return: height as int starting from zero
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (height(tree) - 1);

}
