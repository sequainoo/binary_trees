#include "binary_trees.h"

/**
 * hastwins - checks if node has two children
 * @node: node in question
 * Return: 1 or 0
 */
int hastwins(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left && node->right)
		return (1);
	return (0);
}

/**
 * childless - checks wheather node is childless
 * @tree: node/tree in question
 * Return: 1 if childless and 0 otherwise
 */
int childless(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - checsk if tree is full
 * @tree: tree in question
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	if (childless(tree))
		return (1);

	if (hastwins(tree))
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		return (l && r);
	}
	return (0);
}
