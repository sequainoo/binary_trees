#include "binary_trees.h"

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
 * binary_tree_nodes - counts nodes with at least one child
 * @tree: the tree in question
 * Return: 0 if tree is empty or has no nodes and count of nodes if any
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lnodes, rnodes;

	if (tree == NULL)
		return (0);
	if (childless(tree))
		return (0);
	lnodes = binary_tree_nodes(tree->left);
	rnodes = binary_tree_nodes(tree->right);
	return (1 + lnodes + rnodes);
}
