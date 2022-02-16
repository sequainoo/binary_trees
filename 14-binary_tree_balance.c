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
 * t_height - gets height of binary tree
 * @tree: the tree in question
 * Return: height as int starting from zero
 */
size_t t_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (height(tree) - 1);
}

/**
 * binary_tree_balance - return the balance factor of the tree
 * @tree: the tree in question
 * Return: an interger representing the balcne factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* balance factor is height_right_subtree - height of leftsubtree */
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
