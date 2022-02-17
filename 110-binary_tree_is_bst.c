#include "binary_trees.h"

/**
 * less_than_every_node - checks that value is less than every tree node
 * @tree: the tree to look into
 * @data: data to compare
 * Return: 1 if true and 0 if false
 */
int less_than_every_node(binary_tree_t *tree, int data)
{
	int left_results, right_results;

	if (tree == NULL)
		return (0);
	if (tree->n < data)
		return (0);
	if (tree->left)
	{
		left_results = less_than_every_node(tree->left, data);
	}
	else
		left_results = 1;

	if (tree->right)
		right_results = less_than_every_node(tree->right, data);
	else
		right_results = 1;
	return (right_results && left_results);
}

/**
 * greater_than_every_node - checks that value is greater than every tree node
 * @tree: the tree to look into
 * @data: data to compare
 * Return: 1 if true and 0 if false
 */
int greater_than_every_node(binary_tree_t *tree, int data)
{
	int left_results, right_results;

	if (tree == NULL)
		return (0);
	if (tree->n > data)
		return (0);
	if (tree->left)
	{
		left_results = greater_than_every_node(tree->left, data);
	}
	else
		left_results = 1;

	if (tree->right)
		right_results = greater_than_every_node(tree->right, data);
	else
		right_results = 1;
	return (right_results && left_results);
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
 * binary_tree_is_bst - checks that binary tree is a bst
 * @tree: tree in question
 * Return: 1 for true or 0 for false
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left_is_bst, right_is_bst;

	if (tree == NULL)
		return (0);

	if (childless(tree))
		return (1);

	if (!tree->left)
		left_is_bst = 1;
	else
	{
		/* check that node value is bigger than all in left subtree */
		if (!greater_than_every_node(tree->left, tree->n))
			return (0);
		left_is_bst = binary_tree_is_bst(tree->left);
	}

	if (!tree->right)
		right_is_bst = 1;
	else
	{
		/* check node value is less than every node in right sub tree */
		if (!less_than_every_node(tree->right, tree->n))
			return (0);
		right_is_bst = binary_tree_is_bst(tree->right);
	}

	return (left_is_bst && right_is_bst);

}
